/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRMediaMenuController.h> // Unknown library
#import "BRTextFieldDelegate.h"


@interface ATVDotMacMainMenuController : BRMediaMenuController <BRTextFieldDelegate> {
@private
	BOOL _isScreenSaverMenu;	// 132 = 0x84
}
+ (id)menuController;	// 0x338b1d85
+ (id)screenSaverMenuController;	// 0x338b1d49
- (id)init;	// 0x338b1d31
- (id)initForScreenSaver:(BOOL)screenSaver;	// 0x338b22cd
- (void)_accountLoaded:(id)loaded;	// 0x338b1e15
- (void)_handleAccountSelection:(id)selection;	// 0x338b1bf5
- (void)_handleAddSelection:(id)selection;	// 0x338b1fed
- (void)dealloc;	// 0x338b1dc1
- (long)defaultIndex;	// 0x338b1cfd
- (BOOL)isNetworkDependent;	// 0x338b1bf1
- (float)listVerticalOffset;	// 0x338b2635
- (void)textDidChange:(id)text;	// 0x338b1bed
- (void)textDidEndEditing:(id)text;	// 0x338b20e9
@end

