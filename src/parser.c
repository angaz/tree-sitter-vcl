#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_comment = 2,
  anon_sym_SEMI = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_string_literal_token1 = 5,
  anon_sym_sub = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  sym_fastly_template = 9,
  sym_source_file = 10,
  sym__statement = 11,
  sym_string_expression = 12,
  sym_string_literal = 13,
  sym_subroutine = 14,
  aux_sym_source_file_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_sub] = "sub",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_fastly_template] = "fastly_template",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_string_expression] = "string_expression",
  [sym_string_literal] = "string_literal",
  [sym_subroutine] = "subroutine",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_fastly_template] = sym_fastly_template,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_string_expression] = sym_string_expression,
  [sym_string_literal] = sym_string_literal,
  [sym_subroutine] = sym_subroutine,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_sub] = {
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
  [sym_fastly_template] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_string_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_subroutine] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'F') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != 'A' &&
          lookahead != 'L' &&
          lookahead != 'S' &&
          lookahead != 'T' &&
          lookahead != 'Y') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'F') ADVANCE(9);
      if (lookahead == 'R') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'H') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'L') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'S') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'T') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'T') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == 'V') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'Y') ADVANCE(1);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(26);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(23);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(39);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(19);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == 'A' ||
          lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'Y') ADVANCE(39);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '/') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(25);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_fastly_template);
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
      if (lookahead == 's') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'u') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'b') ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_fastly_template] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym__statement] = STATE(3),
    [sym_string_expression] = STATE(3),
    [sym_string_literal] = STATE(12),
    [sym_subroutine] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_sub] = ACTIONS(11),
    [sym_fastly_template] = ACTIONS(7),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym_string_expression] = STATE(2),
    [sym_string_literal] = STATE(12),
    [sym_subroutine] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(18),
    [anon_sym_sub] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(13),
    [sym_fastly_template] = ACTIONS(15),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym_string_expression] = STATE(2),
    [sym_string_literal] = STATE(12),
    [sym_subroutine] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_sub] = ACTIONS(11),
    [sym_fastly_template] = ACTIONS(26),
  },
  [4] = {
    [sym__statement] = STATE(5),
    [sym_string_expression] = STATE(5),
    [sym_string_literal] = STATE(12),
    [sym_subroutine] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(30),
    [sym_fastly_template] = ACTIONS(28),
  },
  [5] = {
    [sym__statement] = STATE(2),
    [sym_string_expression] = STATE(2),
    [sym_string_literal] = STATE(12),
    [sym_subroutine] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(32),
    [sym_fastly_template] = ACTIONS(26),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(34), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DQUOTE,
      anon_sym_sub,
      anon_sym_RBRACE,
      sym_fastly_template,
  [9] = 1,
    ACTIONS(36), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DQUOTE,
      anon_sym_sub,
      anon_sym_RBRACE,
      sym_fastly_template,
  [18] = 1,
    ACTIONS(38), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DQUOTE,
      anon_sym_sub,
      anon_sym_RBRACE,
      sym_fastly_template,
  [27] = 2,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym_string_literal_token1,
  [34] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym_identifier,
  [41] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
  [48] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_SEMI,
  [55] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
  [62] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
  [69] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 9,
  [SMALL_STATE(8)] = 18,
  [SMALL_STATE(9)] = 27,
  [SMALL_STATE(10)] = 34,
  [SMALL_STATE(11)] = 41,
  [SMALL_STATE(12)] = 48,
  [SMALL_STATE(13)] = 55,
  [SMALL_STATE(14)] = 62,
  [SMALL_STATE(15)] = 69,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_expression, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 4, .production_id = 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 5, .production_id = 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [46] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_vcl(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
