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
@interface ATVFlickrProvider : NSObject <BRProvider> {
@private
	NSMutableArray *_persistentAccounts;	// 4 = 0x4
	id<BRControlFactory> _controlFactory;	// 8 = 0x8
	NSDate *_lastUpdateDate;	// 12 = 0xc
	BOOL _updatePending;	// 16 = 0x10
	NSString *_uniqueID;	// 20 = 0x14
}
@property(readonly, retain) NSString *uniqueID;	// G=0x338c122d; converted property
+ (id)providerOfPersistentAccounts;	// 0x338c3601
- (id)init;	// 0x338c3539
- (BOOL)_accountIconLoadedForAccount:(id)account updateData:(id)data;	// 0x338c2811
- (void)_accountToRemove:(id)remove;	// 0x338c3955
- (id)_accountWithName:(id)name;	// 0x338c1f55
- (id)_assetWithIdentifier:(id)identifier parentCollection:(id)collection;	// 0x338c1fc9
- (BOOL)_assetsLoadedForCollection:(id)collection updateData:(id)data;	// 0x338c2269
- (id)_cachedAccountIconForIconPath:(id)iconPath;	// 0x338c20b9
- (id)_collectionWithIdentifier:(id)identifier withParentAccount:(id)parentAccount;	// 0x338c2041
- (BOOL)_contactsLoadedForAccount:(id)account updateData:(id)data;	// 0x338c26dd
- (id)_data;	// 0x338c1245
- (BOOL)_handlesObject:(id)object;	// 0x338c1241
- (BOOL)_imageLoadedForAsset:(id)asset updateData:(id)data;	// 0x338c211d
- (id)_initForPersistentAccounts;	// 0x338c3059
- (void)_listenerUpdate:(id)update;	// 0x338c2dd5
- (id)_loadAccountsFromPersistentAccounts;	// 0x338c2e19
- (BOOL)_mediaLoadedForAccount:(id)account updateData:(id)data;	// 0x338c28b9
- (void)_newAccountToAdd:(id)add;	// 0x338c3ab1
- (id)_persistentAccounts;	// 0x338c300d
- (void)_postUpdateNotification:(id)notification;	// 0x338c2d71
- (void)_processChangeToObject:(id)object;	// 0x338c3e85
- (void)_sendUpdateNotification;	// 0x338c3d55
- (void)_sendUpdateNotificationAfterDelay;	// 0x338c2da1
- (id)accessibilityLabel;	// 0x338c123d
- (BOOL)accountIsPersistent:(id)persistent;	// 0x338c3311
- (id)controlFactory;	// 0x338c121d
- (id)dataAtIndex:(long)index;	// 0x338c33e9
- (long)dataCount;	// 0x338c3445
- (void)dealloc;	// 0x338c3469
- (void)handleDataUpdate:(id)update updateData:(id)data;	// 0x338c3155
- (id)hashForDataAtIndex:(long)index;	// 0x338c3399
// converted property getter: - (id)uniqueID;	// 0x338c122d
@end
