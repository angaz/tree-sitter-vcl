module.exports = grammar({
  name: 'vcl',

  word: $ => $.identifier,

  extras: $ => [
    $.comment,
    /\s/,
  ],

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.fastly_template,
      $.comment,
      $.string_expression,
      $.subroutine,
    ),

    comment: _ => token(choice(
      seq('#', /[^FASTLY].*/),
      seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    )),

    string_expression: $ => seq(
      $.string_literal,
      ';',
    ),

    string_literal: _ => seq(
      '"',
      /[^"]*?/,
      '"',
    ),

    subroutine: $ => seq(
      "sub",
      field("name", $.identifier),
      '{',
      repeat($._statement),
      '}',
    ),

    identifier: _ => /[a-z][a-z_0-9]*/,
    fastly_template: _ => /#FASTLY (RECV|FETCH)/,
  },
});
