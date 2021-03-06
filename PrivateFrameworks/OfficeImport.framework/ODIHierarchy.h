/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "ODIHierarchy.h"

@class NSMutableDictionary, ODIState;

__attribute__((visibility("hidden")))
@interface ODIHierarchy : XXUnknownSuperclass {
@private
	int mType;
	int mMaxMappableTreeDepth;
	ODIState* mState;
	NSMutableDictionary* mNodeInfoMap;
}
+(BOOL)mapIdentifier:(id)identifier state:(id)state;
@end

@interface ODIHierarchy (Private)
-(id)initWithType:(int)type state:(id)state;
-(void)dealloc;
-(id)infoForNode:(id)node;
-(void)createInfoForNode:(id)node depth:(int)depth;
-(ODIHRangeVector*)mapRangesForNode:(id)node;
-(void)mapLogicalBoundsWithXRanges:(const ODIHRangeVector*)xranges;
-(void)setAbsolutePositionOfNode:(id)node parentRow:(int)row parentXOffset:(float)offset;
-(CGRect)boundsOfNode:(id)node;
-(void)mapNode:(id)node;
-(void)map;
@end

