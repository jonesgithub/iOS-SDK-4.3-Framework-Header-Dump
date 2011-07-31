/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import "NSObject.h"


@interface NSSet : NSObject <NSCopying, NSMutableCopying, NSCoding, NSFastEnumeration> {
}
+(id)allocWithZone:(NSZone*)zone;
+(id)set;
+(id)setWithObjects:(id*)objects count:(unsigned)count;
+(id)setWithObject:(id)object;
+(id)setWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;
+(id)setWithArray:(id)array range:(NSRange)range;
+(id)setWithArray:(id)array copyItems:(BOOL)items;
+(id)setWithArray:(id)array;
+(id)setWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;
+(id)setWithOrderedSet:(id)orderedSet range:(NSRange)range;
+(id)setWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;
+(id)setWithOrderedSet:(id)orderedSet;
+(id)setWithSet:(id)set copyItems:(BOOL)items;
+(id)setWithSet:(id)set;
+(id)setWithObjects:(id)objects;
-(unsigned)count;
-(id)member:(id)member;
-(id)objectEnumerator;
-(BOOL)isNSSet__;
-(unsigned long)_cfTypeID;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(void)getObjects:(id*)objects;
-(id)allObjects;
-(BOOL)containsObject:(id)object;
-(unsigned)countForObject:(id)object;
-(id)anyObject;
-(BOOL)_getValue:(id*)value forObj:(id)obj;
-(void)_applyValues:(/*function-pointer*/ void*)values context:(void*)context;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(BOOL)isEqualToSet:(id)set;
-(BOOL)isSubsetOfOrderedSet:(id)orderedSet;
-(BOOL)isSubsetOfSet:(id)set;
-(BOOL)intersectsOrderedSet:(id)set;
-(BOOL)intersectsSet:(id)set;
-(void)enumerateObjectsUsingBlock:(id)block;
-(void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;
-(id)objectsPassingTest:(id)test;
-(id)objectsWithOptions:(unsigned)options passingTest:(id)test;
-(void)makeObjectsPerformSelector:(SEL)selector;
-(void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;
-(id)sortedArrayUsingComparator:(id)comparator;
-(id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;
-(id)members:(id)members notFoundMarker:(id)marker;
-(id)descriptionWithLocale:(id)locale indent:(unsigned)indent;
-(id)descriptionWithLocale:(id)locale;
-(id)description;
-(id)initWithObjects:(id*)objects count:(unsigned)count;
-(id)initWithObject:(id)object;
-(id)initWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;
-(id)initWithArray:(id)array range:(NSRange)range;
-(id)initWithArray:(id)array copyItems:(BOOL)items;
-(id)initWithArray:(id)array;
-(id)initWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;
-(id)initWithOrderedSet:(id)orderedSet range:(NSRange)range;
-(id)initWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;
-(id)initWithOrderedSet:(id)orderedSet;
-(id)initWithSet:(id)set copyItems:(BOOL)items;
-(id)initWithSet:(id)set;
-(id)initWithObjects:(id)objects;
-(id)setByAddingObject:(id)object;
-(id)setByAddingObjects:(const id*)objects count:(unsigned)count;
-(id)setByAddingObjectsFromArray:(id)array;
-(id)setByAddingObjectsFromOrderedSet:(id)orderedSet;
-(id)setByAddingObjectsFromSet:(id)set;
-(id)copyWithZone:(NSZone*)zone;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
@end
