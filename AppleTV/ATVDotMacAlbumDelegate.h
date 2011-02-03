/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDotMacParserDelegate.h"

@class NSDate, NSString, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVDotMacAlbumDelegate : ATVDotMacParserDelegate {
@private
	NSString *_keyImageID;	// 24 = 0x18
	NSArray *_imageOrder;	// 28 = 0x1c
	NSDate *_modDate;	// 32 = 0x20
	NSDictionary *_startSelectors;	// 36 = 0x24
	NSDictionary *_endSelectors;	// 40 = 0x28
}
@property(readonly, retain) NSDictionary *endSelectors;	// G=0x338ad605; converted property
@property(readonly, retain) NSDate *modDate;	// G=0x338ad615; converted property
@property(readonly, retain) NSDictionary *startSelectors;	// G=0x338ad5f5; converted property
- (id)init;	// 0x338adc39
- (void)__atv_end_dotmac_keyImagePath;	// 0x338adb75
- (void)__atv_end_dotmac_largeImagePath;	// 0x338ada49
- (void)__atv_end_dotmac_moviePath;	// 0x338ad8f9
- (void)__atv_end_dotmac_title;	// 0x338ada81
- (void)__atv_end_dotmac_userHidden;	// 0x338ad9a1
- (void)__atv_end_dotmac_useritemguid;	// 0x338ad969
- (void)__atv_end_dotmac_userorder;	// 0x338adb29
- (void)__atv_end_dotmac_videoDuration;	// 0x338ad8c1
- (void)__atv_end_dotmac_viewIdentifier;	// 0x338adaf1
- (void)__atv_end_dotmac_webImagePath;	// 0x338ada11
- (void)__atv_end_iphoto_maxWebDimensions;	// 0x338ad9d9
- (void)__atv_end_iphoto_photoDate;	// 0x338ad931
- (void)__atv_end_title;	// 0x338adab9
- (void)__atv_end_updated;	// 0x338adf81
- (id)albumID;	// 0x338ad661
- (id)albumName;	// 0x338ad625
- (void)dealloc;	// 0x338adba9
// converted property getter: - (id)endSelectors;	// 0x338ad605
- (int)imageCount;	// 0x338ad69d
- (id)itemInfos;	// 0x338ad77d
- (id)keyImageInfo;	// 0x338ad6c1
// converted property getter: - (id)modDate;	// 0x338ad615
- (id)sortedItemInfos;	// 0x338ad769
// converted property getter: - (id)startSelectors;	// 0x338ad5f5
@end

