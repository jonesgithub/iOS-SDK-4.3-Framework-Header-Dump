/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFObjectTable : XXUnknownSuperclass {
@private
	NSMutableArray* m_objects;
}
-(id)init;
-(void)dealloc;
-(int)deleteObject:(unsigned)object;
-(int)selectInto:(int)into :(id)arg2;
-(void)clear;
-(unsigned)insertPos;
-(int)putObject:(id)object :(unsigned)arg2;
-(id)getObject:(unsigned)object;
-(int)size;
@end

