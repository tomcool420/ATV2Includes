/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSMutableDictionary;

@interface ATVMultistateProgressIndicator : BRControl {
@private
	id _currentStateID;	// 40 = 0x28
	NSMutableDictionary *_states;	// 44 = 0x2c
	float _value;	// 48 = 0x30
}
@property(retain) id state;	// G=0x338a4d8d; S=0x338a4e85; converted property
@property(assign) float value;	// G=0x338a4d2d; S=0x338a4d3d; converted property
- (id)init;	// 0x338a4e19
- (void)dealloc;	// 0x338a4dbd
- (void)drawInContext:(CGContextRef)context;	// 0x338a500d
- (void)setProgressIndicatorImageBatch:(id)batch forState:(id)state;	// 0x338a4f61
// converted property setter: - (void)setState:(id)state;	// 0x338a4e85
// converted property setter: - (void)setValue:(float)value;	// 0x338a4d3d
// converted property getter: - (id)state;	// 0x338a4d8d
// converted property getter: - (float)value;	// 0x338a4d2d
@end

