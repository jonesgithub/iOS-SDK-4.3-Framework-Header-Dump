/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIMenuController.h"
#import "UIKit-Structs.h"

@class NSArray;

@interface UIMenuController : XXUnknownSuperclass {
@private
	CGRect _targetRect;
	int _arrowDirection;
}
@property(assign, nonatomic) int arrowDirection;
@property(readonly, assign, nonatomic) CGRect menuFrame;
@property(copy, nonatomic) NSArray* menuItems;
@property(assign, nonatomic, getter=isMenuVisible) BOOL menuVisible;
+(id)sharedMenuController;
-(id)init;
-(void)dealloc;
-(void)setMenuVisible:(BOOL)visible animated:(BOOL)animated;
-(void)_windowWillRotate:(id)_window;
-(void)setTargetRect:(CGRect)rect inView:(id)view;
-(void)update;
@end

@interface UIMenuController (UIMenuControllerStatic)
-(BOOL)_update:(BOOL)update;
-(void)calloutBarWillStartAnimation:(id)calloutBar;
-(void)calloutBarDidFinishAnimation:(id)calloutBar;
@end

