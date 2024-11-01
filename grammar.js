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
      repeat($.use),
      repeat($.toplevel),
    ),    

    use: $ => seq(
      "use",
      $.path,
      "/",
      field("interface", $.ident),
      optional(
        seq(
          ".",
          choice(
            seq(  
              "{",
              separatedTrailing($, field("item", $.ident), ","),
              "}"
            ),
            field("item", $.ident)
          )
        )
      ),
      optional(";"),
    ),

    package_header: $ => seq(
      "package",
      $.path,
    ),

    path: $ => seq(
      $.ident,
      ":",
      $.ident,
      optional(
        seq(
          "@",
          $.version,
        )
      ),
      optional(";"),
    ),

    version: $ => /\d+\.\d+\.\d+(-[0-9A-Za-z-]+(\.[0-9A-Za-z-]+)*)?(\+[0-9A-Za-z-]+(\.[0-9A-Za-z-]+)*)?/,

    toplevel: $ => seq(
      optional(token("export")),
      choice(
        $.func,
        $.record,
        $.resource,
        $.enum,
        $.variant,
      )
    ),


    func: $ => seq(
      token("func"),
      $.ident,
      "(",
      separatedTrailing($, $.field, ","),
      ")",
      optional(seq("->", $.type)),
      "{",
      separatedTrailing($, choice($.statement, $.func), choice($.newline, ";")),
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
      repeat(choice(
        seq($.field, choice($.newline, ";")),
        $.constructor,
        $.func
      )),
      "}",
    ),

    constructor: $ => seq(
      "constructor", 
      "(", 
      separatedTrailing($, $.field, ","), 
      ")", 
      "{", 
      separatedTrailing($, $.statement, choice($.newline, ";")),
      "}"
    ),

    enum: $ => seq(
      token("enum"),
      $.ident,
      "{",
      separatedTrailing($, field("case", $.ident), choice($.newline, ",")),
      "}",
    ),

    variant: $ => seq(
      token("variant"),
      $.ident,
      "{",
      separatedTrailing($, seq(field("case", $.ident), optional(seq("(", separatedTrailing($, $.field, ","), ")"))), choice($.newline, ",")),
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
      choice($.ident, $.member_call),
      $.assignment_operator,
      $.expression,
    ),

    control: $ => seq(
      choice(token("return"), token("throw"), token("break"), token("continue")),
      optional($.expression),
    ),

    expression: $ => choice(
      $.ident,
      $.call,
      $.yeet,
      prec.left(5, seq($.expression, $.binary_operator, $.expression)), 
      $.member_call,
      $.conditional,
      $.loop,
      $._literal,
    ),

    member_call: $ => prec.left(4, 
      seq(
        $.expression, 
        $.member_operator,
        choice($.ident, $.call),
      ),
    ),

    call: $ => seq(
      $.ident,
      "(",
      separatedTrailing($, $.expression, ","),
      ")",
    ),

    yeet: $ => seq(
      $.expression,
      "!",
    ),
    
    _literal: $ => choice(
      $.number,
      $.string,
      $.bool,
      "none",
      $.list,
      $.struct, 
    ),

    list: $ => seq(
      "[",
      separatedTrailing($, $.expression, ","),
      "]",
    ),

    struct: $ => prec(-1, seq(
      optional($.ident),
      "{",
      separatedTrailing($, seq($.ident, ":", $.expression), ","),
      "}",
    )),

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

    loop: $ => seq(
      choice("while", "for"),
      $.expression,
      "{",
      separatedTrailing($, $.statement, choice($.newline, ";")),
      "}"
    ),

    type: $ => choice(
      $.ident,
      seq("[", $.type, "]"),
      seq($.type, "?"),
      prec.right(seq($.type, "!", optional($.type)))
    ),
    
    member_operator: $ => choice(".", "?."), 
    
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

    // Allows for scientific notation
    number: $ => /\d+(\.\d+)?([eE][+-]?\d+)?/,
    string: $ => /"([^"\\]|\\.)*"/,
    bool: $ => choice("true", "false"),
    
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

