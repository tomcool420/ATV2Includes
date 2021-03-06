/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <BRControl.h> // Unknown library

@class BRTextControl, BRImageControl, ATVMusicStoreOffer;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOfferControl : BRControl {
@private
	ATVMusicStoreOffer *_storeOffer;	// 40 = 0x28
	BRTextControl *_topLineTextControl;	// 44 = 0x2c
	BRTextControl *_bottomLineTextControl;	// 48 = 0x30
	BRImageControl *_hdImageControl;	// 52 = 0x34
	BRImageControl *_ddImageControl;	// 56 = 0x38
	BRImageControl *_ccImageControl;	// 60 = 0x3c
	BRImageControl *_digitalExtrasControl;	// 64 = 0x40
}
- (id)init;	// 0x338e0091
- (id)accessibilityLabel;	// 0x338e0631
- (void)dealloc;	// 0x338dffed
- (void)layoutSubcontrols;	// 0x338e00d1
- (void)setClosedCaption:(BOOL)caption;	// 0x338dfab1
- (void)setDolbyDigital:(BOOL)digital;	// 0x338dfb79
- (void)setHasDigitalExtras:(BOOL)extras;	// 0x338df9dd
- (void)setWidescreen:(BOOL)widescreen andHD:(BOOL)hd;	// 0x338dfc41
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x338e0715
@end

