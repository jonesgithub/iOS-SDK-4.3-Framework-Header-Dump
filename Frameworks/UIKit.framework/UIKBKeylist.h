/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, NSMutableArray;

@interface UIKBKeylist : XXUnknownSuperclass <NSCoding, NSCopying> {
	NSString* m_name;
	NSMutableArray* m_keys;
}
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSMutableArray* keys;
@property(readonly, assign, nonatomic) unsigned count;
+(id)keylist;
-(id)initWithName:(id)name keys:(id)keys;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(id)keyWithName:(id)name;
-(id)keysWithInteractionType:(id)interactionType;
-(id)description;
@end
