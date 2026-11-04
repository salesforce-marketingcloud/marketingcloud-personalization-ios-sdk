// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "Evergage",
    platforms: [.iOS("15.0")],
    products: [.library(name: "Evergage", targets: ["Evergage"])],
    targets: [.binaryTarget(name: "Evergage", path: "Evergage.xcframework")]
)
