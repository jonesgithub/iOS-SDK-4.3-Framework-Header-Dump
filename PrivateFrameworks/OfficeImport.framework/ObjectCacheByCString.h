/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ObjectCacheByCString : XXUnknownSuperclass {
@private
	CFDictionaryRef _dictionary;
}
-(id)init;
-(void)dealloc;
-(void)setObject:(id)object forCStringKey:(char*)cstringKey;
-(id)getObjectForCStringKey:(char*)cstringKey;
@end

