/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"

@class UILabel;

@interface PLVideoEditingOverlayView : XXUnknownSuperclass {
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
}
-(id)initWithFrame:(CGRect)frame;
-(void)drawRect:(CGRect)rect;
-(void)setTitle:(id)title;
-(void)setBody:(id)body;
-(void)layoutSubviews;
@end
