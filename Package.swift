// swift-tools-version: 5.7
import PackageDescription

let package = Package(
    name: "MadSDK",
    platforms: [ .iOS(.v15) ],
    products: [
        .library(name: "MadSDK", targets: ["MadSDKBinary"])
    ],
    targets: [
        .binaryTarget(
            name: "MadSDKBinary",
            path: "MadSDK.xcframework"
        )
    ]
)
