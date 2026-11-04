# Marketing Cloud Personalization iOS SDK

The Evergage iOS SDK provides event tracking and personalized experiences for native iOS applications using Salesforce Marketing Cloud Personalization.

This repository provides documentation and package metadata for the precompiled SDK.

## Distribution status

This checkout packages SDK **1.5.1** as a SwiftPM binary target. The static `Evergage.xcframework` is included directly in the repository. Once the contents are published and tagged, SwiftPM fetches the framework with the repository; no separate artifact server or ZIP checksum is required for this local-path binary target.

## Requirements

SDK 1.5.1 requires iOS 15 or later. Set your application's deployment target to iOS 15 or later and use a compatible Xcode version.

## Swift Package Manager

Once a release is published:

1. In Xcode, select **File > Add Package Dependencies**.
2. Enter `https://github.com/salesforce-marketingcloud/marketingcloud-personalization-ios-sdk.git`.
3. Select the published release version.
4. Add the **Evergage** product to the application target.

The package delivers the static XCFramework. Swift applications can access its module with `import Evergage`; Objective-C applications can use `@import Evergage;`.

For a Swift package consumer, add the repository dependency and the product to the consuming target:

```swift
dependencies: [
    .package(url: "https://github.com/salesforce-marketingcloud/marketingcloud-personalization-ios-sdk.git", exact: "1.5.1")
],
targets: [
    .target(name: "YourTarget", dependencies: [
        .product(name: "Evergage", package: "marketingcloud-personalization-ios-sdk")
    ])
]
```

See [Salesforce's mobile integration documentation](https://developer.salesforce.com/docs/marketing/personalization/guide/mobile-integration.html) for SDK configuration and usage.

## Manual integration

For dynamic framework integration, use the dynamic `Evergage.xcframework` from the applicable SDK release ZIP and follow the SDK integration documentation. Public release download links will be added when artifacts are published.

