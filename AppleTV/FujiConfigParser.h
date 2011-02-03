/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FujiConfigParser : NSObject {
@private
	XML_ParserStructRef _parser;	// 4 = 0x4
	BOOL _deviceSupported;	// 8 = 0x8
	BOOL _login;	// 9 = 0x9
	NSString *_ncts;	// 12 = 0xc
	NSString *_uibootURL;	// 16 = 0x10
	NSString *_genericFeedURL;	// 20 = 0x14
	NSString *_country;	// 24 = 0x18
	BOOL _useTestEnvironment;	// 28 = 0x1c
	NSString *_testNCCPDataURL;	// 32 = 0x20
	NSString *_testNCCPIdentityURL;	// 36 = 0x24
	NSString *_testNCCPLoggingURL;	// 40 = 0x28
	BOOL _supportDD5_1;	// 44 = 0x2c
	int _parserDepth;	// 48 = 0x30
	int _tagListDepth;	// 52 = 0x34
	char **_currentTag;	// 56 = 0x38
}
@property(readonly, assign, getter=isDeviceSupported) BOOL deviceSupported;	// G=0x33945d50; converted property
@property(readonly, assign) BOOL supportDD5_1;	// G=0x33945d8c; converted property
@property(readonly, assign) BOOL useTestEnvironment;	// G=0x33945d78; converted property
- (id)init;	// 0x33945da0
- (void)charData:(const char *)data withLength:(int)length;	// 0x339469bc
- (void)dealloc;	// 0x339466cc
- (void)dumpTags;	// 0x33945d4c
- (void)endElement:(const char *)element;	// 0x339462b0
- (id)getCountry;	// 0x33946080
- (id)getGenericFeedURL;	// 0x339460f0
- (id)getNCTS;	// 0x339461d0
- (id)getTestNCCPDataURL;	// 0x33946010
- (id)getTestNCCPIdentityURL;	// 0x33945fa0
- (id)getTestNCCPLoggingURL;	// 0x33945f30
- (id)getUIBootURL;	// 0x33946160
// converted property getter: - (BOOL)isDeviceSupported;	// 0x33945d50
- (BOOL)isLoggedIn;	// 0x33945d64
- (bool)parse:(id)parse;	// 0x3394694c
- (void)startElement:(const char *)element withAttrs:(const char **)attrs;	// 0x33946340
// converted property getter: - (BOOL)supportDD5_1;	// 0x33945d8c
// converted property getter: - (BOOL)useTestEnvironment;	// 0x33945d78
@end

