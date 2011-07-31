/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "PMBackgroundMapper.h"
#import "CMMapper.h"

@class OADBackground;

__attribute__((visibility("hidden")))
@interface PMBackgroundMapper : CMMapper {
@private
	OADBackground* mBackground;
}
-(id)initWithOadBackground:(id)oadBackground parent:(id)parent;
-(void)mapAt:(id)at withState:(id)state;
@end

@interface PMBackgroundMapper (Private)
-(CGRect)slideRect;
@end
