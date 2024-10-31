/**
 * @file WebAssembly Types & Functions
 * @author Antonius Naumann <git@antonius.dev>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "wtf",
  extras: $ => [
    $.comment,
    /\s+/
  ],
  word: $ => $.ident,

  rules: {
    source_file: $ => seq(
      optional($.package_header),
      repeat($.toplevel),
   ),    


    package_header: $ => "todo: package",

    toplevel: $ => choice(
      $.func,
      $.record,
      $.resource,
    ),


    func: $ => seq(
      token("func"),
      $.ident,
      "(",
      separatedTrailing($, $.field, ","),
      ")",
      optional(seq("->", $.type)),
      "{",
      separatedTrailing($, $.statement, choice($.newline, ";")),
      "}",
    ),    
 
    record: $ => seq(
      token("record"),
      $.ident,
      "{",
      separatedTrailing($, $.field, choice($.newline, ",")),
      "}"
    ),

    resource: $ => seq(
      token("resource"),
      $.ident, 
      "{",
      separatedTrailing($, $.field, choice($.newline, ";")),
      // TODO: constructor
      repeat($.func),
      "}",
    ),


    field: $ => seq(
      $.ident,
      ":",
      $.type,
    ),

    statement: $ => choice(
      $.declaration,
      $.assignment,
      $.control,
      $.expression,
    ),

    declaration: $ => seq(
      choice(token("let"), token("var")),
      $.ident,
      optional(seq(":", $.type)),
      optional(seq("=", $.expression)),
    ),    

    assignment: $ => seq(
      // TODO: allow expressions
      $.ident,
      $.assignment_operator,
      $.expression,
    ),

    control: $ => seq(
      choice(token("return"), token("throw"), token("break"), token("continue")),
      optional($.expression),
    ),

    expression: $ => choice(
      $.ident,
      prec.left(seq($.expression, $.binary_operator, $.expression)), 
      $.conditional,
    ),

    conditional: $ => seq(
      "if",
      $.expression,
      "{",
      separatedTrailing($, $.statement, choice($.newline, ";")),
      "}",
      optional(seq(
        "else",
        "{",
        separatedTrailing($, $.statement, choice($.newline, ";")),
        "}",
      ))
    ),

    type: $ => choice(
      $.ident,
      seq("[", $.type, "]"),
      seq($.type, "?"),
      prec.right(seq($.type, "!", optional($.type)))
    ),
    
    assignment_operator: $ => choice(
      "=",
      "+=",
      "-=",
      "*=",
      "/=",
      "?=",
    ),

    binary_operator: $ => choice(
      "+",
      "-",
      "*", 
      "/",
      "?",
      "&&",
      "||",
      "&",
      "|", 
      "==",
      "!=",
      "<=",
      ">=",
      "<",
      ">",
      "in"
    ),
    
    ident: $ => /[a-z_][a-z0-9_]*/,
    
    newline: $ => choice(
      "\n",
      "\r",
    ),

    comment: $ => token(seq('//', /[^\n^\r]*/))
  }
});

function separatedTrailing($, rule, delim) {
  return optional(seq(
    rule,
    repeat(seq(delim, rule)),
    optional(delim)
  ));
}

function separatedTrailing1($, rule, delim) {
  return seq(
    rule,
    repeat(seq(delim, rule)),
    optional(delim)
  );
}

