/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRSelectionHandler.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVCatalogHandler : NSObject <BRSelectionHandler> {
@private
	NSDictionary *_item;	// 4 = 0x4
}
- (void)_confirmAction:(int)action withObject:(id)object;	// 0x338cc919
- (void)_confirmActionResponse:(id)response;	// 0x338c9da9
- (void)_downloadItem:(id)item;	// 0x338cc77d
- (BOOL)_handleFavoriteListItemSelection:(id)selection listItem:(id)item;	// 0x338cfc4d
- (BOOL)_handleStoreOfferItemSelection:(id)selection;	// 0x338ca1c5
- (void)_parentalControlPasscodeSuccessful:(id)successful;	// 0x338c9c95
- (void)_playOrPauseAsset:(id)asset;	// 0x338ca5f5
- (void)_podcastItemSelected:(id)selected;	// 0x338ca4e5
- (void)_previewItemSelected:(id)selected;	// 0x338ca575
- (void)_transactionConfirmedForItem:(id)item;	// 0x338c9e21
- (void)_warningForAction:(int)action withObject:(id)object;	// 0x338ce5f1
- (void)_warningForActionResponse:(id)actionResponse;	// 0x338ca105
- (void)dealloc;	// 0x338cfbdd
- (BOOL)handleSelectionForControl:(id)control;	// 0x338ca66d
@end

