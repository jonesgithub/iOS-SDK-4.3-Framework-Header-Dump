/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"


@interface UIAutoRotatingWindow : UIWindow {
	int _interfaceOrientation;
}
+(id)sharedPopoverHostingWindow;
-(id)initWithFrame:(CGRect)frame;
-(void)updateForOrientation:(int)orientation;
-(void)_didRemoveSubview:(id)subview;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
@end
