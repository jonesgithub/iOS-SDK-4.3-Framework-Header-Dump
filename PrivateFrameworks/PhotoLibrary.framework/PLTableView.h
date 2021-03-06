/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"

@class CAFilter;

@interface PLTableView : XXUnknownSuperclass {
	CAFilter* _blurFilter;
	unsigned _shouldBlur : 1;
}
@property(assign, nonatomic, getter=isBlurFilterEnabled) BOOL blurFilterEnabled;
@property(readonly, assign, nonatomic, getter=isScrolling) BOOL scrolling;
-(id)initWithFrame:(CGRect)frame style:(int)style;
-(void)dealloc;
-(void)scrollToBottom:(BOOL)bottom;
-(BOOL)isScrolledToBottom;
-(void)setContentOffset:(CGPoint)offset animated:(BOOL)animated;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)_setBlurFilterEnabled:(BOOL)enabled;
-(void)_removeBlurFilter;
@end

