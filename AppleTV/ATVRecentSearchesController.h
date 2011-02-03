/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuListItemProvider.h"
#import <BRMediaMenuController.h> // Unknown library

@class ATVSearchAgent, NSArray;

__attribute__((visibility("hidden")))
@interface ATVRecentSearchesController : BRMediaMenuController <BRMenuListItemProvider> {
@private
	NSArray *_recentSearches;	// 132 = 0x84
	ATVSearchAgent *_searchAgent;	// 136 = 0x88
}
- (id)initWithSearchAgent:(id)searchAgent;	// 0x338f849d
- (void)_populateRecentSearchesList;	// 0x338f8539
- (void)dealloc;	// 0x338f8441
- (float)heightForRow:(long)row;	// 0x338f8279
- (long)itemCount;	// 0x338f8311
- (id)itemForRow:(long)row;	// 0x338f8331
- (void)itemSelected:(long)selected;	// 0x338f837d
- (id)previewControlForItem:(long)item;	// 0x338f8275
- (BOOL)rowSelectable:(long)selectable;	// 0x338f8271
- (id)titleForRow:(long)row;	// 0x338f82c5
@end

