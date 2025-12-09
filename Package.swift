// swift-tools-version: 5.7
import PackageDescription

let package = Package(
    name: "MadSDK",
    platforms: [.iOS(.v15)],
    products: [
        .library(name: "MadSDK", targets: ["MadSDK", "MadsCore"])
    ],
    targets: [
        .binaryTarget(
            name: "MadSDK",
            url: "https://github.com/TopIvanAbramov/MadSDK-ios/releases/download/0.0.4/MadSDK.xcframework.zip",
            checksum: "40c601703a2bb81ea78e824ead169a46cffae1af8e07d37df2ce4b66d9996a01"
        ),
        .binaryTarget(
            name: "MadsCore",
            url: "https://github.com/TopIvanAbramov/MadSDK-ios/releases/download/0.0.4/MadsCore.xcframework.zip",
            checksum: "ce0238a89aeb5ea90d235ba5a968d67c8d2486ba0b79464a8be1dace97e10ffc"
        )
    ]
)
