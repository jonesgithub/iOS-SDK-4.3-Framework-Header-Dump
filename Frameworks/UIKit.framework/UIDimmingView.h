/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor, UIImageView, UIBarButtonItem, NSArray;

__attribute__((visibility("hidden")))
@interface UIDimmingView : UIView {
@private
	id _delegate;
	UIBarButtonItem* _highlightedBarButtonItem;
	UIImageView* _highlightedImageView;
	UIImageView* _backgroundGlow;
	NSArray* _passthroughViews;
	BOOL _ignoresTouches;
	BOOL _displayed;
	BOOL _inPassthroughHitTest;
	UIColor* _dimmingColor;
}
@property(assign, nonatomic) id delegate;
@property(retain, nonatomic) NSArray* passthroughViews;
@property(assign, nonatomic) BOOL ignoresTouches;
@property(assign, nonatomic) BOOL displayed;
@property(retain, nonatomic) UIColor* dimmingColor;
@property(retain, nonatomic) UIBarButtonItem* highlightedBarButtonItem;
+(id)defaultDimmingColor;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)dimmingRemovalAnimationDidStop;
-(void)display:(BOOL)display withAnimationDuration:(float)animationDuration afterDelay:(float)delay;
-(void)mouseUp:(GSEventRef)up;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
@end
