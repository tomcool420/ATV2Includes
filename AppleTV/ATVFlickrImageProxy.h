/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRImageProxy.h"

@class BRPhotoMediaAsset;

__attribute__((visibility("hidden")))
@interface ATVFlickrImageProxy : NSObject <BRImageProxy> {
@private
	BRPhotoMediaAsset *_asset;	// 4 = 0x4
}
+ (id)imageProxyForAsset:(id)asset;	// 0x338bca6d
- (id)initWithAsset:(id)asset;	// 0x338bcaa1
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x338bc831
- (void)dealloc;	// 0x338bca25
- (id)defaultImageForImageSize:(int)imageSize;	// 0x338bcaf1
- (id)imageForImageSize:(int)imageSize;	// 0x338bc8b1
- (id)imageIDForImageSize:(int)imageSize;	// 0x338bc9bd
- (id)object;	// 0x338bc81d
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x338bc82d
@end

