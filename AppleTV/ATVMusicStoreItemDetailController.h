/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMusicStoreCatalogItemController.h"
#import "AppleTV-Structs.h"

@class BRDetailedMediaControl, NSTimer, BRScrollControl, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreItemDetailController : ATVMusicStoreCatalogItemController {
@private
	NSDictionary *_originalStoreOffers;	// 64 = 0x40
	BRScrollControl *_scrollControl;	// 68 = 0x44
	BRDetailedMediaControl *_detailedControl;	// 72 = 0x48
	ATVMediaQueryRef _rentalQuery;	// 76 = 0x4c
	ATVMediaItemRef _rentalItem;	// 80 = 0x50
	NSTimer *_expiryInfoTimer;	// 84 = 0x54
}
@property(readonly, retain) BRDetailedMediaControl *detailedControl;	// G=0x338d76c1; converted property
- (id)init;	// 0x338d7f45
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x338d7e2d
- (void)_checkIfAlreadyRented;	// 0x338d8869
- (id)_displayableItemAdjacentTo:(id)to forward:(BOOL)forward;	// 0x338d8045
- (id)_displayableItemAfter:(id)after;	// 0x338d78d5
- (id)_displayableItemBefore:(id)before;	// 0x338d78bd
- (void)_expiryInfoTimerFired:(id)fired;	// 0x338d77a9
- (id)_filterPreferredItemsFromDictionary:(id)dictionary;	// 0x338d84cd
- (void)_layoutControls;	// 0x338d8675
- (void)_nextItemSelected;	// 0x338d7ca5
- (void)_nextItemSelected:(id)selected;	// 0x338d7901
- (void)_previousItemSelected;	// 0x338d7c65
- (void)_previousItemSelected:(id)selected;	// 0x338d78ed
- (void)_relatedContentControlCreated:(id)created;	// 0x338d81fd
- (void)_rentalQueryComplete;	// 0x338d88e9
- (void)_setCopyrightText;	// 0x338d7a2d
- (void)_setupDetailedControl;	// 0x338d7a79
- (void)_startExpiryInfoTimer;	// 0x338d7829
- (void)_stopExpiryInfoTimer;	// 0x338d77fd
- (void)_updateExpiryInfo;	// 0x338d8a8d
- (void)_updateFocus;	// 0x338d7915
- (void)controlWasActivated;	// 0x338d7dd1
- (void)controlWasDeactivated;	// 0x338d7d95
- (void)dealloc;	// 0x338d7f85
// converted property getter: - (id)detailedControl;	// 0x338d76c1
- (void)relatedContentLoaded:(id)loaded;	// 0x338d79bd
- (void)setItemDictionary:(id)dictionary;	// 0x338d7ce5
@end

