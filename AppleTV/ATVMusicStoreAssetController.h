/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMusicStoreItemDetailController.h"

@protocol BRMediaAsset;

@interface ATVMusicStoreAssetController : ATVMusicStoreItemDetailController {
@private
	id<BRMediaAsset> _asset;	// 88 = 0x58
}
- (id)initWithAsset:(id)asset;	// 0x338c8cb5
- (id)_actionProviders;	// 0x338c8f0d
- (void)_assetDeleted:(id)deleted;	// 0x338c8865
- (BOOL)_assetIsExpired:(id)expired;	// 0x338c88c1
- (void)_assetPlayable:(id)playable;	// 0x338c88f1
- (void)_setCopyrightText;	// 0x338c8a81
- (void)_setImageProxy;	// 0x338c89b5
- (void)_setMetadataControl;	// 0x338c892d
- (void)_setupDetailedControl;	// 0x338c8ac5
- (id)_storeID;	// 0x338c89f9
- (void)_verifyAsset;	// 0x338c8765
- (id)asset;	// 0x338c8755
- (void)controlWasActivated;	// 0x338c8c25
- (void)dealloc;	// 0x338c8bb5
- (void)fetchRelatedContent;	// 0x338c8b2d
@end
