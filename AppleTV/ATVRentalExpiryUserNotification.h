/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library

@class BRReflectedImageControl, BRTextControl;
@protocol BRMediaAsset;

@interface ATVRentalExpiryUserNotification : BRControl {
@private
	BRControl *_dialogBox;	// 40 = 0x28
	BRReflectedImageControl *_imageControl;	// 44 = 0x2c
	BRTextControl *_titleControl;	// 48 = 0x30
	id<BRMediaAsset> _asset;	// 52 = 0x34
}
+ (void)postExpiryNotificationForAsset:(id)asset;	// 0x338e6805
- (id)init;	// 0x338e6885
- (void)_playAsset;	// 0x338e66cd
- (void)_setAsset:(id)asset;	// 0x338e6b19
- (BOOL)brEventAction:(id)action;	// 0x338e6709
- (void)dealloc;	// 0x338e67a9
- (void)layoutSubcontrols;	// 0x338e6d9d
@end
