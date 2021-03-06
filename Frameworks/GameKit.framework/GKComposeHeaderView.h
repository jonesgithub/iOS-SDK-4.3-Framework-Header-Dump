/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKComposeHeaderView.h"
#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GKHeaderLabelView, GKUITheme, NSString;

@interface GKComposeHeaderView : XXUnknownSuperclass {
	NSString* _label;
	NSString* _navTitle;
	GKHeaderLabelView* _labelView;
}
@property(retain, nonatomic) GKUITheme* theme;
+(float)defaultHeight;
-(void)setNavTitle:(id)title;
-(id)navTitle;
-(id)labelView;
-(void)setLabel:(id)label;
-(void)setLabelHighlighted:(BOOL)highlighted;
-(float)maxLabelX;
-(BOOL)_canBecomeFirstResponder;
-(void)handleTouchesEnded;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)mouseUp:(GSEventRef)up;
-(void)layoutSubviews;
-(void)dealloc;
@end

@interface GKComposeHeaderView (SyntheticEvents)
-(id)_automationID;
@end

