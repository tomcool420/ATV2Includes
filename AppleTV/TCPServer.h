/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSNetService;

__attribute__((visibility("hidden")))
@interface TCPServer : NSObject {
@private
	id delegate;	// 4 = 0x4
	NSString *domain;	// 8 = 0x8
	NSString *name;	// 12 = 0xc
	NSString *type;	// 16 = 0x10
	unsigned short port;	// 20 = 0x14
	CFSocketRef ipv4socket;	// 24 = 0x18
	CFSocketRef ipv6socket;	// 28 = 0x1c
	NSNetService *netService;	// 32 = 0x20
	BOOL publishConnection;	// 36 = 0x24
	CFRunLoopRef _runLoop;	// 40 = 0x28
	CFRunLoopSourceRef _source4;	// 44 = 0x2c
	CFRunLoopSourceRef _source6;	// 48 = 0x30
}
@property(assign) id delegate;	// G=0x338f5b8d; S=0x338f5b9d; converted property
@property(retain) NSString *domain;	// G=0x338f5bad; S=0x338f5ce9; converted property
@property(retain) NSString *name;	// G=0x338f5bbd; S=0x338f5cad; converted property
@property(assign) unsigned short port;	// G=0x338f5bdd; S=0x338f5bed; converted property
@property(retain) NSString *type;	// G=0x338f5bcd; S=0x338f5c71; converted property
- (id)init;	// 0x338f5b89
- (void)dealloc;	// 0x338f5d25
// converted property getter: - (id)delegate;	// 0x338f5b8d
// converted property getter: - (id)domain;	// 0x338f5bad
- (void)handleNewConnectionFromAddress:(id)address inputStream:(id)stream outputStream:(id)stream3;	// 0x338f5c0d
// converted property getter: - (id)name;	// 0x338f5bbd
// converted property getter: - (unsigned short)port;	// 0x338f5bdd
- (void)publishConnection:(BOOL)connection;	// 0x338f5bfd
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x338f5b9d
// converted property setter: - (void)setDomain:(id)domain;	// 0x338f5ce9
// converted property setter: - (void)setName:(id)name;	// 0x338f5cad
// converted property setter: - (void)setPort:(unsigned short)port;	// 0x338f5bed
// converted property setter: - (void)setType:(id)type;	// 0x338f5c71
- (BOOL)start:(id *)start;	// 0x338f5f71
- (BOOL)stop;	// 0x338f5ead
// converted property getter: - (id)type;	// 0x338f5bcd
@end
