/**
 * @file WebAssembly Types & Functions
 * @author Antonius Naumann <git@antonius.dev>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "wtf",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
