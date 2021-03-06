/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import "IMPresence.h"
#import "IMCore-Structs.h"

@class IMServiceImpl, NSString, IMPerson, NSSet;

@interface IMBuddyListPresence : IMPresence {
	NSSet* _filterGroups;
	IMPerson* _filterPerson;
	IMServiceImpl* _filterService;
	NSString* _IDFilter;
	NSString* _filterSingleGroup;
}
@property(readonly, assign, nonatomic) IMServiceImpl* service;
@property(readonly, assign, nonatomic) IMPerson* person;
@property(readonly, assign, nonatomic) NSSet* groups;
@property(readonly, assign, nonatomic) unsigned sortOrder;
@property(readonly, assign, nonatomic) NSString* group;
-(id)initWithIMPersonFilter:(id)impersonFilter IDFilter:(id)filter serviceFilter:(id)filter3 groupFilters:(id)filters quiet:(BOOL)quiet;
-(id)initWithIMPersonFilter:(id)impersonFilter IDFilter:(id)filter serviceFilter:(id)filter3 groupFilters:(id)filters;
-(id)initWithIMPersonFilter:(id)impersonFilter serviceFilter:(id)filter groupFilters:(id)filters quiet:(BOOL)quiet;
-(id)initWithIMPersonFilter:(id)impersonFilter serviceFilter:(id)filter groupFilters:(id)filters;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)_filterSingleGroup;
-(BOOL)canAddIMHandle:(id)handle;
-(BOOL)isEqual:(id)equal;
@end

