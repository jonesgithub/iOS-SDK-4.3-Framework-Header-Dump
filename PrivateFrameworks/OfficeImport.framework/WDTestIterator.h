/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDIterator.h"


__attribute__((visibility("hidden")))
@interface WDTestIterator : WDIterator {
@private
	WDIterator* mIterator;
	id mNext;
}
-(id)initWithIterator:(id)iterator;
-(void)dealloc;
-(BOOL)test:(id)test;
-(BOOL)hasNext;
-(id)next;
@end
