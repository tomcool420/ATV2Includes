/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSTimer, NSArray, ATVRCButtonPatternSet;
@protocol ATVRCPatternMatcherDelegate;

__attribute__((visibility("hidden")))
@interface ATVRCPatternMatcher : NSObject {
@private
	int _matchState;	// 4 = 0x4
	int _buttonState;	// 8 = 0x8
	ATVRCButtonPatternSet *_patternSet;	// 12 = 0xc
	long _matchIndex;	// 16 = 0x10
	NSTimer *_discontinuityTrigger;	// 20 = 0x14
	NSTimer *_holdTrigger;	// 24 = 0x18
	double _lastEventTimestamp;	// 28 = 0x1c
	unsigned _pairingMask;	// 36 = 0x24
	unsigned _payloadMask;	// 40 = 0x28
	unsigned _pairingID;	// 44 = 0x2c
	NSArray *_upEvents;	// 48 = 0x30
	NSArray *_holdEvents;	// 52 = 0x34
	NSArray *_downEvents;	// 56 = 0x38
	id<ATVRCPatternMatcherDelegate> _delegate;	// 60 = 0x3c
}
@property(retain) NSArray *downEvents;	// G=0x338eea2d; S=0x338ef7a9; converted property
@property(retain) NSArray *holdEvents;	// G=0x338eea3d; S=0x338ef771; converted property
@property(retain) ATVRCButtonPatternSet *patternSet;	// G=0x338eea1d; S=0x338ef7e1; converted property
@property(retain) NSArray *upEvents;	// G=0x338eea4d; S=0x338ef739; converted property
+ (BOOL)findEventInSet:(id)set event:(id)event startIndex:(long)index numEventstoSearch:(long)search;	// 0x338ef449
+ (id)findFirstPattern:(id)pattern startIndex:(long)index minPatternLength:(long)length;	// 0x338ef4d9
+ (id)findRepeatPattern:(id)pattern startIndex:(long)index;	// 0x338ef5a1
+ (double)intervalBetweenFirstAndLastEvent:(id)event;	// 0x338ef1e1
+ (double)intervalBetweenLastEvents:(id)events;	// 0x338ef279
+ (BOOL)matchEvent:(id)event withEvent:(id)event2;	// 0x338ef321
+ (BOOL)matchPattern:(id)pattern pattern:(id)pattern2 atIndex:(long)index;	// 0x338ef39d
- (id)initWithPatternSet:(id)patternSet delegate:(id)delegate;	// 0x338ef8e5
- (void)_checkDiscontinuityTrigger:(id)trigger;	// 0x338ef935
- (void)_clearDiscontinuityTrigger;	// 0x338eedd1
- (void)_clearHoldTrigger;	// 0x338eed55
- (void)_commandPatternMatched;	// 0x338eee75
- (double)_discontinuityTriggerInterval;	// 0x338eeccd
- (void)_discontinuityTriggered;	// 0x338eec0d
- (void)_dispatchEvents:(id)events;	// 0x338eea85
- (void)_holdTriggered;	// 0x338eeb91
- (BOOL)_matchEvent:(id)event against:(id)against;	// 0x338eef99
- (id)_processPairingInfo:(id)info uidMismatchStatus:(BOOL *)status;	// 0x338ef035
- (void)_resetDiscontinuityTrigger;	// 0x338eedfd
- (void)_resetHoldTrigger;	// 0x338eed81
- (void)dealloc;	// 0x338ef865
// converted property getter: - (id)downEvents;	// 0x338eea2d
- (void)forceReleaseState;	// 0x338efa09
// converted property getter: - (id)holdEvents;	// 0x338eea3d
// converted property getter: - (id)patternSet;	// 0x338eea1d
- (BOOL)processEvent:(id)event uidMismatchStatus:(BOOL *)status;	// 0x338ef641
- (void)reset;	// 0x338ef819
- (void)setDelegate:(id)delegate;	// 0x338eea0d
// converted property setter: - (void)setDownEvents:(id)events;	// 0x338ef7a9
// converted property setter: - (void)setHoldEvents:(id)events;	// 0x338ef771
- (void)setPairingInfo:(unsigned long)info pairingMask:(unsigned long)mask payloadMask:(unsigned long)mask3;	// 0x338eea5d
// converted property setter: - (void)setPatternSet:(id)set;	// 0x338ef7e1
// converted property setter: - (void)setUpEvents:(id)events;	// 0x338ef739
// converted property getter: - (id)upEvents;	// 0x338eea4d
@end

