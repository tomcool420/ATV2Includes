/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BROptionDialog.h> // Unknown library

@class ATVStoreFavorite;

__attribute__((visibility("hidden")))
@interface ATVFavoriteUnavailableController : BROptionDialog {
@private
	ATVStoreFavorite *_favorite;	// 124 = 0x7c
}
- (id)initWithStoreFavorite:(id)storeFavorite;	// 0x338aaf55
- (void)_optionSelected:(id)selected;	// 0x338aae65
- (id)_textForFavoriteType:(int)favoriteType;	// 0x338aaf19
- (void)dealloc;	// 0x338aaed1
@end

