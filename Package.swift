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
            linkerSettings: [
                .linkedFramework("MadsCore")
            ]
        ),
        .binaryTarget(
            name: "MadSDKBinary",
            path: "MadSDK.xcframework"
        ),
        .binaryTarget(
            name: "MadsCoreBinary",
            path: "MadsCore.xcframework"
        )
    ]
)
