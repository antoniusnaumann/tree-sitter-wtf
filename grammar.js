/**
 * @file WebAssembly Types & Functions
 * @author Antonius Naumann <git@antonius.dev>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "wtf",
  extras: _ => ["\t", " "],

  rules: {
    source_file: $ => withNewline($,
      $.newlines,
      optional($.package_header),
      repeat(seq($.toplevel, $.newlines)),
      $.newlines,
    ),    


    package_header: $ => "todo: package",

    toplevel: $ => choice(
      $.func,
      $.record,
      $.resource,
    ),


    func: $ => withNewline($,
      token("func"),
      $.ident,
      "(",
      ")",
      "{",
      "}",
    ),    
 
    record: $ => withNewline($,
      token("record"),
      $.ident,
      "{",
      optional($._fields),
      "}"
    ),

    resource: $ => withNewline($,
      token("resource"),
      $.ident, 
      $._fields,
      // TODO: constructor
      repeat(seq($.func, $.newlines)),
    ),


    _fields: $ => repeat1(seq(
      $.ident,
      ":",
      $.ident,
      choice($.newline, ",", ";"),
      optional($.newlines),
    )),

    _statements: $ => repeat1(seq(
      $.statement,
      choice($.newline, ";"),
      optional($.newlines),
    )),


    statement: $ => choice(
      $.declaration,
      $.assignment,
      $.expression,
    ),

    declaration: $ => withNewline($,
      choice("let", "var"),
      $.ident,
      optional(withNewline($, ":", $.ident)),
      optional(withNewline($, "=", $.expression)),
    ),    

    assignment: $ => withNewline($,
      // TODO: allow expressions
      $.ident,
      $._assignment_operator,
    ),
    _assignment_operator: $ => choice(
      "=",
      "+=",
      "-=",
      "*=",
      "/=",
      "?=",
    ),

    expression: $ => choice(
      $.ident,
    ),
    
    ident: $ => /[a-z_][a-z0-9_]*/,
    
    newlines: $ => seq($.newline),
    newline: $ => choice(
      "\n",
      "\r",
    ),

    comment: $ => token(seq('//', /[^\n^\r]*/))
  }
});

function withNewline($, ...rules) {
  return seq(
    rules[0],
    ...rules.slice(1).flatMap(rule => [$.newlines, rule])
  );
}
