/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage;

@interface GKImageContext : XXUnknownSuperclass {
	CGSize _size;
	float _scale;
	CGContextRef _CGContext;
}
@property(assign, nonatomic) CGSize size;
@property(readonly, assign, nonatomic) float scale;
@property(readonly, assign, nonatomic) CGContextRef CGContext;
@property(readonly, assign, nonatomic) UIImage* image;
-(id)initWithSize:(CGSize)size scale:(float)scale opaque:(BOOL)opaque;
-(void)dealloc;
@end

