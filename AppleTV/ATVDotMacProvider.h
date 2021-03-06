/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSDate, NSString, NSMutableArray;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface ATVDotMacProvider : NSObject <BRProvider> {
@private
	NSMutableArray *_data;	// 4 = 0x4
	id<BRControlFactory> _controlFactory;	// 8 = 0x8
	NSDate *_lastUpdateDate;	// 12 = 0xc
	BOOL _updatePending;	// 16 = 0x10
	NSString *_uniqueID;	// 20 = 0x14
	BOOL _chainLoadingDisabled;	// 24 = 0x18
	BOOL _isTemporaryProvider;	// 25 = 0x19
}
@property(assign) BOOL chainLoadingDisabled;	// G=0x338b62d9; S=0x338b62c9; converted property
@property(readonly, retain) NSString *uniqueID;	// G=0x338b62e9; converted property
+ (BOOL)accountWithNameIsPersistent:(id)nameIsPersistent;	// 0x338b85e5
+ (id)providerOfPersistentAccounts;	// 0x338b8695
- (id)initAsTemporaryProvider:(BOOL)provider;	// 0x338b84d5
- (BOOL)_accountIconLoadedForAccount:(id)account updateData:(id)data;	// 0x338b76ad
- (void)_accountToRemove:(id)remove;	// 0x338b88f1
- (id)_accountWithName:(id)name;	// 0x338b6b8d
- (id)_assetWithIdentifier:(id)identifier parentCollection:(id)collection;	// 0x338b6c01
- (BOOL)_assetsLoadedForCollection:(id)collection updateData:(id)data;	// 0x338b6ec1
- (id)_cachedAccountIconForIconPath:(id)iconPath;	// 0x338b6d01
- (void)_cancelDataMonitoringForAccounts;	// 0x338b7dfd
- (id)_collectionWithIdentifier:(id)identifier withParentAccountName:(id)parentAccountName;	// 0x338b6c79
- (id)_data;	// 0x338b62fd
- (BOOL)_handlesObject:(id)object;	// 0x338b62f9
- (BOOL)_imageLoadedForAsset:(id)asset updateData:(id)data;	// 0x338b6d75
- (id)_initForPersistentAccounts;	// 0x338b8029
- (void)_listenerUpdate:(id)update;	// 0x338b7db9
- (BOOL)_mediaLoadedForAccount:(id)account updateData:(id)data;	// 0x338b7755
- (void)_newAccountToAdd:(id)add;	// 0x338b8a8d
- (BOOL)_newAuthenticationForCollection:(id)collection updateData:(id)data;	// 0x338b756d
- (id)_persistentAccounts;	// 0x338b7e75
- (void)_postUpdateNotification:(id)notification;	// 0x338b7d55
- (void)_processChangeToObject:(id)object;	// 0x338b8e2d
- (void)_sendUpdateNotification;	// 0x338b8cf9
- (void)_sendUpdateNotificationAfterDelay;	// 0x338b7d85
- (void)_updateDataCount;	// 0x338b630d
- (id)accessibilityLabel;	// 0x338b8fa5
// converted property getter: - (BOOL)chainLoadingDisabled;	// 0x338b62d9
- (id)controlFactory;	// 0x338b62b9
- (id)dataAtIndex:(long)index;	// 0x338b8375
- (long)dataCount;	// 0x338b83d1
- (void)dealloc;	// 0x338b83f5
- (void)handleDataUpdate:(id)update updateData:(id)data;	// 0x338b8125
- (id)hashForDataAtIndex:(long)index;	// 0x338b8325
- (void)invalidate;	// 0x338b82e5
// converted property setter: - (void)setChainLoadingDisabled:(BOOL)disabled;	// 0x338b62c9
// converted property getter: - (id)uniqueID;	// 0x338b62e9
@end

