/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "SBJsonParser.h"
#import "SBJsonBase.h"


@protocol SBJsonParser
- (id)objectWithString:(id)string;
@end

__attribute__((visibility("hidden")))
@interface SBJsonParser : SBJsonBase <SBJsonParser> {
@private
	char *c;	// 16 = 0x10
}
+ (void)initialize;	// 0x33936c70
- (id)fragmentWithString:(id)string;	// 0x33937008
- (id)objectWithString:(id)string;	// 0x33936f38
- (BOOL)scanHexQuad:(unsigned short *)quad;	// 0x33936cd0
- (BOOL)scanIsAtEnd;	// 0x33937ea0
- (BOOL)scanNumber:(id *)number;	// 0x33937a90
- (BOOL)scanRestOfArray:(id *)array;	// 0x33938308
- (BOOL)scanRestOfDictionary:(id *)dictionary;	// 0x33937f04
- (BOOL)scanRestOfFalse:(id *)aFalse;	// 0x339374b0
- (BOOL)scanRestOfNull:(id *)null;	// 0x3393740c
- (BOOL)scanRestOfString:(id *)string;	// 0x339375fc
- (BOOL)scanRestOfTrue:(id *)aTrue;	// 0x33937554
- (BOOL)scanUnicodeChar:(unsigned short *)aChar;	// 0x33936d90
- (BOOL)scanValue:(id *)value;	// 0x339371f8
@end

