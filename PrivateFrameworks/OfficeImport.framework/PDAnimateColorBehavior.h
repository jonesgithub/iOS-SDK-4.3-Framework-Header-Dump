/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDCommonBehaviorData.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface PDAnimateColorBehavior : PDCommonBehaviorData {
@private
	OADColor* mBy;
	OADColor* mFrom;
	OADColor* mTo;
	int mColorSpace;
	int mDirection;
}
-(id)by;
-(void)setBy:(id)by;
-(id)from;
-(void)setFrom:(id)from;
-(id)to;
-(void)setTo:(id)to;
-(int)colorSpace;
-(void)setColorSpace:(int)space;
-(int)direction;
-(void)setDirection:(int)direction;
@end
