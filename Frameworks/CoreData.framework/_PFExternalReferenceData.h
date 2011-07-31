/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface _PFExternalReferenceData : XXUnknownSuperclass {
@private
	NSData* _originalData;
	void* _bytesPtrForStore;
	unsigned _bytesLengthForStore;
	void* _bytesPtrForExternalReference;
	unsigned _bytesLengthForExternalReference;
	externalDataFlags _externalDataFlags;
}
+(BOOL)_updateFileDescriptorsInUseReserveNew:(BOOL)useReserveNew;
+(BOOL)_reserveMapFileDescriptor;
+(BOOL)_releaseReservedMapFileDescriptor;
-(id)initForExternalLocation:(id)externalLocation data:(id)data;
-(id)initWithStoreBytes:(const void*)storeBytes length:(unsigned)length;
-(void)dealloc;
-(id)copy;
-(id)mutableCopy;
-(id)_originalData;
-(void)_setBytesForExternalReference:(const void*)externalReference;
-(void)_attemptToMapData;
-(const void*)_retrieveExternalData;
-(void)_writeExternalReferenceToInterimLocation;
-(void)_moveExternalReferenceToPermanentLocation;
-(void)_deleteExternalReferenceFromPermanentLocation;
-(BOOL)hasExternalReferenceContent;
-(id)description;
-(const void*)bytes;
-(unsigned)length;
-(const void*)_bytesPtrForStore;
-(unsigned)_bytesLengthForStore;
-(const void*)_bytesPtrForExternalReference;
-(unsigned)_bytesLengthForExternalReference;
-(void)getBytes:(void*)bytes length:(unsigned)length;
-(void)getBytes:(void*)bytes range:(NSRange)range;
-(id)subdataWithRange:(NSRange)range;
-(BOOL)_isEqualHelper:(id)helper;
-(BOOL)isEqual:(id)equal;
-(BOOL)isEqualToData:(id)data;
@end
