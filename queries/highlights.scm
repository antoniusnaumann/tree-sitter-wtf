;; Follows these highlight groups: https://docs.helix-editor.com/themes.html

[
  "func"
  "record"
  "resource"
  "enum"
  "variant"
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
  ; in optional and result types
  "?"
  "!"
] @punctuation.delimiter

(func (ident) @function)
(call (ident) @function.call)
(member_call (member_operator) (call (ident) @method.call))

(type (ident)) @type
(type (ident) @type.builtin (#match? @type.builtin "^(s8|s16|s32|s64|u8|u16|u32|u64|f32|f64|bool|char|string)$"))
(enum (ident) @type.enum ("{"))
(enum ("{") (ident) @type.enum.variant)
(variant (ident) @type.enum ("{"))
(variant ("{") (ident) @type.enum.variant)

(record ("{") (field (ident) @variable.other.member))
(variant (field ((ident) @variable.other.member)))
(member_call (member_operator) (ident) @variable.other.member)

; TODO: Also highlight variables via scoping later (can tree sitter do this?)
(func (field (ident) @variable.parameter ":"))

(assignment_operator) @operator
(binary_operator) @operator
[
  "="
] @operator

[
  "in"
] @keyword.operator

(statement (_ (ident)) @variable) 
(string) @string
(number) @constant.numeric
(bool) @constant.builtin.boolean
[
  "none"
] @constant.builtin.null

(comment) @comment.line
