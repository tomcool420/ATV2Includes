/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRSelectionHandler.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFlickrSaveRemoveSearchSelectionHandler : NSObject <BRSelectionHandler> {
@private
	NSString *_searchTerm;	// 4 = 0x4
}
+ (id)selectionHandlerWithSearchTerm:(id)searchTerm;	// 0x338bcb81
- (id)initWithSearchTerm:(id)searchTerm;	// 0x338bcb59
- (void)dealloc;	// 0x338bcf65
- (BOOL)handleSelectionForControl:(id)control;	// 0x338bdf39
@end

