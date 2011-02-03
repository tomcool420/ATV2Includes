/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <BRControl.h> // Unknown library

@class BRMarqueeTextControl, ATVMultistateProgressIndicator, BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVDownloadMenuItem : BRControl {
@private
	BRMarqueeTextControl *_downloadTitle;	// 40 = 0x28
	BRImageControl *_downloadOrPauseButtonImage;	// 44 = 0x2c
	ATVMultistateProgressIndicator *_progressIndicator;	// 48 = 0x30
	BRTextControl *_statusText;	// 52 = 0x34
	BRTextControl *_percentCompleteText;	// 56 = 0x38
	float _percentComplete;	// 60 = 0x3c
}
+ (id)_downloadButtonImage;	// 0x338a33cd
+ (id)_pauseButtonImage;	// 0x338a3379
+ (void)_setStateGraphicsOnProgressIndicator:(id)indicator;	// 0x338a3101
+ (id)_statusTextAttributes;	// 0x338a3325
- (id)init;	// 0x338a36fd
- (void)_downloadStateChangedNotificationHandler:(id)handler;	// 0x338a2e45
- (void)_requeryAssetAndUpdateUI;	// 0x338a2ed1
- (void)_setDownloadStateForDownload:(id)download;	// 0x338a3421
- (void)_setPercentComplete:(float)complete;	// 0x338a3b41
- (void)_setStatusText:(id)text;	// 0x338a3571
- (void)_setTitle:(id)title;	// 0x338a3a45
- (void)_updateRequestNotificationHandler:(id)handler;	// 0x338a2e31
- (void)controlWasFocused;	// 0x338a3609
- (void)controlWasUnfocused;	// 0x338a35f5
- (void)dealloc;	// 0x338a3645
- (CGRect)focusCursorFrame;	// 0x338a39d5
- (void)layoutSubcontrols;	// 0x338a3c75
- (void)setDownload:(id)download;	// 0x338a361d
@end

