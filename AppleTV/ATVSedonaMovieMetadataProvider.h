/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMusicStoreBaseMetadataProvider.h"

@class ATVSedonaCatalogItem;

__attribute__((visibility("hidden")))
@interface ATVSedonaMovieMetadataProvider : ATVMusicStoreBaseMetadataProvider {
@private
	ATVSedonaCatalogItem *_sedonaItem;	// 12 = 0xc
}
+ (void)initialize;	// 0x3391b8d5
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x3391b8a1
- (id)init;	// 0x3391b889
- (id)initWithCatalogItem:(id)catalogItem;	// 0x3391bc39
- (void)_populateActors:(id)actors;	// 0x3391b6cd
- (void)_populateAudio:(id)audio;	// 0x3391b515
- (void)_populateCategories:(id)categories;	// 0x3391c08d
- (void)_populateDirector:(id)director;	// 0x3391b625
- (void)_populateMetadataDetails:(id)details;	// 0x3391b759
- (void)_populateMovieDetails:(id)details;	// 0x3391bc9d
- (void)_populateSubtitles:(id)subtitles;	// 0x3391b59d
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x3391b851
- (void)dealloc;	// 0x3391bbf1
- (void)populateMetadataForControl:(id)control;	// 0x3391b7d9
@end

