/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFlickrProvider.h"

@class ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVFlickrProviderForAccount : ATVFlickrProvider {
@private
	ATVInternetPhotosAccount *_account;	// 24 = 0x18
}
+ (id)providerForAccount:(id)account;	// 0x338c1909
- (id)initWithAccount:(id)account;	// 0x338c3849
- (id)_data;	// 0x338c17e5
- (BOOL)_handlesObject:(id)object;	// 0x338c16ed
- (void)dealloc;	// 0x338c185d
- (id)hashForDataAtIndex:(long)index;	// 0x338c1805
@end
