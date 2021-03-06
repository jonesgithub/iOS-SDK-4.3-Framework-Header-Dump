/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSData;

__attribute__((visibility("hidden")))
@interface GMMImage : XXUnknownSuperclass {
@private
	NSString* _key;
	int _type;
	NSData* _imageData;
}
@property(retain, nonatomic) NSString* key;
@property(assign, nonatomic) int type;
@property(retain, nonatomic) NSData* imageData;
@property(readonly, assign, nonatomic) BOOL hasImageData;
@property(readonly, assign, nonatomic) BOOL hasKey;
-(id)init;
-(void)dealloc;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

