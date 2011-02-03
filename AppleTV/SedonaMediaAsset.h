/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRRSSMediaAsset.h> // Unknown library
#import "BRMediaAssetDerivesMediaURL.h"

@class BRTimer;

__attribute__((visibility("hidden")))
@interface SedonaMediaAsset : BRRSSMediaAsset <BRMediaAssetDerivesMediaURL> {
@private
	BOOL _playlistURLDetermined;	// 13 = 0xd
	BOOL _hasBeenPlayed;	// 14 = 0xe
	BOOL _isPaused;	// 15 = 0xf
	double _lastNotedPlaybackPosition;	// 16 = 0x10
	unsigned long _statusCount;	// 24 = 0x18
	BRTimer *_bufferingTimer;	// 28 = 0x1c
	int _startPredicate;	// 32 = 0x20
	int _endPredicate;	// 36 = 0x24
}
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x33917c15
- (void)_playbackEnded:(id)ended;	// 0x33916ec9
- (void)_playbackProgressChanged:(id)changed;	// 0x33916f31
- (void)_playerEnd:(double)end reason:(id)reason;	// 0x33916b55
- (void)_playerStart:(double)start;	// 0x33916bc9
- (void)_playerStateChanged:(id)changed;	// 0x33916c59
- (void)dealloc;	// 0x33917b41
- (BOOL)forceHDCPProtection;	// 0x33916b51
- (id)resolveMediaURL;	// 0x33917ce9
- (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x339171d9
- (void)setBookmarkTimeInSeconds:(unsigned)seconds;	// 0x33916b35
@end
