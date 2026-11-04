//
//  EVGConstants.h
//  Evergage
//
//  Copyright © 2015-2026 Salesforce.com, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Indicates the threshold for logging in `<[Evergage logLevel]>`.
 Log messages at the threshold level and lower will be logged.
 For instance, if the threshold is `EVGLogLevelWarn`, messages at level `EVGLogLevelWarn` or `EVGLogLevelError` will be logged.
 @see [Evergage logLevel]
 */
typedef NS_ENUM(NSInteger, EVGLogLevel) {

    /**
     * Indicates that an operation failed.
     */
    EVGLogLevelError = 1000,

    /**
     * Indicates that something abnormal happened but the overall operation did not necessarily fail.
     */
    EVGLogLevelWarn  = 2000,

    /**
     * Provides detail about most operations.
     */
    EVGLogLevelInfo  = 3000,

    /**
     * Provides a high level of detail primarily intended for Evergage developers.
     */
    EVGLogLevelDebug = 4000,

    /**
     * Disables all logging. This is the default for release builds.
     */
    EVGLogLevelOff   = 0,

    /**
     * Enables all logging.
     */
    EVGLogLevelAll   = NSIntegerMax
};

FOUNDATION_EXPORT NSString *const EVGErrorDomain;

/**
 Posted on the main thread when the SDK has loaded its server configuration
 successfully and events will be campaign-eligible.

 Observe this notification to defer campaign handler registration until the
 server configuration has loaded. Check the `isServerConfigLoaded` property
 on the `Evergage` shared instance for the current state.

 May be posted multiple times if the SDK is reset and restarted with a new
 configuration. After a reset, existing `NSNotificationCenter` observers
 remain registered and will fire on the next load.

 @since 1.5.0
 */
FOUNDATION_EXPORT NSString *const EVGNotificationServerConfigLoaded;
