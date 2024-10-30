import XCTest
import SwiftTreeSitter
import TreeSitterWtf

final class TreeSitterWtfTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_wtf())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Wtf grammar")
    }
}
