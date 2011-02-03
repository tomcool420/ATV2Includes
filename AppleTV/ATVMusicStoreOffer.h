/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOffer : NSObject {
@private
	NSString *_storeOfferType;	// 4 = 0x4
	NSDictionary *_storeOfferInfo;	// 8 = 0x8
}
@property(readonly, retain) NSString *storeOfferType;	// G=0x338deddd; converted property
+ (id)_filterStoreOfferList:(id)list;	// 0x338df661
+ (BOOL)anyOfferHasDigitalExtras:(id)extras;	// 0x338df511
+ (id)offerListFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x338df769
+ (id)priceRangeFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x338df865
+ (id)primaryOfferFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x338df5ad
+ (id)storeOfferFromDictionary:(id)dictionary forType:(id)type;	// 0x338df569
- (id)initWithStoreOfferDictionary:(id)storeOfferDictionary forType:(id)type;	// 0x338df445
- (id)actionDisplayName;	// 0x338dee61
- (id)dateAvailable;	// 0x338df0e9
- (void)dealloc;	// 0x338df3e9
- (id)downloadURL;	// 0x338df07d
- (long)duration;	// 0x338df319
- (id)fileSize;	// 0x338df2b1
- (BOOL)hasDateAvailable;	// 0x338df115
- (BOOL)hasDigitalExtras;	// 0x338dee8d
- (BOOL)hasDownload;	// 0x338df0a9
- (BOOL)hasPreview;	// 0x338df03d
- (BOOL)hasPurchase;	// 0x338df245
- (BOOL)hasRental;	// 0x338df1ad
- (BOOL)isClosedCaptioned;	// 0x338defc9
- (BOOL)isDolbyDigital;	// 0x338deed5
- (BOOL)isHD;	// 0x338def1d
- (BOOL)isWideScreen;	// 0x338def81
- (id)preActionWarning;	// 0x338dee35
- (long)previewDuration;	// 0x338df2dd
- (id)previewURL;	// 0x338df011
- (id)price;	// 0x338df285
- (id)purchaseParams;	// 0x338df219
- (id)purchasePrice;	// 0x338df1ed
- (id)rentalParams;	// 0x338df181
- (id)rentalPrice;	// 0x338df155
// converted property getter: - (id)storeOfferType;	// 0x338deddd
- (BOOL)usesStoreDrivenFlow;	// 0x338deded
@end
