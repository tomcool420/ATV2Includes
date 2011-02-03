/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"

@class ATVSedonaCatalogItem;

__attribute__((visibility("hidden")))
@interface ATVSedonaQueueListItemProvider : NSObject <BRProvider> {
@private
	ATVSedonaCatalogItem *_catalogItem;	// 4 = 0x4
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x3391cf11
- (id)init;	// 0x3391cef9
- (id)initWithCatalogItem:(id)catalogItem;	// 0x3391cf8d
- (id)controlFactory;	// 0x3391ce91
- (id)dataAtIndex:(long)index;	// 0x3391ce6d
- (long)dataCount;	// 0x3391ce7d
- (void)dealloc;	// 0x3391cf45
- (id)hashForDataAtIndex:(long)index;	// 0x3391ceb1
@end

