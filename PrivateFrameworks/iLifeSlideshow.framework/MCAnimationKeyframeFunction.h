/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MCAnimationKeyframe.h"

@class NSString;

@interface MCAnimationKeyframeFunction : MCAnimationKeyframe {
	double mDuration;
	NSString* mFunction;
	double mFunctionTimeOffset;
	double mFunctionTimeFactor;
	double mInnerEaseInControl;
	double mInnerEaseOutControl;
}
@property(assign) double duration;
@property(assign) double functionTimeOffset;
@property(assign) double functionTimeFactor;
@property(assign) double innerEaseInControl;
@property(assign) double innerEaseOutControl;
@property(copy) NSString* function;
-(id)init;
-(id)initWithImprint:(id)imprint andMontage:(id)montage;
-(void)dealloc;
-(id)imprint;
-(id)description;
@end

