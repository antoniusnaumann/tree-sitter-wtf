// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterWtf",
    products: [
        .library(name: "TreeSitterWtf", targets: ["TreeSitterWtf"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterWtf",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterWtfTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterWtf",
            ],
            path: "bindings/swift/TreeSitterWtfTests"
        )
    ],
    cLanguageStandard: .c11
)
