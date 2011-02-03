/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRController.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSTimer, BRScrollControl, BRGridView, BRTextControl, BRCursorControl, NSMutableDictionary, BRWaitPromptControl, NSMutableArray;

@interface ATVFavoritesController : BRController {
@private
	int _itemType;	// 56 = 0x38
	NSMutableArray *_favorites;	// 60 = 0x3c
	BRScrollControl *_scroller;	// 64 = 0x40
	BRGridView *_grid;	// 68 = 0x44
	BRCursorControl *_cursor;	// 72 = 0x48
	BRTextControl *_rearrangeInstructions;	// 76 = 0x4c
	BOOL _hasBeenActivated;	// 80 = 0x50
	NSMutableDictionary *_redDotMap;	// 84 = 0x54
	NSTimer *_spinnerTimer;	// 88 = 0x58
	BRWaitPromptControl *_spinner;	// 92 = 0x5c
	BOOL _showsSpinner;	// 96 = 0x60
	BOOL _favoriteOrderChanged;	// 97 = 0x61
}
- (id)initWithItemType:(int)itemType error:(id *)error;	// 0x338a8bc5
- (void)_fadeOutAnimationCompleted:(id)completed;	// 0x338a7ca1
- (void)_favoriteChanged:(id)changed;	// 0x338a7e39
- (void)_favoriteInsertedNotification:(id)notification;	// 0x338a8019
- (void)_favoriteRemovedNotification:(id)notification;	// 0x338a7f8d
- (void)_favoritesShowDataChangedNotification:(id)notification;	// 0x338a7d45
- (void)_fetchEpisodesForCurrentSeason:(id)currentSeason;	// 0x338a7941
- (void)_fetchFavorites:(id)favorites;	// 0x338a7a31
- (void)_fetchShowInfo:(id)info;	// 0x338a9835
- (void)_initiateNetworkFetches;	// 0x338a8409
- (ATVMediaTypeRef)_mediaType;	// 0x338a77d1
- (id)_noFavoritesController;	// 0x338a7cdd
- (void)_rebuildRedDotMapWithFavoritesIfNecessary:(id)favoritesIfNecessary;	// 0x338a7a95
- (int)_redDotCountForStoreFavorite:(id)storeFavorite;	// 0x338a99b5
- (void)_reload;	// 0x338a80e9
- (void)_removeRedDotCountForStoreFavorite:(id)storeFavorite;	// 0x338a9a0d
- (void)_resort;	// 0x338a9019
- (void)_setRedDotCount:(int)count forStoreFavorite:(id)storeFavorite;	// 0x338a7b65
- (BOOL)_setupAfterFavoritesFetch;	// 0x338a8295
- (BOOL)_shouldShowRedDots;	// 0x338a77b1
- (void)_showDataChangedNotification:(id)notification;	// 0x338a7d71
- (void)_showGrid;	// 0x338a9241
- (void)_showSpinner:(BOOL)spinner;	// 0x338a7bd5
- (id)_sortedFavorites;	// 0x338a8149
- (void)_spinnerTimerFired:(id)fired;	// 0x338a916d
- (id)accessibilityScreenContent;	// 0x338a7845
- (void)controlWasActivated;	// 0x338a8a49
- (void)controlWasDeactivated;	// 0x338a89c5
- (void)dealloc;	// 0x338a8ae9
- (BOOL)grid:(id)grid canMoveItemAtIndex:(long)index;	// 0x338a77ad
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x338a8c71
- (long)grid:(id)grid indexForItemID:(id)itemID;	// 0x338a77a5
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x338a86d1
- (id)grid:(id)grid itemIDAtIndex:(long)index;	// 0x338a77a1
- (void)grid:(id)grid moveItemAtIndex:(long)index toIndex:(long)index3;	// 0x338a85d1
- (long)grid:(id)grid targetIndexForMoveFromItemAtIndex:(long)index toProposedIndex:(long)proposedIndex;	// 0x338a85a9
- (BOOL)isNetworkDependent;	// 0x338a7785
- (void)layoutSubcontrols;	// 0x338a8c81
- (long)numberOfColumnsInGrid:(id)grid;	// 0x338a7789
- (long)numberOfItemsInGrid:(id)grid;	// 0x338a8959
- (void)wasPushed;	// 0x338a8979
@end

