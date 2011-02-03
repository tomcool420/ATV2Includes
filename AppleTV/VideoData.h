/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VideoData : NSObject {
@private
	int flags;	// 4 = 0x4
	int pid;	// 8 = 0x8
	int videoType;	// 12 = 0xc
	int width;	// 16 = 0x10
	int height;	// 20 = 0x14
	int parX;	// 24 = 0x18
	int parY;	// 28 = 0x1c
	long long averageFrameRate;	// 32 = 0x20
	int averageBitRate;	// 40 = 0x28
}
- (id)initWithBuffer:(id)buffer;	// 0x3392d608
- (int)getAverageBitRate;	// 0x3392d5f4
- (long long)getAverageFrameRate;	// 0x3392d5dc
- (int)getFlags;	// 0x3392d550
- (int)getHeight;	// 0x3392d5a0
- (int)getPID;	// 0x3392d564
- (int)getParX;	// 0x3392d5b4
- (int)getParY;	// 0x3392d5c8
- (int)getVideoType;	// 0x3392d578
- (int)getWidth;	// 0x3392d58c
@end

