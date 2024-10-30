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
      repeat(seq($.declaration, $.newlines)),
      $.newlines,
    ),    


    package_header: $ => "todo: package",

    declaration: $ => choice(
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
      choice($.newline, ",", ";")
    )),

    
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
