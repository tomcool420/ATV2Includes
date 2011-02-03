/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "TCPServer.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVTCPControlReceiver : TCPServer {
@private
	Class connClass;	// 52 = 0x34
	NSMutableArray *_openConnections;	// 56 = 0x38
}
@property(assign) Class connectionClass;	// G=0x338f42e1; S=0x338f42f1; converted property
- (id)init;	// 0x338f4885
- (BOOL)_start;	// 0x338f4695
// converted property getter: - (Class)connectionClass;	// 0x338f42e1
- (void)connectionClosed:(id)closed;	// 0x338f4719
- (void)dealloc;	// 0x338f483d
- (void)handleNewConnectionFromAddress:(id)address inputStream:(id)stream outputStream:(id)stream3;	// 0x338f47b9
- (void)newBytesReceived:(id)received data:(id)data;	// 0x338f46b9
// converted property setter: - (void)setConnectionClass:(Class)aClass;	// 0x338f42f1
@end

