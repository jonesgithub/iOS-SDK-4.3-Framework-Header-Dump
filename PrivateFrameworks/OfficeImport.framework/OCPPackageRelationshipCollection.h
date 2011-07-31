/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OCPPackageRelationshipCollection : XXUnknownSuperclass {
@private
	NSMutableDictionary* mIdentifierMap;
	NSMutableDictionary* mTypeMap;
}
-(id)initWithRelationshipsXml:(xmlDoc*)relationshipsXml baseLocation:(id)location;
-(void)dealloc;
-(id)relationshipForIdentifier:(id)identifier;
-(id)relationshipsByType:(id)type;
@end
