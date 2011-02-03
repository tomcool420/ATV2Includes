/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "SBJsonWriter.h"
#import "SBJsonParser.h"
#import "SBJsonBase.h"

@class SBJsonParser, SBJsonWriter;

__attribute__((visibility("hidden")))
@interface SBJSON : SBJsonBase <SBJsonParser, SBJsonWriter> {
@private
	SBJsonParser *jsonParser;	// 16 = 0x10
	SBJsonWriter *jsonWriter;	// 20 = 0x14
}
@property(assign) BOOL humanReadable;	// G=0x339363a0; S=0x33936370; 
@property(assign) unsigned maxDepth;	// G=0x33936424; S=0x339363d0; converted property
@property(assign) BOOL sortKeys;	// G=0x33936340; S=0x33936310; 
- (id)init;	// 0x339368a4
- (void)dealloc;	// 0x33936828
- (id)fragmentWithString:(id)string error:(id *)error;	// 0x3393647c
// declared property getter: - (BOOL)humanReadable;	// 0x339363a0
// converted property getter: - (unsigned)maxDepth;	// 0x33936424
- (id)objectWithString:(id)string;	// 0x339365a0
- (id)objectWithString:(id)string allowScalar:(BOOL)scalar error:(id *)error;	// 0x339364a8
- (id)objectWithString:(id)string error:(id *)error;	// 0x33936450
// declared property setter: - (void)setHumanReadable:(BOOL)readable;	// 0x33936370
// converted property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x339363d0
// declared property setter: - (void)setSortKeys:(BOOL)keys;	// 0x33936310
// declared property getter: - (BOOL)sortKeys;	// 0x33936340
- (id)stringWithFragment:(id)fragment error:(id *)error;	// 0x33936668
- (id)stringWithObject:(id)object;	// 0x3393678c
- (id)stringWithObject:(id)object allowScalar:(BOOL)scalar error:(id *)error;	// 0x33936694
- (id)stringWithObject:(id)object error:(id *)error;	// 0x3393663c
@end

