/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRTextEntryController.h> // Unknown library
#import "BRTextFieldDelegate.h"

@class BRAirportNetwork;
@protocol ATVAPPasswordEntryDelegate;

__attribute__((visibility("hidden")))
@interface ATVAPPasswordEntryController : BRTextEntryController <BRTextFieldDelegate> {
@private
	BRAirportNetwork *_network;	// 108 = 0x6c
	id<ATVAPPasswordEntryDelegate> _delegate;	// 112 = 0x70
}
- (id)initForNetwork:(id)network acceptOnlyHex:(BOOL)hex notifying:(id)notifying;	// 0x338e9d85
- (void)dealloc;	// 0x338e9d29
- (void)setInitialPassword:(id)password;	// 0x338e9ccd
- (void)textDidChange:(id)text;	// 0x338e9cc9
- (void)textDidEndEditing:(id)text;	// 0x338e9ce1
@end

