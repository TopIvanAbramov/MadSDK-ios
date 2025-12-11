// swift-tools-version: 5.7
import PackageDescription

let package = Package(
    name: "MadSDK",
    platforms: [ .iOS(.v15) ],
    products: [
        .library(name: "MadSDK", targets: ["MadSDK"])
    ],
    targets: [
        .target(
            name: "MadSDK",
            dependencies: ["MadSDKBinary", "MadsCoreBinary"],
            path: "Sources/MadSDK"
        ),
        .binaryTarget(
            name: "MadSDKBinary",
            path: "Frameworks/MadSDK.xcframework"
        ),
        .binaryTarget(
            name: "MadsCoreBinary",
            path: "Frameworks/MadsCore.xcframework"
        )
    ]
)
