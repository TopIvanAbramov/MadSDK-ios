// swift-tools-version: 5.7.0
import PackageDescription

let package = Package(
    name: "MadSDK",
    platforms: [ .iOS(.v15) ],
    products: [
        .library(name: "MadSDK", targets: ["MadSDK"])
    ],
    targets: [
        .binaryTarget(
            name: "MadSDK",
            url: "https://github.com/TopIvanAbramov/MadSDK-ios/releases/download/0.0.2/MadSDK.xcframework.zip",
            checksum: "40c601703a2bb81ea78e824ead169a46cffae1af8e07d37df2ce4b66d9996a01"
        )
    ]
)
