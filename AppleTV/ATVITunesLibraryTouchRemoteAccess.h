/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVITunesTouchRemoteManager.h"
#import <BRSingleton.h> // Unknown library


@interface ATVITunesLibraryTouchRemoteAccess : BRSingleton <ATVITunesTouchRemoteManager> {
@private
	id<ATVITunesTouchRemoteManager> _delegate;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x338f1ac5
+ (id)singleton;	// 0x338f1ab9
- (void)dealloc;	// 0x338f1bad
- (void)pairWithTouchRemote:(id)touchRemote withPIN:(id)pin;	// 0x338f1af1
- (id)pairableTouchRemotes;	// 0x338f1b11
- (id)pairedTouchRemotes;	// 0x338f1b55
- (BOOL)removePairedTouchRemote:(id)remote;	// 0x338f1b31
- (unsigned long)sendGeneralPurposeMessage:(id)message;	// 0x338f1ad1
- (void)setITunesTouchRemoteManagerDelegate:(id)delegate;	// 0x338f1b75
@end

