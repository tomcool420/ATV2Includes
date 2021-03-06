/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRRSSMediaAsset.h> // Unknown library

@class NSDictionary;

@interface ATVMusicStorePodcastAsset : BRRSSMediaAsset {
@private
	NSDictionary *_feedInfo;	// 16 = 0x10
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x338e0db9; S=0x338e0ddd; converted property
@property(retain) NSDictionary *feedInfo;	// G=0x338e0d19; S=0x338e14d1; converted property
- (id)initWithFeedInfo:(id)feedInfo;	// 0x338e1551
- (id)_podcastID;	// 0x338e0d69
- (id)_showInfo;	// 0x338e0d39
- (id)artist;	// 0x338e0f9d
- (id)assetID;	// 0x338e1495
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x338e0db9
- (id)cast;	// 0x338e1355
- (id)copyright;	// 0x338e0f21
- (id)coverArtID;	// 0x338e11c9
- (id)dateAcquired;	// 0x338e1171
- (id)datePublished;	// 0x338e1185
- (id)datePublishedString;	// 0x338e0fd5
- (void)dealloc;	// 0x338e1509
- (id)description;	// 0x338e0ee9
- (id)directors;	// 0x338e1335
- (long)duration;	// 0x338e13c5
// converted property getter: - (id)feedInfo;	// 0x338e0d19
- (id)genres;	// 0x338e1069
- (BOOL)hasCoverArt;	// 0x338e1229
- (BOOL)hasVideoContent;	// 0x338e0ff9
- (void)incrementPerformanceCount;	// 0x338e0e2d
- (BOOL)isExplicit;	// 0x338e0e89
- (id)mediaDescription;	// 0x338e1435
- (id)mediaSummary;	// 0x338e0f51
- (id)mediaType;	// 0x338e1151
- (id)mediaURL;	// 0x338e12b9
- (long)performanceCount;	// 0x338e0e65
- (id)previewURL;	// 0x338e1251
- (id)primaryCollectionTitle;	// 0x338e0f65
- (id)primaryGenre;	// 0x338e1089
- (id)primaryGenreAsString;	// 0x338e1121
- (id)producers;	// 0x338e1315
- (id)publisher;	// 0x338e0d35
- (id)rating;	// 0x338e0d31
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x338e0ddd
// converted property setter: - (void)setFeedInfo:(id)info;	// 0x338e14d1
- (void)setHasBeenPlayed:(BOOL)played;	// 0x338e0e05
- (id)thumbnailArtID;	// 0x338e11b5
- (id)thumbnailURL;	// 0x338e0f0d
- (id)title;	// 0x338e1465
- (float)userStarRating;	// 0x338e0d29
@end

