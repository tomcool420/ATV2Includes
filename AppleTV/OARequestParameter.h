/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface OARequestParameter : NSObject {
@private
	NSString *name;	// 4 = 0x4
	NSString *value;	// 8 = 0x8
}
@property(copy) NSString *name;	// G=0x33944644; S=0x33944684; @synthesize
@property(copy) NSString *value;	// G=0x33944664; S=0x339446b8; @synthesize
+ (id)parameterWithName:(id)name value:(id)value;	// 0x33944504
- (id)initWithName:(id)name value:(id)value;	// 0x3394455c
- (id)URLEncodedName;	// 0x339444cc
- (id)URLEncodedNameValuePair;	// 0x33944410
- (id)URLEncodedValue;	// 0x33944494
- (void)dealloc;	// 0x339445d8
// declared property getter: - (id)name;	// 0x33944644
// declared property setter: - (void)setName:(id)name;	// 0x33944684
// declared property setter: - (void)setValue:(id)value;	// 0x339446b8
// declared property getter: - (id)value;	// 0x33944664
@end

