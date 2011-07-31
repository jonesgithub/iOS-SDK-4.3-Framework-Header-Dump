/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, UIColor;

__attribute__((visibility("hidden")))
@interface _UINavigationBarAppearance : XXUnknownSuperclass {
@private
	UIImage* backgroundImage;
	UIImage* miniBackgroundImage;
	UIImage* buttonBackgroundImage;
	UIImage* miniButtonBackgroundImage;
	UIImage* buttonBackgroundImagePressed;
	UIImage* miniButtonBackgroundImagePressed;
	UIImage* backButtonBackgroundImage;
	UIImage* miniBackButtonBackgroundImage;
	UIImage* backButtonBackgroundImagePressed;
	UIImage* miniBackButtonBackgroundImagePressed;
	UIColor* buttonItemTextColor;
	UIColor* buttonItemTextColorPressed;
	UIColor* buttonItemTextShadowColor;
	UIColor* buttonItemTextShadowColorPressed;
	CGSize buttonTextShadowOffset;
	unsigned hasCustomButtonTextShadowOffset : 1;
	unsigned reversesButtonTextShadowOffsetWhenPressed : 1;
}
-(void)dealloc;
-(BOOL)hasCustomButtonTitleTreatment;
@end
