/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRSingleton.h> // Unknown library

@class NSTimer, ATVRemoteControlMessageHandler, NSMutableArray;

@interface ATVTouchRemoteManager : BRSingleton {
@private
	NSMutableArray *_outstandingNowPlayingRequests;	// 4 = 0x4
	NSMutableArray *_outstandingDialogUpdateRequests;	// 8 = 0x8
	NSMutableArray *_pairableTouchRemotes;	// 12 = 0xc
	NSTimer *_trickSpeedAdvanceTimer;	// 16 = 0x10
	ATVRemoteControlMessageHandler *_remoteMessageHandler;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *pairableTouchRemotes;	// G=0x338f54f9; converted property
+ (void)setSingleton:(id)singleton;	// 0x338f4b69
+ (id)singleton;	// 0x338f4b5d
+ (id)touchablePlayer;	// 0x338f579d
- (id)init;	// 0x338f56c5
- (BOOL)_preparePlayback;	// 0x338f5839
- (void)_sendPromptUpdate:(id)update;	// 0x338f4b79
- (void)_startPlaybackWithPlayer:(id)player;	// 0x338f4ba5
- (void)_startTrickSpeedAdvanceTimer;	// 0x338f4da1
- (void)_stopTrickSpeedAdvanceTimer;	// 0x338f4d75
- (void)_updateTrickSpeed:(id)speed;	// 0x338f4d09
- (void)_userAction;	// 0x338f4e05
- (void)beginFF;	// 0x338f52c1
- (void)beginRW;	// 0x338f51d9
- (void)dealloc;	// 0x338f5631
- (void)nextChapter;	// 0x338f5199
- (void)nextItem;	// 0x338f5099
- (void)pairWithTouchRemote:(id)touchRemote withPIN:(id)pin;	// 0x338f54c5
// converted property getter: - (id)pairableTouchRemotes;	// 0x338f54f9
- (id)pairedTouchRemotes;	// 0x338f555d
- (void)pause;	// 0x338f5419
- (void)play;	// 0x338f59c5
- (void)playMediaAtIndex:(long)index inCollection:(id)collection shuffle:(BOOL)shuffle repeat:(BOOL)repeat;	// 0x338f5a0d
- (void)playMediaAtIndex:(long)index inTracklist:(id)tracklist shuffle:(BOOL)shuffle repeat:(BOOL)repeat;	// 0x338f5acd
- (void)playPause;	// 0x338f545d
- (void)playResume;	// 0x338f58ed
- (void)prevChapter;	// 0x338f5159
- (void)prevItem;	// 0x338f4fa1
- (void)removePairableTouchRemote:(id)remote;	// 0x338f5589
- (BOOL)removePairedTouchRemote:(id)remote;	// 0x338f5529
- (void)repeatAdvance;	// 0x338f4ed9
- (void)restartItem;	// 0x338f53a9
- (unsigned long)sendGeneralPurposeMessage:(id)message;	// 0x338f4ea9
- (void)shuffleSongs;	// 0x338f4b75
- (void)shuffleToggle;	// 0x338f4f45
- (void)stop;	// 0x338f53d5
@end

