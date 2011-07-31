/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import "iAdCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView;

@interface ADBrandingFrame : XXUnknownSuperclass {
	UIImageView* _topLeft;
	UIImageView* _centerLeft;
	UIImageView* _bottomLeft;
	UIImageView* _centerTop;
	UIImageView* _centerBottom;
	UIImageView* _topRight;
	UIImageView* _centerRight;
	UIImageView* _bottomRight;
}
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(id)bottomRightCornerForSize:(CGSize)size;
-(void)layoutSubviews;
@end
