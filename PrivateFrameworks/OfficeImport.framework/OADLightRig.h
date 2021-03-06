/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"

@class OADRotation3D;

__attribute__((visibility("hidden")))
@interface OADLightRig : XXUnknownSuperclass <NSCopying> {
@private
	OADRotation3D* mRotation;
	int mType;
	int mDirection;
}
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)rotation;
-(void)setRotation:(id)rotation;
-(int)type;
-(void)setType:(int)type;
-(int)direction;
-(void)setDirection:(int)direction;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@end

