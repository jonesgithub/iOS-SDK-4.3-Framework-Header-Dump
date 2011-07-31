/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "EventKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate;

@interface EKRecurrenceEnd : XXUnknownSuperclass <NSCopying> {
@private
	NSDate* _endDate;
	unsigned _occurrenceCount;
}
@property(readonly, assign, nonatomic) NSDate* endDate;
@property(readonly, assign, nonatomic) unsigned occurrenceCount;
+(id)recurrenceEndWithEndDate:(id)endDate;
+(id)recurrenceEndWithOccurrenceCount:(unsigned)occurrenceCount;
-(id)initWithEndDate:(id)endDate;
-(id)initWithOccurrenceCount:(unsigned)occurrenceCount;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(BOOL)usesEndDate;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
@end
