/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVSWUDownloadResult : NSObject {
@private
	BOOL _canceled;	// 4 = 0x4
	NSString *_failedURL;	// 8 = 0x8
}
+ (id)resultWithFailedURL:(id)failedURL wasCanceled:(BOOL)canceled;	// 0x338fc9ad
- (id)initWithFailedURL:(id)failedURL wasCanceled:(BOOL)canceled;	// 0x338fc945
- (void)dealloc;	// 0x338fc8fd
- (id)missingFileURL;	// 0x338fc8b1
- (BOOL)wasCanceled;	// 0x338fc8a1
@end

