#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_package_header = 1,
  anon_sym_func = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_record = 7,
  anon_sym_resource = 8,
  anon_sym_COLON = 9,
  anon_sym_COMMA = 10,
  anon_sym_SEMI = 11,
  sym_ident = 12,
  anon_sym_LF = 13,
  anon_sym_CR = 14,
  sym_source_file = 15,
  sym_toplevel = 16,
  sym_func = 17,
  sym_record = 18,
  sym_resource = 19,
  aux_sym__fields = 20,
  sym_newlines = 21,
  sym_newline = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_resource_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_package_header] = "package_header",
  [anon_sym_func] = "func",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_record] = "record",
  [anon_sym_resource] = "resource",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [sym_ident] = "ident",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [sym_source_file] = "source_file",
  [sym_toplevel] = "toplevel",
  [sym_func] = "func",
  [sym_record] = "record",
  [sym_resource] = "resource",
  [aux_sym__fields] = "_fields",
  [sym_newlines] = "newlines",
  [sym_newline] = "newline",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_resource_repeat1] = "resource_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_package_header] = sym_package_header,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_resource] = anon_sym_resource,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_ident] = sym_ident,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [sym_source_file] = sym_source_file,
  [sym_toplevel] = sym_toplevel,
  [sym_func] = sym_func,
  [sym_record] = sym_record,
  [sym_resource] = sym_resource,
  [aux_sym__fields] = aux_sym__fields,
  [sym_newlines] = sym_newlines,
  [sym_newline] = sym_newline,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_resource_repeat1] = aux_sym_resource_repeat1,
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
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [aux_sym__fields] = {
    .visible = false,
    .named = false,
  },
  [sym_newlines] = {
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
  [aux_sym_resource_repeat1] = {
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
  [37] = 6,
  [38] = 7,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '\n', 57,
        '\r', 58,
        '(', 32,
        ')', 33,
        ',', 41,
        ':', 40,
        ';', 42,
        'f', 54,
        'r', 47,
        '{', 34,
        '}', 35,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'k') ADVANCE(4);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '\n', 57,
        '\r', 58,
        '(', 32,
        ')', 33,
        'f', 25,
        'r', 12,
        't', 18,
        '{', 34,
        '}', 35,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_package_header);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_record);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_resource);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_resource);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == 's') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_resource] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(52),
    [sym_newlines] = STATE(21),
    [sym_newline] = STATE(6),
    [anon_sym_LF] = ACTIONS(3),
    [anon_sym_CR] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_func,
    ACTIONS(7), 1,
      anon_sym_record,
    ACTIONS(9), 1,
      anon_sym_resource,
    STATE(6), 1,
      sym_newline,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(23), 1,
      sym_newlines,
    STATE(30), 1,
      sym_toplevel,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(45), 3,
      sym_func,
      sym_record,
      sym_resource,
  [31] = 9,
    ACTIONS(5), 1,
      anon_sym_func,
    ACTIONS(7), 1,
      anon_sym_record,
    ACTIONS(9), 1,
      anon_sym_resource,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(6), 1,
      sym_newline,
    STATE(30), 1,
      sym_toplevel,
    STATE(36), 1,
      sym_newlines,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(45), 3,
      sym_func,
      sym_record,
      sym_resource,
  [62] = 9,
    ACTIONS(5), 1,
      anon_sym_func,
    ACTIONS(7), 1,
      anon_sym_record,
    ACTIONS(9), 1,
      anon_sym_resource,
    STATE(6), 1,
      sym_newline,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 1,
      sym_toplevel,
    STATE(36), 1,
      sym_newlines,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(45), 3,
      sym_func,
      sym_record,
      sym_resource,
  [93] = 9,
    ACTIONS(5), 1,
      anon_sym_func,
    ACTIONS(7), 1,
      anon_sym_record,
    ACTIONS(9), 1,
      anon_sym_resource,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(6), 1,
      sym_newline,
    STATE(30), 1,
      sym_toplevel,
    STATE(33), 1,
      sym_newlines,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(45), 3,
      sym_func,
      sym_record,
      sym_resource,
  [124] = 1,
    ACTIONS(11), 11,
      ts_builtin_sym_end,
      sym_package_header,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_record,
      anon_sym_resource,
      anon_sym_LF,
      anon_sym_CR,
  [138] = 1,
    ACTIONS(13), 11,
      ts_builtin_sym_end,
      sym_package_header,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_record,
      anon_sym_resource,
      anon_sym_LF,
      anon_sym_CR,
  [152] = 7,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(18), 1,
      anon_sym_record,
    ACTIONS(21), 1,
      anon_sym_resource,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 1,
      sym_toplevel,
    ACTIONS(24), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(45), 3,
      sym_func,
      sym_record,
      sym_resource,
  [177] = 5,
    ACTIONS(26), 1,
      sym_ident,
    STATE(6), 1,
      sym_newline,
    STATE(14), 1,
      sym_newlines,
    STATE(20), 1,
      aux_sym__fields,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
  [194] = 5,
    ACTIONS(26), 1,
      sym_ident,
    STATE(6), 1,
      sym_newline,
    STATE(11), 1,
      aux_sym__fields,
    STATE(59), 1,
      sym_newlines,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
  [211] = 5,
    ACTIONS(26), 1,
      sym_ident,
    STATE(6), 1,
      sym_newline,
    STATE(20), 1,
      aux_sym__fields,
    STATE(50), 1,
      sym_newlines,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
  [228] = 4,
    ACTIONS(28), 1,
      sym_package_header,
    STATE(5), 1,
      sym_newlines,
    STATE(6), 1,
      sym_newline,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
  [242] = 1,
    ACTIONS(24), 5,
      anon_sym_func,
      anon_sym_record,
      anon_sym_resource,
      anon_sym_LF,
      anon_sym_CR,
  [250] = 4,
    ACTIONS(5), 1,
      anon_sym_func,
    STATE(16), 1,
      aux_sym_resource_repeat1,
    STATE(31), 1,
      sym_func,
    ACTIONS(30), 2,
      anon_sym_LF,
      anon_sym_CR,
  [264] = 3,
    STATE(17), 1,
      sym_newline,
    ACTIONS(32), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(34), 2,
      anon_sym_LF,
      anon_sym_CR,
  [276] = 4,
    ACTIONS(5), 1,
      anon_sym_func,
    STATE(18), 1,
      aux_sym_resource_repeat1,
    STATE(31), 1,
      sym_func,
    ACTIONS(36), 2,
      anon_sym_LF,
      anon_sym_CR,
  [290] = 4,
    ACTIONS(38), 1,
      sym_ident,
    STATE(37), 1,
      sym_newline,
    STATE(40), 1,
      sym_newlines,
    ACTIONS(40), 2,
      anon_sym_LF,
      anon_sym_CR,
  [304] = 4,
    ACTIONS(43), 1,
      anon_sym_func,
    STATE(18), 1,
      aux_sym_resource_repeat1,
    STATE(31), 1,
      sym_func,
    ACTIONS(46), 2,
      anon_sym_LF,
      anon_sym_CR,
  [318] = 3,
    STATE(6), 1,
      sym_newline,
    STATE(48), 1,
      sym_newlines,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
  [329] = 3,
    ACTIONS(48), 1,
      sym_ident,
    STATE(20), 1,
      aux_sym__fields,
    ACTIONS(51), 2,
      anon_sym_LF,
      anon_sym_CR,
  [340] = 3,
    STATE(6), 1,
      sym_newline,
    STATE(12), 1,
      sym_newlines,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
  [351] = 3,
    STATE(37), 1,
      sym_newline,
    STATE(54), 1,
      sym_newlines,
    ACTIONS(34), 2,
      anon_sym_LF,
      anon_sym_CR,
  [362] = 3,
    STATE(6), 1,
      sym_newline,
    STATE(56), 1,
      sym_newlines,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
  [373] = 3,
    STATE(6), 1,
      sym_newline,
    STATE(60), 1,
      sym_newlines,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
  [384] = 3,
    STATE(37), 1,
      sym_newline,
    STATE(51), 1,
      sym_newlines,
    ACTIONS(34), 2,
      anon_sym_LF,
      anon_sym_CR,
  [395] = 3,
    STATE(37), 1,
      sym_newline,
    STATE(41), 1,
      sym_newlines,
    ACTIONS(34), 2,
      anon_sym_LF,
      anon_sym_CR,
  [406] = 3,
    STATE(10), 1,
      sym_newlines,
    STATE(37), 1,
      sym_newline,
    ACTIONS(34), 2,
      anon_sym_LF,
      anon_sym_CR,
  [417] = 3,
    STATE(6), 1,
      sym_newline,
    STATE(61), 1,
      sym_newlines,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
  [428] = 3,
    STATE(37), 1,
      sym_newline,
    STATE(47), 1,
      sym_newlines,
    ACTIONS(34), 2,
      anon_sym_LF,
      anon_sym_CR,
  [439] = 3,
    STATE(6), 1,
      sym_newline,
    STATE(13), 1,
      sym_newlines,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
  [450] = 3,
    STATE(6), 1,
      sym_newline,
    STATE(39), 1,
      sym_newlines,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
  [461] = 3,
    STATE(6), 1,
      sym_newline,
    STATE(49), 1,
      sym_newlines,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
  [472] = 3,
    STATE(6), 1,
      sym_newline,
    STATE(53), 1,
      sym_newlines,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
  [483] = 3,
    STATE(3), 1,
      sym_newlines,
    STATE(6), 1,
      sym_newline,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
  [494] = 3,
    STATE(6), 1,
      sym_newline,
    STATE(58), 1,
      sym_newlines,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
  [505] = 3,
    STATE(6), 1,
      sym_newline,
    STATE(55), 1,
      sym_newlines,
    ACTIONS(3), 2,
      anon_sym_LF,
      anon_sym_CR,
  [516] = 1,
    ACTIONS(11), 3,
      sym_ident,
      anon_sym_LF,
      anon_sym_CR,
  [522] = 1,
    ACTIONS(13), 3,
      sym_ident,
      anon_sym_LF,
      anon_sym_CR,
  [528] = 1,
    ACTIONS(46), 3,
      anon_sym_func,
      anon_sym_LF,
      anon_sym_CR,
  [534] = 1,
    ACTIONS(53), 3,
      sym_ident,
      anon_sym_LF,
      anon_sym_CR,
  [540] = 2,
    ACTIONS(26), 1,
      sym_ident,
    STATE(9), 1,
      aux_sym__fields,
  [547] = 1,
    ACTIONS(55), 2,
      anon_sym_LF,
      anon_sym_CR,
  [552] = 1,
    ACTIONS(57), 2,
      anon_sym_LF,
      anon_sym_CR,
  [557] = 1,
    ACTIONS(59), 2,
      anon_sym_LF,
      anon_sym_CR,
  [562] = 1,
    ACTIONS(61), 2,
      anon_sym_LF,
      anon_sym_CR,
  [567] = 1,
    ACTIONS(63), 1,
      sym_ident,
  [571] = 1,
    ACTIONS(65), 1,
      sym_ident,
  [575] = 1,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
  [579] = 1,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
  [583] = 1,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
  [587] = 1,
    ACTIONS(73), 1,
      sym_ident,
  [591] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [595] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [599] = 1,
    ACTIONS(79), 1,
      sym_ident,
  [603] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
  [607] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
  [611] = 1,
    ACTIONS(85), 1,
      anon_sym_COLON,
  [615] = 1,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
  [619] = 1,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
  [623] = 1,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
  [627] = 1,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 138,
  [SMALL_STATE(8)] = 152,
  [SMALL_STATE(9)] = 177,
  [SMALL_STATE(10)] = 194,
  [SMALL_STATE(11)] = 211,
  [SMALL_STATE(12)] = 228,
  [SMALL_STATE(13)] = 242,
  [SMALL_STATE(14)] = 250,
  [SMALL_STATE(15)] = 264,
  [SMALL_STATE(16)] = 276,
  [SMALL_STATE(17)] = 290,
  [SMALL_STATE(18)] = 304,
  [SMALL_STATE(19)] = 318,
  [SMALL_STATE(20)] = 329,
  [SMALL_STATE(21)] = 340,
  [SMALL_STATE(22)] = 351,
  [SMALL_STATE(23)] = 362,
  [SMALL_STATE(24)] = 373,
  [SMALL_STATE(25)] = 384,
  [SMALL_STATE(26)] = 395,
  [SMALL_STATE(27)] = 406,
  [SMALL_STATE(28)] = 417,
  [SMALL_STATE(29)] = 428,
  [SMALL_STATE(30)] = 439,
  [SMALL_STATE(31)] = 450,
  [SMALL_STATE(32)] = 461,
  [SMALL_STATE(33)] = 472,
  [SMALL_STATE(34)] = 483,
  [SMALL_STATE(35)] = 494,
  [SMALL_STATE(36)] = 505,
  [SMALL_STATE(37)] = 516,
  [SMALL_STATE(38)] = 522,
  [SMALL_STATE(39)] = 528,
  [SMALL_STATE(40)] = 534,
  [SMALL_STATE(41)] = 540,
  [SMALL_STATE(42)] = 547,
  [SMALL_STATE(43)] = 552,
  [SMALL_STATE(44)] = 557,
  [SMALL_STATE(45)] = 562,
  [SMALL_STATE(46)] = 567,
  [SMALL_STATE(47)] = 571,
  [SMALL_STATE(48)] = 575,
  [SMALL_STATE(49)] = 579,
  [SMALL_STATE(50)] = 583,
  [SMALL_STATE(51)] = 587,
  [SMALL_STATE(52)] = 591,
  [SMALL_STATE(53)] = 595,
  [SMALL_STATE(54)] = 599,
  [SMALL_STATE(55)] = 603,
  [SMALL_STATE(56)] = 607,
  [SMALL_STATE(57)] = 611,
  [SMALL_STATE(58)] = 615,
  [SMALL_STATE(59)] = 619,
  [SMALL_STATE(60)] = 623,
  [SMALL_STATE(61)] = 627,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newlines, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 6, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 7, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fields, 4, 0, 0),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fields, 4, 0, 0), SHIFT_REPEAT(38),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fields, 2, 0, 0), SHIFT_REPEAT(57),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fields, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fields, 5, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 9, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 8, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 11, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [75] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 7, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
