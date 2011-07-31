/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GMMDirectionsOptionDefinition : XXUnknownSuperclass {
@private
	int _iD;
	NSString* _optionText;
	int _type;
	NSMutableArray* _allowableValuess;
	int _defaultValue;
}
@property(assign, nonatomic) int iD;
@property(retain, nonatomic) NSString* optionText;
@property(assign, nonatomic) int type;
@property(retain, nonatomic) NSMutableArray* allowableValuess;
@property(assign, nonatomic) int defaultValue;
@property(readonly, assign, nonatomic) int allowableValuessCount;
-(id)init;
-(void)dealloc;
-(void)setAllowableValues:(id)values atIndex:(unsigned)index;
-(id)allowableValuesAtIndex:(unsigned)index;
-(void)addAllowableValues:(id)values;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end
