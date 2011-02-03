/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDate, NSTimer, ATVRCButtonPatternSet, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVRCCapture : NSObject {
@private
	int _captureState;	// 4 = 0x4
	NSMutableArray *_capturedEvents;	// 8 = 0x8
	ATVRCButtonPatternSet *_workingPatternSet;	// 12 = 0xc
	NSTimer *_discontinuityTrigger;	// 16 = 0x10
	NSDate *_captureStartTime;	// 20 = 0x14
}
@property(readonly, assign) int captureState;	// G=0x338ec625; converted property
@property(readonly, retain) ATVRCButtonPatternSet *workingPatternSet;	// G=0x338ec635; converted property
- (id)init;	// 0x338ecd8d
- (void)_clearDiscontinuityTrigger;	// 0x338ec8b9
- (void)_discontinuityTrigger:(id)trigger;	// 0x338ece1d
- (void)_firstCommandEventReceived;	// 0x338eca7d
- (BOOL)_identifyCommandPattern;	// 0x338ec711
- (void)_mainCaptureDoneTrigger:(id)trigger;	// 0x338ec945
- (double)_maxIntervalBetweenEvents;	// 0x338ec645
- (void)_resetDiscontinuityTrigger;	// 0x338ec8e5
- (void)_setCaptureState:(int)state;	// 0x338ecf49
- (void)addEvent:(id)event;	// 0x338ecc75
- (double)captureProgress;	// 0x338ecb85
// converted property getter: - (int)captureState;	// 0x338ec625
- (void)dealloc;	// 0x338ecd21
- (void)reset;	// 0x338ecc19
- (void)startCapture;	// 0x338eccf9
// converted property getter: - (id)workingPatternSet;	// 0x338ec635
@end
