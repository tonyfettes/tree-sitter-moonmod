#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_ident = 1,
  anon_sym_module = 2,
  aux_sym_module_directive_token1 = 3,
  anon_sym_require = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_string_token1 = 8,
  anon_sym_DQUOTE2 = 9,
  sym_module_file = 10,
  sym_module_directive = 11,
  sym_module_path = 12,
  sym_require_directive = 13,
  sym_name = 14,
  sym_path = 15,
  sym_string = 16,
  aux_sym_module_file_repeat1 = 17,
  aux_sym_module_directive_repeat1 = 18,
  aux_sym_require_directive_repeat1 = 19,
  aux_sym_string_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ident] = "ident",
  [anon_sym_module] = "module",
  [aux_sym_module_directive_token1] = "module_directive_token1",
  [anon_sym_require] = "require",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE2] = "\"",
  [sym_module_file] = "module_file",
  [sym_module_directive] = "module_directive",
  [sym_module_path] = "module_path",
  [sym_require_directive] = "require_directive",
  [sym_name] = "name",
  [sym_path] = "path",
  [sym_string] = "string",
  [aux_sym_module_file_repeat1] = "module_file_repeat1",
  [aux_sym_module_directive_repeat1] = "module_directive_repeat1",
  [aux_sym_require_directive_repeat1] = "require_directive_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_ident] = sym_ident,
  [anon_sym_module] = anon_sym_module,
  [aux_sym_module_directive_token1] = aux_sym_module_directive_token1,
  [anon_sym_require] = anon_sym_require,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym_module_file] = sym_module_file,
  [sym_module_directive] = sym_module_directive,
  [sym_module_path] = sym_module_path,
  [sym_require_directive] = sym_require_directive,
  [sym_name] = sym_name,
  [sym_path] = sym_path,
  [sym_string] = sym_string,
  [aux_sym_module_file_repeat1] = aux_sym_module_file_repeat1,
  [aux_sym_module_directive_repeat1] = aux_sym_module_directive_repeat1,
  [aux_sym_require_directive_repeat1] = aux_sym_require_directive_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_module_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_require] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_module_file] = {
    .visible = true,
    .named = true,
  },
  [sym_module_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_module_path] = {
    .visible = true,
    .named = true,
  },
  [sym_require_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_require_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_module_directive_token1);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(9);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_ident);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'm') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'q') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_require);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [aux_sym_module_directive_token1] = ACTIONS(1),
    [anon_sym_require] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
  },
  [1] = {
    [sym_module_file] = STATE(24),
    [sym_module_directive] = STATE(7),
    [sym_require_directive] = STATE(7),
    [aux_sym_module_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_require] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      sym_ident,
    ACTIONS(12), 1,
      anon_sym_RPAREN,
    ACTIONS(14), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_string,
    STATE(2), 2,
      sym_module_path,
      aux_sym_require_directive_repeat1,
    STATE(15), 2,
      sym_name,
      sym_path,
  [21] = 6,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_string,
    STATE(2), 2,
      sym_module_path,
      aux_sym_require_directive_repeat1,
    STATE(15), 2,
      sym_name,
      sym_path,
  [42] = 6,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_string,
    STATE(22), 1,
      sym_module_path,
    STATE(15), 2,
      sym_name,
      sym_path,
  [62] = 5,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_string,
    STATE(3), 2,
      sym_module_path,
      aux_sym_require_directive_repeat1,
    STATE(15), 2,
      sym_name,
      sym_path,
  [80] = 5,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_string,
    STATE(23), 1,
      sym_module_path,
    STATE(15), 2,
      sym_name,
      sym_path,
  [97] = 4,
    ACTIONS(5), 1,
      anon_sym_module,
    ACTIONS(7), 1,
      anon_sym_require,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(8), 3,
      sym_module_directive,
      sym_require_directive,
      aux_sym_module_file_repeat1,
  [112] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_module,
    ACTIONS(32), 1,
      anon_sym_require,
    STATE(8), 3,
      sym_module_directive,
      sym_require_directive,
      aux_sym_module_file_repeat1,
  [127] = 3,
    ACTIONS(37), 1,
      aux_sym_module_directive_token1,
    STATE(10), 1,
      aux_sym_module_directive_repeat1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_require,
  [139] = 3,
    ACTIONS(41), 1,
      aux_sym_module_directive_token1,
    STATE(10), 1,
      aux_sym_module_directive_repeat1,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_require,
  [151] = 3,
    ACTIONS(37), 1,
      aux_sym_module_directive_token1,
    STATE(10), 1,
      aux_sym_module_directive_repeat1,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_require,
  [163] = 3,
    ACTIONS(37), 1,
      aux_sym_module_directive_token1,
    STATE(10), 1,
      aux_sym_module_directive_repeat1,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_require,
  [175] = 1,
    ACTIONS(48), 4,
      aux_sym_module_directive_token1,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_ident,
  [182] = 1,
    ACTIONS(50), 4,
      aux_sym_module_directive_token1,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_ident,
  [189] = 1,
    ACTIONS(52), 4,
      aux_sym_module_directive_token1,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_ident,
  [196] = 1,
    ACTIONS(54), 4,
      aux_sym_module_directive_token1,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_ident,
  [203] = 1,
    ACTIONS(56), 4,
      aux_sym_module_directive_token1,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_ident,
  [210] = 3,
    ACTIONS(58), 1,
      aux_sym_string_token1,
    ACTIONS(60), 1,
      anon_sym_DQUOTE2,
    STATE(19), 1,
      aux_sym_string_repeat1,
  [220] = 3,
    ACTIONS(62), 1,
      aux_sym_string_token1,
    ACTIONS(64), 1,
      anon_sym_DQUOTE2,
    STATE(20), 1,
      aux_sym_string_repeat1,
  [230] = 3,
    ACTIONS(66), 1,
      aux_sym_string_token1,
    ACTIONS(69), 1,
      anon_sym_DQUOTE2,
    STATE(20), 1,
      aux_sym_string_repeat1,
  [240] = 2,
    ACTIONS(71), 1,
      aux_sym_module_directive_token1,
    STATE(9), 1,
      aux_sym_module_directive_repeat1,
  [247] = 2,
    ACTIONS(73), 1,
      aux_sym_module_directive_token1,
    STATE(12), 1,
      aux_sym_module_directive_repeat1,
  [254] = 2,
    ACTIONS(75), 1,
      aux_sym_module_directive_token1,
    STATE(11), 1,
      aux_sym_module_directive_repeat1,
  [261] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 97,
  [SMALL_STATE(8)] = 112,
  [SMALL_STATE(9)] = 127,
  [SMALL_STATE(10)] = 139,
  [SMALL_STATE(11)] = 151,
  [SMALL_STATE(12)] = 163,
  [SMALL_STATE(13)] = 175,
  [SMALL_STATE(14)] = 182,
  [SMALL_STATE(15)] = 189,
  [SMALL_STATE(16)] = 196,
  [SMALL_STATE(17)] = 203,
  [SMALL_STATE(18)] = 210,
  [SMALL_STATE(19)] = 220,
  [SMALL_STATE(20)] = 230,
  [SMALL_STATE(21)] = 240,
  [SMALL_STATE(22)] = 247,
  [SMALL_STATE(23)] = 254,
  [SMALL_STATE(24)] = 261,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_require_directive_repeat1, 2), SHIFT_REPEAT(14),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_require_directive_repeat1, 2),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_require_directive_repeat1, 2), SHIFT_REPEAT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_file_repeat1, 2), SHIFT_REPEAT(6),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_file_repeat1, 2), SHIFT_REPEAT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_directive, 5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_directive_repeat1, 2), SHIFT_REPEAT(10),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_directive, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_directive, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_path, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(20),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [77] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_moonmod(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_ident,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
