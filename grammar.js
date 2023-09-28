/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const single_newline = /[\n]/;
const newline = repeat1(single_newline);

module.exports = grammar({
  name: 'moonmod',

  extras: $ => [
    /[ \t]/
  ],

  word: $ => $.ident,

  rules: {
    module_file: $ => repeat(choice(
      $.module_directive,
      $.require_directive
    )),

    module_directive: $ => seq(
      'module',
      $.module_path,
      newline,
    ),

    module_path: $ => choice(
      $.path,
      $.name
    ),

    require_directive: $ => seq(
      'require',
      choice(
        $.module_path,
        seq(
          '(',
          repeat1($.module_path),
          ')'
        )
      ),
      newline,
    ),

    name: $ => $.ident,

    path: $ => $.string,

    string: $ => seq(
      '"',
      repeat(/[^"]/),
      token.immediate('"'),
    ),

    ident: _ => /[a-zA-Z_/.0-9][a-zA-Z_/.:\-0-9]*/,
  }
});
