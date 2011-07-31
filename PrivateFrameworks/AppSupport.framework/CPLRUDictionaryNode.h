/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface CPLRUDictionaryNode : XXUnknownSuperclass {
	id _key;
	id _object;
	CPLRUDictionaryNode* next;
	CPLRUDictionaryNode* prev;
}
@property(readonly, assign, nonatomic) id key;
@property(retain, nonatomic) id object;
-(id)initWithKey:(id)key object:(id)object;
-(void)dealloc;
@end
