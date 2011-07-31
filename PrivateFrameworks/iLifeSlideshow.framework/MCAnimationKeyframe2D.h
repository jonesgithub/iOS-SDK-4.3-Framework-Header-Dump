/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import "MCAnimationKeyframe.h"


@interface MCAnimationKeyframe2D : MCAnimationKeyframe {
	CGPoint mPoint;
	CGPoint mC1;
	CGPoint mC2;
}
@property(assign) CGPoint point;
@property(assign) CGPoint c1;
@property(assign) CGPoint c2;
-(id)init;
-(id)initWithImprint:(id)imprint andMontage:(id)montage;
-(id)imprint;
@end
