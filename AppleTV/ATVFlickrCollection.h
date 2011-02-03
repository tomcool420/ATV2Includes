/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVInternetPhotosCollection.h"

@class NSString;

@interface ATVFlickrCollection : ATVInternetPhotosCollection {
@private
	NSString *_keyImageFlickrIdentifier;	// 64 = 0x40
}
@property(retain) NSString *keyImageFlickrIdentifier;	// G=0x338baca5; S=0x338babe1; converted property
- (id)initWithCollectionInfo:(id)collectionInfo;	// 0x338baae5
- (id)archivableCollectionInfo;	// 0x338ba971
- (id)collectionType;	// 0x338ba911
- (void)dealloc;	// 0x338baa9d
// converted property getter: - (id)keyImageFlickrIdentifier;	// 0x338baca5
- (id)mediaTypes;	// 0x338ba931
// converted property setter: - (void)setKeyImageFlickrIdentifier:(id)identifier;	// 0x338babe1
@end
