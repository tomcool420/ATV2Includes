/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSTimer, ATVDirectionalRemoteConnectionHandler, NSMutableArray;

@interface ATVRemoteControlMessageHandler : NSObject {
@private
	int _touchDirection;	// 4 = 0x4
	CGPoint _startPoint;	// 8 = 0x8
	double _lastTimeStamp;	// 16 = 0x10
	CGPoint _lastPoint;	// 24 = 0x18
	NSTimer *_swipeTimer;	// 32 = 0x20
	NSTimer *_easeOutTimer;	// 36 = 0x24
	double _easeOutInterval;	// 40 = 0x28
	double _easeOutDecelerationFactor;	// 48 = 0x30
	BOOL _easeOutRepeat;	// 56 = 0x38
	CGPoint _autoScrollStartPoint;	// 60 = 0x3c
	double _autoScrollStartInterval;	// 68 = 0x44
	NSTimer *_autoScrollContinueTimer;	// 76 = 0x4c
	BOOL _isReallyReallyAutoScrolling;	// 80 = 0x50
	double _autoScrollInterval;	// 84 = 0x54
	CGPoint _velocityAdjustOffset;	// 92 = 0x5c
	CGPoint _lastVelocityRefPoint;	// 100 = 0x64
	CGPoint _velocityVector;	// 108 = 0x6c
	NSMutableArray *_velocitySet;	// 116 = 0x74
	int _touchCount;	// 120 = 0x78
	NSMutableArray *_throttledEventQueue;	// 124 = 0x7c
	NSTimer *_throttleEventTimer;	// 128 = 0x80
	BOOL _prohibitSelect;	// 132 = 0x84
	BOOL _activelyScrolling;	// 133 = 0x85
	CGSize _selectionChange;	// 136 = 0x88
	ATVDirectionalRemoteConnectionHandler *_connectionHandler;	// 144 = 0x90
	NSTimer *_connectionTimeoutTimer;	// 148 = 0x94
}
- (id)init;	// 0x338f2961
- (CGPoint)_adjustPoint:(CGPoint)point forVelocity:(CGPoint)velocity;	// 0x338f39fd
- (void)_autoScrollContinueTimerCallback:(id)callback;	// 0x338f1ef1
- (void)_beginAutoScroll;	// 0x338f237d
- (double)_calculateVelocityAverage;	// 0x338f268d
- (void)_clearEventQueue;	// 0x338f1c4d
- (void)_connectionTimedOut:(id)anOut;	// 0x338f27f1
- (BOOL)_easeOutInProgress;	// 0x338f1c2d
- (void)_easeOutTimerCallback:(id)callback;	// 0x338f2bf9
- (void)_finishAutoScroll;	// 0x338f22c1
- (void)_finishEaseOut;	// 0x338f1e85
- (CGPoint)_getSelectionPosition:(CGPoint)position;	// 0x338f3989
- (CGSize)_initialSelectionChangeDistance;	// 0x338f1c41
- (void)_invalidateSwipeAction;	// 0x338f3169
- (BOOL)_isAutoScrolling;	// 0x338f1c09
- (BOOL)_isReallyReallyAutoScrolling;	// 0x338f1c1d
- (void)_postEvent:(id)event;	// 0x338f1d19
- (void)_postThrottledEvent:(id)event;	// 0x338f1c95
- (void)_processLastTouchMove;	// 0x338f3bb9
- (void)_processSelectionChange:(int)change delta:(int)delta;	// 0x338f301d
- (void)_processSwipeMovement;	// 0x338f36e1
- (BOOL)_processTouchEvent:(unsigned long)event value:(unsigned long)value eventDictionary:(id)dictionary;	// 0x338f3e1d
- (void)_refreshConnectionTimeoutTimer;	// 0x338f2805
- (CGSize)_repeatSelectionChangeDistance;	// 0x338f428d
- (void)_resetTrackingCoordinates;	// 0x338f30d5
- (void)_resetVelocitySet;	// 0x338f24c9
- (void)_scrollEndNotification;	// 0x338f2a9d
- (void)_scrollStartNotification;	// 0x338f2abd
- (void)_sendDirectionEvent:(int)event value:(int)value;	// 0x338f23f1
- (BOOL)_startEaseOut;	// 0x338f3385
- (BOOL)_swipeActive;	// 0x338f1bf5
- (void)_swipeTimeout;	// 0x338f2d79
- (void)_throttleEventTimerCallback;	// 0x338f2add
- (BOOL)_updateAutoScroll;	// 0x338f31e9
- (void)_updateAutoScrollInterval;	// 0x338f1f91
- (void)_updateVelocitySet:(CGPoint)set velocity:(CGPoint)velocity;	// 0x338f24e9
- (double)_velocitySetTotalDistance;	// 0x338f25dd
- (void)dealloc;	// 0x338f28cd
- (BOOL)handleDirectionalRemoteMessage:(unsigned long)message value:(unsigned long)value eventDictionary:(id)dictionary;	// 0x338f2e11
- (void)invalidate;	// 0x338f28a1
@end

