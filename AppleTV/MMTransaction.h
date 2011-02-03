/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class MMRequest;

__attribute__((visibility("hidden")))
@interface MMTransaction : NSObject {
@private
	MMRequest *_request;	// 4 = 0x4
	BOOL _useSynchronous;	// 8 = 0x8
	BOOL _resultRequired;	// 9 = 0x9
}
@property(retain, nonatomic) MMRequest *request;	// G=0x33b3fedd; S=0x33b402fd; @synthesize=_request
@property(assign, nonatomic) BOOL resultRequired;	// G=0x33b3fe9d; S=0x33b3fead; @synthesize=_resultRequired
@property(assign, nonatomic) BOOL useSynchronous;	// G=0x33b3febd; S=0x33b3fecd; @synthesize=_useSynchronous
- (id)initWithRequest:(id)request synchronousFlag:(BOOL)flag resultRequired:(BOOL)required delegate:(id)delegate;	// 0x33b40291
- (void)dealloc;	// 0x33b40245
- (void)dispatch;	// 0x33b401f1
- (int)errorType;	// 0x33b3feed
- (int)httpStatusCode;	// 0x33b400bd
- (BOOL)isSuccessful;	// 0x33b40149
// declared property getter: - (id)request;	// 0x33b3fedd
- (id)result;	// 0x33b40069
// declared property getter: - (BOOL)resultRequired;	// 0x33b3fe9d
// declared property setter: - (void)setRequest:(id)request;	// 0x33b402fd
// declared property setter: - (void)setResultRequired:(BOOL)required;	// 0x33b3fead
// declared property setter: - (void)setUseSynchronous:(BOOL)synchronous;	// 0x33b3fecd
- (int)transactionState;	// 0x33b400e1
// declared property getter: - (BOOL)useSynchronous;	// 0x33b3febd
@end

