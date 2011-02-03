/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVSWUpdateRecord : NSObject {
@private
	NSMutableDictionary *_currentVersions;	// 4 = 0x4
	NSMutableDictionary *_newVersions;	// 8 = 0x8
	NSMutableArray *_payloadURLs;	// 12 = 0xc
	NSMutableArray *_licenseURLs;	// 16 = 0x10
	NSMutableArray *_payloadLocalPaths;	// 20 = 0x14
	unsigned long long _totalDownloadSize;	// 24 = 0x18
	BOOL _autoUpdate;	// 32 = 0x20
	BOOL _forceFullUpdate;	// 33 = 0x21
}
@property(readonly, assign) BOOL autoUpdate;	// G=0x338ffe59; converted property
@property(assign) BOOL forceFullUpdate;	// G=0x338ffe39; S=0x338ffe49; converted property
@property(readonly, retain) NSMutableArray *licenseURLs;	// G=0x339002f1; converted property
@property(readonly, retain) NSMutableArray *payloadLocalPaths;	// G=0x338ffe79; converted property
@property(readonly, retain) NSMutableArray *payloadURLs;	// G=0x3390031d; converted property
@property(readonly, assign) unsigned long long totalDownloadSize;	// G=0x338ffe69; converted property
- (id)init;	// 0x339004f9
- (void)_addCurrentVersion:(id)version forType:(id)type;	// 0x339002b9
- (void)_addDownloadSize:(unsigned long long)size;	// 0x33900cc1
- (void)_addLicenseURL:(id)url;	// 0x33900c3d
- (void)_addNewVersion:(id)version forType:(id)type;	// 0x33900281
- (void)_addPayloadLocalPath:(id)path;	// 0x33900c69
- (void)_addPayloadURL:(id)url;	// 0x33900c95
- (void)_collectCurrentVersions;	// 0x339001dd
- (void)_parseVersionData:(id)data;	// 0x338ffe89
- (void)addPayloadLocalPath:(id)path;	// 0x33900ced
// converted property getter: - (BOOL)autoUpdate;	// 0x338ffe59
- (id)currentVersionOfType:(id)type;	// 0x33900369
- (void)dealloc;	// 0x33900469
- (id)description;	// 0x339003d1
// converted property getter: - (BOOL)forceFullUpdate;	// 0x338ffe39
// converted property getter: - (id)licenseURLs;	// 0x339002f1
- (id)newVersionOfType:(id)type;	// 0x33900349
- (int)numberOfUpdatesAvailable;	// 0x339003b1
// converted property getter: - (id)payloadLocalPaths;	// 0x338ffe79
// converted property getter: - (id)payloadURLs;	// 0x3390031d
- (void)setAutoTriggeredUpdate:(BOOL)update;	// 0x338ffe29
// converted property setter: - (void)setForceFullUpdate:(BOOL)update;	// 0x338ffe49
- (void)setVersionData:(id)data;	// 0x3390043d
// converted property getter: - (unsigned long long)totalDownloadSize;	// 0x338ffe69
- (BOOL)updateAvailableOfType:(id)type;	// 0x33900389
@end
