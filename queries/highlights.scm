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

; [
;   "while"
;   "for"
; ] @keyword.control.repeat

(type (ident)) @type

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

(comment) @comment
