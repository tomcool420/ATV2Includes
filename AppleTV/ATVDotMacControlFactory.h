/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRPhotoControlFactory.h> // Unknown library

@class NSDateFormatter;

__attribute__((visibility("hidden")))
@interface ATVDotMacControlFactory : BRPhotoControlFactory {
@private
	NSDateFormatter *_dotMacFormatter;	// 16 = 0x10
}
+ (id)mainMenuFactory;	// 0x338b0f1d
+ (id)standardFactory;	// 0x338b0f5d
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x338b0ea5
- (id)_dividerForData:(id)data;	// 0x338b154d
- (id)_durationStringFromLong:(long)aLong;	// 0x338b0925
- (id)_menuItemForDotMacData:(id)dotMacData currentControl:(id)control;	// 0x338b0f9d
- (id)_posterControlForDotMacData:(id)dotMacData currentControl:(id)control requestedBy:(id)by;	// 0x338b09fd
- (id)_previewControlForDotMacData:(id)dotMacData;	// 0x338b0c31
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x338b0d6d
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x338b0cb9
@end
