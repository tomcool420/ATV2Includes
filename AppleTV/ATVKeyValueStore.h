/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSString;

@interface ATVKeyValueStore : NSObject {
@private
	sqlite3 *_db;	// 4 = 0x4
	dispatch_queue_s *_dbQueue;	// 8 = 0x8
	NSString *_domain;	// 12 = 0xc
}
+ (id)defaultStore;	// 0x3392482d
- (void)_dbDataValuesForKeys:(id)keys option:(int)option resolver:(id)resolver handler:(id)handler;	// 0x33926719
- (void)_dbDeleteCleanRowsNotUpdatedSince:(id)since completionHandler:(id)handler;	// 0x33925be1
- (void)_dbDropAllWithCompletionHandler:(id)completionHandler;	// 0x33925afd
- (void)_dbSetDataValues:(id)values versions:(id)versions forKeys:(id)keys dirtyFlag:(BOOL)flag;	// 0x33926465
- (void)_dbVersionsForKeys:(id)keys handler:(id)handler;	// 0x33926215
- (void)_getItemsFromKVSWithKeys:(id)keys resultValues:(id)values sinceVersions:(id)versions handler:(id)handler;	// 0x33925ced
- (id)_initWithDomain:(id)domain withCacheFilename:(id)cacheFilename;	// 0x33925961
- (void)_internalPutItemsToKVS:(id)kvs resolvedKeys:(id)keys resolver:(id)resolver completionHandler:(id)handler;	// 0x3392423d
- (void)_objectsForKeys:(id)keys option:(int)option resolver:(id)resolver handler:(id)handler;	// 0x3392535d
- (void)_putItemsToKVS:(id)kvs resolver:(id)resolver completionHandler:(id)handler;	// 0x339244ad
- (void)_setObjects:(id)objects forKeys:(id)keys resolver:(id)resolver handler:(id)handler;	// 0x33926091
- (void)dealloc;	// 0x339247c1
- (id)objectForKey:(id)key;	// 0x3392517d
- (void)objectForKey:(id)key option:(int)option completionHandler:(id)handler;	// 0x33924661
- (void)objectForKey:(id)key option:(int)option withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x33924575
- (void)objectsForKeys:(id)keys option:(int)option completionHandler:(id)handler;	// 0x33924635
- (void)objectsForKeys:(id)keys option:(int)option withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x33924769
- (void)purgeCacheDataNotUpdatedSince:(id)since completionHandler:(id)handler;	// 0x33925449
- (void)resetForRetailWithCompletionHandler:(id)completionHandler;	// 0x339253ed
- (void)setObject:(id)object forKey:(id)key;	// 0x33924715
- (void)setObject:(id)object forKey:(id)key withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x3392468d
- (void)setObjects:(id)objects forKeys:(id)keys;	// 0x339246ed
- (void)setObjects:(id)objects forKeys:(id)keys withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x33924795
@end

