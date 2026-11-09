# Marketing Cloud Personalization iOS SDK

The Evergage iOS SDK provides event tracking and personalized experiences for native iOS applications using Salesforce Marketing Cloud Personalization.

This repository distributes the precompiled SDK and its documentation.

## Distribution

This package ships SDK **1.5.1** as a SwiftPM binary target. The static `Evergage.xcframework` is included in the repository under `Frameworks/`, so SwiftPM fetches it together with the package; no separate artifact download or checksum is required.

## Requirements

SDK 1.5.1 requires iOS 15 or later. Set your application's deployment target to iOS 15 or later and use a compatible Xcode version.

## Swift Package Manager

1. In Xcode, select **File > Add Package Dependencies**.
2. Enter `https://github.com/salesforce-marketingcloud/marketingcloud-personalization-ios-sdk.git`.
3. Select version **1.5.1**.
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

For dynamic framework integration, use the dynamic `Evergage.xcframework` from the SDK 1.5.1 release ZIP and follow the SDK integration documentation.

## Support

This repository doesn't accept issues or contributions. For help with the SDK, contact [Salesforce Support](https://help.salesforce.com).

## Terms of use

Use of this SDK is governed by [TERMS OF USE.txt](TERMS%20OF%20USE.txt). This repository contains docs and artifacts only; see [DOCS_or_ARTIFACTS_ONLY.md](DOCS_or_ARTIFACTS_ONLY.md).

