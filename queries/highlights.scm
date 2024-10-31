;; Follows these highlight groups: https://docs.helix-editor.com/themes.html

[
  "func"
  "record"
  "resource"
] @keyword

[
 "let"
 "var"
] @keyword.storage

[
  "return"
] @keyword.control.return

[
  "throw"
] @keyword.control.exception

[
  "if"
  "else"
] @keyword.control.conditional

[
  "while"
  "for"
] @keyword.control.repeat

[
  ; "import"
  "export"
  ; "use"
] @keyword.import

[
  "{"
  "}"
  "["
  "]"
  "("
  ")"
] @punctuation.bracket

[
  ":"
;  "::"
  ";"
  ","
;  "@"
  "->"
;  "=>"
  "."
  "?."
] @punctuation.delimiter

(type (ident)) @type
(type (ident) @type.builtin (#match? @type.builtin "^(s8|s16|s32|s64|u8|u16|u32|u64|f32|f64|bool|char|string)$"))

(struct ("{") (ident) @variable.other.member)
(member_call (member_operator) (ident) @variable.other.member)

(assignment_operator) @operator
(binary_operator) @operator

[
  "in"
] @keyword.operator

(string) @string
(number) @constant.numeric
(bool) @constant.builtin.boolean
[
  "none"
] @constant.builtin

(comment) @comment.line
