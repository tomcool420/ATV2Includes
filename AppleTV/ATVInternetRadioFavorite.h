/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFavorite.h"
#import "AppleTV-Structs.h"

@class NSString;

@interface ATVInternetRadioFavorite : ATVFavorite {
@private
	NSString *_stationID;	// 16 = 0x10
	NSString *_collectionTitle;	// 20 = 0x14
}
@property(retain) id category;	// G=0x33904859; S=0x33904ac9; converted property
@property(retain) NSString *stationID;	// G=0x3390486d; S=0x33904999; converted property
+ (void)_stationFoundInCategory:(id)category;	// 0x33904da1
+ (id)favoriteFromAsset:(id)asset;	// 0x33904d29
+ (id)favoriteFromMediaItem:(ATVMediaItemRef)mediaItem;	// 0x33904ce5
+ (void)initialize;	// 0x33904f79
- (id)initWithDictionary:(id)dictionary;	// 0x33904c45
- (id)_initWithMediaItem:(ATVMediaItemRef)mediaItem;	// 0x33904fe9
- (void)_setItemIdForTitle:(id)title genre:(id)genre;	// 0x33904951
// converted property getter: - (id)category;	// 0x33904859
- (void)dealloc;	// 0x33904be9
- (id)description;	// 0x33904b01
- (void)encodeWithDictionary:(id)dictionary;	// 0x33904b75
- (BOOL)isPlayingOrPaused;	// 0x339050d5
- (id)mediaAsset;	// 0x339049d1
- (ATVMediaItemRef)mediaItemRef;	// 0x33904869
// converted property setter: - (void)setCategory:(id)category;	// 0x33904ac9
// converted property setter: - (void)setStationID:(id)anId;	// 0x33904999
// converted property getter: - (id)stationID;	// 0x3390486d
@end

