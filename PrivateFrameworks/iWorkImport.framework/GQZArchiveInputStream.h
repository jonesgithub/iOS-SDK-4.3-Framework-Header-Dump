/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "NSObject.h"


@protocol GQZArchiveInputStream <NSObject>
-(const char*)dataAtOffset:(long long)offset size:(unsigned long)size end:(long long)end readSize:(unsigned*)size4;
-(void)readFromOffset:(long long)offset size:(unsigned long)size buffer:(char*)buffer;
-(long long)size;
@end
