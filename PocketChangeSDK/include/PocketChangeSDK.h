//
//  PocketChangeSDK.h
//  pocketchange-ios-sdk
//
//  Copyright (c) 2012 Lunch Money Co. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef _POCKET_CHANGE_SDK_H_
#define _POCKET_CHANGE_SDK_H_

OBJC_EXPORT NSString * const PocketChangeSDKVersion;
OBJC_EXPORT NSString * const PocketChangeRewardGrantedNotification;
OBJC_EXPORT NSString * const PocketChangeRewardGrantedNotificationKeyGrantedRewardIDs;
OBJC_EXPORT NSString * const PocketChangeNotificationIsPendingNotification;
OBJC_EXPORT NSString * const PocketChangeNotificationWasShownNotification;
OBJC_EXPORT NSString * const PocketChangeNotificationWasDismissedNotification;

@interface PocketChangeSDK : NSObject

- (void)applicationDidFinishLaunching;
- (void)grantReward:(NSString *)rewardId;
- (void)grantReward:(NSString *)rewardId amount:(NSUInteger)amount;
- (BOOL)hasPendingNotification;
- (BOOL)showNotification;

+ (PocketChangeSDK *)sharedInstance;

@end


#endif // #ifndef _POCKET_CHANGE_SDK_H_