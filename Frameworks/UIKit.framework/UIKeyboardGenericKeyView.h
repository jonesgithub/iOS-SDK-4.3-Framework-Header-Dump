/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardKeyView.h"
#import "UIKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardGenericKeyView : UIKeyboardKeyView {
@private
	id _target;
	SEL _action;
	NSString* _label;
	int _location;
	BOOL _isMouseInside;
}
-(id)initWithFrame:(CGRect)frame target:(id)target action:(SEL)action;
-(void)setLabel:(id)label;
-(void)setLocation:(int)location;
-(id)localizedString;
-(CFDataRef)createCacheKey;
-(id)image;
-(void)mouseDown:(GSEventRef)down;
-(void)mouseUp:(GSEventRef)up;
@end

