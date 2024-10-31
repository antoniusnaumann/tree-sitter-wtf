#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 128
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_package_header = 1,
  anon_sym_func = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_DASH_GT = 6,
  anon_sym_LBRACE = 7,
  anon_sym_SEMI = 8,
  anon_sym_RBRACE = 9,
  anon_sym_record = 10,
  anon_sym_resource = 11,
  anon_sym_COLON = 12,
  anon_sym_let = 13,
  anon_sym_var = 14,
  anon_sym_EQ = 15,
  anon_sym_PLUS_EQ = 16,
  anon_sym_DASH_EQ = 17,
  anon_sym_STAR_EQ = 18,
  anon_sym_SLASH_EQ = 19,
  anon_sym_QMARK_EQ = 20,
  anon_sym_return = 21,
  anon_sym_throw = 22,
  anon_sym_break = 23,
  anon_sym_continue = 24,
  sym_ident = 25,
  anon_sym_LF = 26,
  anon_sym_CR = 27,
  sym_comment = 28,
  sym_source_file = 29,
  sym_toplevel = 30,
  sym_func = 31,
  sym_record = 32,
  sym_resource = 33,
  sym_field = 34,
  sym_statement = 35,
  sym_declaration = 36,
  sym_assignment = 37,
  sym_assignment_operator = 38,
  sym_control = 39,
  sym_expression = 40,
  sym_type = 41,
  sym_newline = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_func_repeat1 = 44,
  aux_sym_func_repeat2 = 45,
  aux_sym_record_repeat1 = 46,
  aux_sym_resource_repeat1 = 47,
  aux_sym_resource_repeat2 = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_package_header] = "package_header",
  [anon_sym_func] = "func",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACE] = "{",
  [anon_sym_SEMI] = ";",
  [anon_sym_RBRACE] = "}",
  [anon_sym_record] = "record",
  [anon_sym_resource] = "resource",
  [anon_sym_COLON] = ":",
  [anon_sym_let] = "let",
  [anon_sym_var] = "var",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_QMARK_EQ] = "\?=",
  [anon_sym_return] = "return",
  [anon_sym_throw] = "throw",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [sym_ident] = "ident",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_toplevel] = "toplevel",
  [sym_func] = "func",
  [sym_record] = "record",
  [sym_resource] = "resource",
  [sym_field] = "field",
  [sym_statement] = "statement",
  [sym_declaration] = "declaration",
  [sym_assignment] = "assignment",
  [sym_assignment_operator] = "assignment_operator",
  [sym_control] = "control",
  [sym_expression] = "expression",
  [sym_type] = "type",
  [sym_newline] = "newline",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_func_repeat1] = "func_repeat1",
  [aux_sym_func_repeat2] = "func_repeat2",
  [aux_sym_record_repeat1] = "record_repeat1",
  [aux_sym_resource_repeat1] = "resource_repeat1",
  [aux_sym_resource_repeat2] = "resource_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_package_header] = sym_package_header,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_resource] = anon_sym_resource,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_QMARK_EQ] = anon_sym_QMARK_EQ,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_throw] = anon_sym_throw,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [sym_ident] = sym_ident,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_toplevel] = sym_toplevel,
  [sym_func] = sym_func,
  [sym_record] = sym_record,
  [sym_resource] = sym_resource,
  [sym_field] = sym_field,
  [sym_statement] = sym_statement,
  [sym_declaration] = sym_declaration,
  [sym_assignment] = sym_assignment,
  [sym_assignment_operator] = sym_assignment_operator,
  [sym_control] = sym_control,
  [sym_expression] = sym_expression,
  [sym_type] = sym_type,
  [sym_newline] = sym_newline,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_func_repeat1] = aux_sym_func_repeat1,
  [aux_sym_func_repeat2] = aux_sym_func_repeat2,
  [aux_sym_record_repeat1] = aux_sym_record_repeat1,
  [aux_sym_resource_repeat1] = aux_sym_resource_repeat1,
  [aux_sym_resource_repeat2] = aux_sym_resource_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_package_header] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_toplevel] = {
    .visible = true,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym_resource] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_control] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_resource_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_resource_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 25,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 23,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 23,
  [98] = 27,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 108,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 119,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      ADVANCE_MAP(
        '(', 63,
        ')', 65,
        '*', 10,
        '+', 11,
        ',', 64,
        '-', 13,
        '/', 6,
        ':', 72,
        ';', 68,
        '=', 77,
        '?', 14,
        'b', 49,
        'c', 40,
        'f', 54,
        'l', 25,
        'r', 26,
        't', 32,
        'v', 17,
        '{', 67,
        '}', 69,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 119,
        '\r', 120,
        '*', 10,
        '+', 11,
        ',', 64,
        '-', 12,
        '/', 6,
        ':', 72,
        ';', 68,
        '=', 77,
        '?', 14,
        'f', 54,
        '}', 69,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(120);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(68);
      if (lookahead == '}') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '}') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(121);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '/', 5,
        'b', 109,
        'c', 105,
        'l', 94,
        'r', 97,
        't', 98,
        'v', 92,
        '}', 69,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == '}') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(3);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(66);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 35:
      if (lookahead == 'k') ADVANCE(16);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 58:
      if (lookahead == 'w') ADVANCE(85);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_package_header);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_resource);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_throw);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'w') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '^') ADVANCE(121);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_package_header] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_resource] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_QMARK_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(117),
    [sym_toplevel] = STATE(20),
    [sym_func] = STATE(69),
    [sym_record] = STATE(69),
    [sym_resource] = STATE(69),
    [aux_sym_source_file_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_package_header] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(9),
    [anon_sym_record] = ACTIONS(11),
    [anon_sym_resource] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      sym_ident,
    STATE(32), 1,
      sym_statement,
    ACTIONS(17), 2,
      anon_sym_let,
      anon_sym_var,
    ACTIONS(19), 4,
      anon_sym_return,
      anon_sym_throw,
      anon_sym_break,
      anon_sym_continue,
    STATE(61), 4,
      sym_declaration,
      sym_assignment,
      sym_control,
      sym_expression,
  [29] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_statement,
    ACTIONS(17), 2,
      anon_sym_let,
      anon_sym_var,
    ACTIONS(19), 4,
      anon_sym_return,
      anon_sym_throw,
      anon_sym_break,
      anon_sym_continue,
    STATE(61), 4,
      sym_declaration,
      sym_assignment,
      sym_control,
      sym_expression,
  [58] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      sym_statement,
    ACTIONS(17), 2,
      anon_sym_let,
      anon_sym_var,
    ACTIONS(19), 4,
      anon_sym_return,
      anon_sym_throw,
      anon_sym_break,
      anon_sym_continue,
    STATE(61), 4,
      sym_declaration,
      sym_assignment,
      sym_control,
      sym_expression,
  [87] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_statement,
    ACTIONS(17), 2,
      anon_sym_let,
      anon_sym_var,
    ACTIONS(19), 4,
      anon_sym_return,
      anon_sym_throw,
      anon_sym_break,
      anon_sym_continue,
    STATE(61), 4,
      sym_declaration,
      sym_assignment,
      sym_control,
      sym_expression,
  [116] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      sym_statement,
    ACTIONS(17), 2,
      anon_sym_let,
      anon_sym_var,
    ACTIONS(19), 4,
      anon_sym_return,
      anon_sym_throw,
      anon_sym_break,
      anon_sym_continue,
    STATE(61), 4,
      sym_declaration,
      sym_assignment,
      sym_control,
      sym_expression,
  [145] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_statement,
    ACTIONS(17), 2,
      anon_sym_let,
      anon_sym_var,
    ACTIONS(19), 4,
      anon_sym_return,
      anon_sym_throw,
      anon_sym_break,
      anon_sym_continue,
    STATE(61), 4,
      sym_declaration,
      sym_assignment,
      sym_control,
      sym_expression,
  [174] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      sym_statement,
    ACTIONS(17), 2,
      anon_sym_let,
      anon_sym_var,
    ACTIONS(19), 4,
      anon_sym_return,
      anon_sym_throw,
      anon_sym_break,
      anon_sym_continue,
    STATE(61), 4,
      sym_declaration,
      sym_assignment,
      sym_control,
      sym_expression,
  [203] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      sym_statement,
    ACTIONS(17), 2,
      anon_sym_let,
      anon_sym_var,
    ACTIONS(19), 4,
      anon_sym_return,
      anon_sym_throw,
      anon_sym_break,
      anon_sym_continue,
    STATE(61), 4,
      sym_declaration,
      sym_assignment,
      sym_control,
      sym_expression,
  [232] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_statement,
    ACTIONS(17), 2,
      anon_sym_let,
      anon_sym_var,
    ACTIONS(19), 4,
      anon_sym_return,
      anon_sym_throw,
      anon_sym_break,
      anon_sym_continue,
    STATE(61), 4,
      sym_declaration,
      sym_assignment,
      sym_control,
      sym_expression,
  [261] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      sym_statement,
    ACTIONS(17), 2,
      anon_sym_let,
      anon_sym_var,
    ACTIONS(19), 4,
      anon_sym_return,
      anon_sym_throw,
      anon_sym_break,
      anon_sym_continue,
    STATE(61), 4,
      sym_declaration,
      sym_assignment,
      sym_control,
      sym_expression,
  [290] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_statement,
    ACTIONS(17), 2,
      anon_sym_let,
      anon_sym_var,
    ACTIONS(19), 4,
      anon_sym_return,
      anon_sym_throw,
      anon_sym_break,
      anon_sym_continue,
    STATE(61), 4,
      sym_declaration,
      sym_assignment,
      sym_control,
      sym_expression,
  [319] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      sym_statement,
    ACTIONS(17), 2,
      anon_sym_let,
      anon_sym_var,
    ACTIONS(19), 4,
      anon_sym_return,
      anon_sym_throw,
      anon_sym_break,
      anon_sym_continue,
    STATE(61), 4,
      sym_declaration,
      sym_assignment,
      sym_control,
      sym_expression,
  [348] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      sym_statement,
    ACTIONS(17), 2,
      anon_sym_let,
      anon_sym_var,
    ACTIONS(19), 4,
      anon_sym_return,
      anon_sym_throw,
      anon_sym_break,
      anon_sym_continue,
    STATE(61), 4,
      sym_declaration,
      sym_assignment,
      sym_control,
      sym_expression,
  [377] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_ident,
    STATE(76), 1,
      sym_statement,
    ACTIONS(17), 2,
      anon_sym_let,
      anon_sym_var,
    ACTIONS(19), 4,
      anon_sym_return,
      anon_sym_throw,
      anon_sym_break,
      anon_sym_continue,
    STATE(61), 4,
      sym_declaration,
      sym_assignment,
      sym_control,
      sym_expression,
  [403] = 4,
    ACTIONS(43), 1,
      sym_comment,
    STATE(100), 1,
      sym_assignment_operator,
    ACTIONS(39), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(41), 6,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_QMARK_EQ,
  [424] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_func,
    ACTIONS(11), 1,
      anon_sym_record,
    ACTIONS(13), 1,
      anon_sym_resource,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(19), 2,
      sym_toplevel,
      aux_sym_source_file_repeat1,
    STATE(69), 3,
      sym_func,
      sym_record,
      sym_resource,
  [449] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_func,
    ACTIONS(52), 1,
      anon_sym_record,
    ACTIONS(55), 1,
      anon_sym_resource,
    STATE(18), 2,
      sym_toplevel,
      aux_sym_source_file_repeat1,
    STATE(69), 3,
      sym_func,
      sym_record,
      sym_resource,
  [474] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_func,
    ACTIONS(11), 1,
      anon_sym_record,
    ACTIONS(13), 1,
      anon_sym_resource,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_toplevel,
      aux_sym_source_file_repeat1,
    STATE(69), 3,
      sym_func,
      sym_record,
      sym_resource,
  [499] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_func,
    ACTIONS(11), 1,
      anon_sym_record,
    ACTIONS(13), 1,
      anon_sym_resource,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_toplevel,
      aux_sym_source_file_repeat1,
    STATE(69), 3,
      sym_func,
      sym_record,
      sym_resource,
  [524] = 8,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_func,
    ACTIONS(62), 1,
      anon_sym_SEMI,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_resource_repeat1,
    STATE(29), 1,
      sym_newline,
    ACTIONS(66), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(77), 2,
      sym_func,
      aux_sym_resource_repeat2,
  [551] = 8,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_func,
    ACTIONS(68), 1,
      anon_sym_SEMI,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_resource_repeat1,
    STATE(35), 1,
      sym_newline,
    ACTIONS(66), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(78), 2,
      sym_func,
      aux_sym_resource_repeat2,
  [578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 7,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_throw,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
  [594] = 6,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      aux_sym_resource_repeat1,
    STATE(110), 1,
      sym_newline,
    ACTIONS(76), 2,
      anon_sym_func,
      anon_sym_RBRACE,
    ACTIONS(81), 2,
      anon_sym_LF,
      anon_sym_CR,
  [615] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(84), 7,
      anon_sym_func,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_LF,
      anon_sym_CR,
  [628] = 6,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_newline,
    STATE(37), 1,
      aux_sym_func_repeat2,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_CR,
  [648] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(92), 6,
      anon_sym_func,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_CR,
  [660] = 6,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_record_repeat1,
    STATE(85), 1,
      sym_newline,
    ACTIONS(98), 2,
      anon_sym_LF,
      anon_sym_CR,
  [680] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_func,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      sym_ident,
    STATE(48), 1,
      sym_field,
    STATE(78), 2,
      sym_func,
      aux_sym_resource_repeat2,
  [700] = 6,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_record_repeat1,
    STATE(107), 1,
      sym_newline,
    ACTIONS(109), 2,
      anon_sym_LF,
      anon_sym_CR,
  [720] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_ident,
    STATE(63), 1,
      sym_expression,
    ACTIONS(112), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_CR,
  [736] = 6,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_newline,
    STATE(26), 1,
      aux_sym_func_repeat2,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_CR,
  [756] = 6,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_newline,
    STATE(39), 1,
      aux_sym_func_repeat2,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_CR,
  [776] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_COLON,
    ACTIONS(124), 1,
      anon_sym_EQ,
    ACTIONS(120), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_CR,
  [792] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_func,
    ACTIONS(102), 1,
      sym_ident,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_field,
    STATE(70), 2,
      sym_func,
      aux_sym_resource_repeat2,
  [812] = 6,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_SEMI,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_newline,
    STATE(41), 1,
      aux_sym_func_repeat2,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_CR,
  [832] = 6,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_newline,
    STATE(37), 1,
      aux_sym_func_repeat2,
    ACTIONS(137), 2,
      anon_sym_LF,
      anon_sym_CR,
  [852] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_func,
    ACTIONS(102), 1,
      sym_ident,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_field,
    STATE(79), 2,
      sym_func,
      aux_sym_resource_repeat2,
  [872] = 6,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_SEMI,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_newline,
    STATE(37), 1,
      aux_sym_func_repeat2,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_CR,
  [892] = 6,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_SEMI,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_newline,
    STATE(37), 1,
      aux_sym_func_repeat2,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_CR,
  [912] = 6,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_newline,
    STATE(37), 1,
      aux_sym_func_repeat2,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_CR,
  [932] = 6,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_newline,
    STATE(37), 1,
      aux_sym_func_repeat2,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_CR,
  [952] = 6,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_newline,
    STATE(42), 1,
      aux_sym_func_repeat2,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_CR,
  [972] = 6,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_SEMI,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_newline,
    STATE(47), 1,
      aux_sym_func_repeat2,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_CR,
  [992] = 6,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_newline,
    STATE(40), 1,
      aux_sym_func_repeat2,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_CR,
  [1012] = 6,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_record_repeat1,
    STATE(82), 1,
      sym_newline,
    ACTIONS(98), 2,
      anon_sym_LF,
      anon_sym_CR,
  [1032] = 6,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_SEMI,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_newline,
    STATE(37), 1,
      aux_sym_func_repeat2,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_CR,
  [1052] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(76), 5,
      anon_sym_func,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_CR,
  [1063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_RBRACE,
      anon_sym_record,
      anon_sym_resource,
  [1074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 5,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_RBRACE,
      anon_sym_record,
      anon_sym_resource,
  [1085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 5,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_RBRACE,
      anon_sym_record,
      anon_sym_resource,
  [1096] = 3,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_EQ,
    ACTIONS(168), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_CR,
  [1109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 5,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_RBRACE,
      anon_sym_record,
      anon_sym_resource,
  [1120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 5,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_RBRACE,
      anon_sym_record,
      anon_sym_resource,
  [1131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 5,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_RBRACE,
      anon_sym_record,
      anon_sym_resource,
  [1142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 5,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_RBRACE,
      anon_sym_record,
      anon_sym_resource,
  [1153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 5,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_RBRACE,
      anon_sym_record,
      anon_sym_resource,
  [1164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 5,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_RBRACE,
      anon_sym_record,
      anon_sym_resource,
  [1175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_record,
      anon_sym_resource,
  [1185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_record,
      anon_sym_resource,
  [1195] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(188), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_CR,
  [1205] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(39), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_CR,
  [1215] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_CR,
  [1225] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(168), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_CR,
  [1235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_record,
      anon_sym_resource,
  [1245] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(107), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_CR,
  [1255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_record,
      anon_sym_resource,
  [1265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_record,
      anon_sym_resource,
  [1275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_record,
      anon_sym_resource,
  [1285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_func,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    STATE(80), 2,
      sym_func,
      aux_sym_resource_repeat2,
  [1299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_record,
      anon_sym_resource,
  [1309] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(204), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_CR,
  [1319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_record,
      anon_sym_resource,
  [1329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_record,
      anon_sym_resource,
  [1339] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(210), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_CR,
  [1349] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(135), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_CR,
  [1359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_func,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(80), 2,
      sym_func,
      aux_sym_resource_repeat2,
  [1373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_func,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(80), 2,
      sym_func,
      aux_sym_resource_repeat2,
  [1387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_func,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(80), 2,
      sym_func,
      aux_sym_resource_repeat2,
  [1401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_func,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(80), 2,
      sym_func,
      aux_sym_resource_repeat2,
  [1415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_record,
      anon_sym_resource,
  [1425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 1,
      sym_ident,
    STATE(66), 1,
      sym_field,
  [1438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_func_repeat1,
  [1451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [1460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_ident,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      sym_field,
  [1473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_ident,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_field,
  [1486] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_func_repeat1,
  [1499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(241), 1,
      sym_ident,
    STATE(87), 1,
      sym_field,
  [1512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    ACTIONS(241), 1,
      sym_ident,
    STATE(104), 1,
      sym_field,
  [1525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_ident,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym_field,
  [1538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 2,
      anon_sym_func,
      sym_ident,
  [1549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_func_repeat1,
  [1562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_ident,
    STATE(113), 1,
      sym_type,
  [1572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_DASH_GT,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
  [1582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_DASH_GT,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
  [1592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_ident,
    STATE(64), 1,
      sym_expression,
  [1602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 2,
      anon_sym_RBRACE,
      sym_ident,
  [1610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_ident,
    STATE(72), 1,
      sym_expression,
  [1628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_ident,
    STATE(75), 1,
      sym_expression,
  [1638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_ident,
    STATE(126), 1,
      sym_type,
  [1648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_ident,
    STATE(52), 1,
      sym_type,
  [1658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_ident,
    STATE(121), 1,
      sym_type,
  [1668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_DASH_GT,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
  [1686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_ident,
    STATE(104), 1,
      sym_field,
  [1696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_ident,
    STATE(66), 1,
      sym_field,
  [1706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_ident,
    STATE(98), 1,
      sym_type,
  [1716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_ident,
    STATE(118), 1,
      sym_type,
  [1726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_ident,
    STATE(48), 1,
      sym_field,
  [1736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_ident,
    STATE(27), 1,
      sym_type,
  [1746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DASH_GT,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
  [1756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
  [1763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
  [1770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_ident,
  [1777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_ident,
  [1784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
  [1791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
  [1798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_COLON,
  [1805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
  [1812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
  [1819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_ident,
  [1826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_ident,
  [1833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
  [1840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_ident,
  [1847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
  [1854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 203,
  [SMALL_STATE(10)] = 232,
  [SMALL_STATE(11)] = 261,
  [SMALL_STATE(12)] = 290,
  [SMALL_STATE(13)] = 319,
  [SMALL_STATE(14)] = 348,
  [SMALL_STATE(15)] = 377,
  [SMALL_STATE(16)] = 403,
  [SMALL_STATE(17)] = 424,
  [SMALL_STATE(18)] = 449,
  [SMALL_STATE(19)] = 474,
  [SMALL_STATE(20)] = 499,
  [SMALL_STATE(21)] = 524,
  [SMALL_STATE(22)] = 551,
  [SMALL_STATE(23)] = 578,
  [SMALL_STATE(24)] = 594,
  [SMALL_STATE(25)] = 615,
  [SMALL_STATE(26)] = 628,
  [SMALL_STATE(27)] = 648,
  [SMALL_STATE(28)] = 660,
  [SMALL_STATE(29)] = 680,
  [SMALL_STATE(30)] = 700,
  [SMALL_STATE(31)] = 720,
  [SMALL_STATE(32)] = 736,
  [SMALL_STATE(33)] = 756,
  [SMALL_STATE(34)] = 776,
  [SMALL_STATE(35)] = 792,
  [SMALL_STATE(36)] = 812,
  [SMALL_STATE(37)] = 832,
  [SMALL_STATE(38)] = 852,
  [SMALL_STATE(39)] = 872,
  [SMALL_STATE(40)] = 892,
  [SMALL_STATE(41)] = 912,
  [SMALL_STATE(42)] = 932,
  [SMALL_STATE(43)] = 952,
  [SMALL_STATE(44)] = 972,
  [SMALL_STATE(45)] = 992,
  [SMALL_STATE(46)] = 1012,
  [SMALL_STATE(47)] = 1032,
  [SMALL_STATE(48)] = 1052,
  [SMALL_STATE(49)] = 1063,
  [SMALL_STATE(50)] = 1074,
  [SMALL_STATE(51)] = 1085,
  [SMALL_STATE(52)] = 1096,
  [SMALL_STATE(53)] = 1109,
  [SMALL_STATE(54)] = 1120,
  [SMALL_STATE(55)] = 1131,
  [SMALL_STATE(56)] = 1142,
  [SMALL_STATE(57)] = 1153,
  [SMALL_STATE(58)] = 1164,
  [SMALL_STATE(59)] = 1175,
  [SMALL_STATE(60)] = 1185,
  [SMALL_STATE(61)] = 1195,
  [SMALL_STATE(62)] = 1205,
  [SMALL_STATE(63)] = 1215,
  [SMALL_STATE(64)] = 1225,
  [SMALL_STATE(65)] = 1235,
  [SMALL_STATE(66)] = 1245,
  [SMALL_STATE(67)] = 1255,
  [SMALL_STATE(68)] = 1265,
  [SMALL_STATE(69)] = 1275,
  [SMALL_STATE(70)] = 1285,
  [SMALL_STATE(71)] = 1299,
  [SMALL_STATE(72)] = 1309,
  [SMALL_STATE(73)] = 1319,
  [SMALL_STATE(74)] = 1329,
  [SMALL_STATE(75)] = 1339,
  [SMALL_STATE(76)] = 1349,
  [SMALL_STATE(77)] = 1359,
  [SMALL_STATE(78)] = 1373,
  [SMALL_STATE(79)] = 1387,
  [SMALL_STATE(80)] = 1401,
  [SMALL_STATE(81)] = 1415,
  [SMALL_STATE(82)] = 1425,
  [SMALL_STATE(83)] = 1438,
  [SMALL_STATE(84)] = 1451,
  [SMALL_STATE(85)] = 1460,
  [SMALL_STATE(86)] = 1473,
  [SMALL_STATE(87)] = 1486,
  [SMALL_STATE(88)] = 1499,
  [SMALL_STATE(89)] = 1512,
  [SMALL_STATE(90)] = 1525,
  [SMALL_STATE(91)] = 1538,
  [SMALL_STATE(92)] = 1549,
  [SMALL_STATE(93)] = 1562,
  [SMALL_STATE(94)] = 1572,
  [SMALL_STATE(95)] = 1582,
  [SMALL_STATE(96)] = 1592,
  [SMALL_STATE(97)] = 1602,
  [SMALL_STATE(98)] = 1610,
  [SMALL_STATE(99)] = 1618,
  [SMALL_STATE(100)] = 1628,
  [SMALL_STATE(101)] = 1638,
  [SMALL_STATE(102)] = 1648,
  [SMALL_STATE(103)] = 1658,
  [SMALL_STATE(104)] = 1668,
  [SMALL_STATE(105)] = 1676,
  [SMALL_STATE(106)] = 1686,
  [SMALL_STATE(107)] = 1696,
  [SMALL_STATE(108)] = 1706,
  [SMALL_STATE(109)] = 1716,
  [SMALL_STATE(110)] = 1726,
  [SMALL_STATE(111)] = 1736,
  [SMALL_STATE(112)] = 1746,
  [SMALL_STATE(113)] = 1756,
  [SMALL_STATE(114)] = 1763,
  [SMALL_STATE(115)] = 1770,
  [SMALL_STATE(116)] = 1777,
  [SMALL_STATE(117)] = 1784,
  [SMALL_STATE(118)] = 1791,
  [SMALL_STATE(119)] = 1798,
  [SMALL_STATE(120)] = 1805,
  [SMALL_STATE(121)] = 1812,
  [SMALL_STATE(122)] = 1819,
  [SMALL_STATE(123)] = 1826,
  [SMALL_STATE(124)] = 1833,
  [SMALL_STATE(125)] = 1840,
  [SMALL_STATE(126)] = 1847,
  [SMALL_STATE(127)] = 1854,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat2, 2, 0, 0), SHIFT_REPEAT(15),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_repeat2, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat2, 2, 0, 0), SHIFT_REPEAT(23),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 11, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 9, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 10, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 12, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 13, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 14, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 7, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 4, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 7, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 6, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_repeat2, 2, 0, 0), SHIFT_REPEAT(116),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat2, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 8, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [280] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_wtf(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
