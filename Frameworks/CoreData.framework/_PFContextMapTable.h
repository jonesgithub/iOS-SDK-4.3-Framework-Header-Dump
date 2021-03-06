/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _PFContextMapTable : XXUnknownSuperclass {
@private
	unsigned _slotLimit;
	CFDictionaryRef _objectsByTemporaryID;
	CFDictionaryRef* _objectsByPermanentObjectID;
	CFDictionaryRef* _objectsBy64bitPKID;
	unsigned* _capacitiesFor64bitPKMappings;
	contextMapTableFlags _flags;
}
-(id)initWithWeaksReferences:(BOOL)weaksReferences;
-(void)setForUseWithModel:(id)model;
-(void)_dispose;
-(void)dealloc;
-(void)finalize;
-(unsigned)getAllObjects:(id*)objects;
-(void)setCapacityHint:(unsigned)hint forSlot:(unsigned)slot;
-(void)clearTemporaryIDs;
@end

