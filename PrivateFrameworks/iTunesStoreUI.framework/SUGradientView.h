/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iTunesStoreUI-Structs.h"

@class SUGradient;

@interface SUGradientView : XXUnknownSuperclass {
@private
	CGGradientRef _cgGradient;
	SUGradient* _gradient;
}
@property(copy, nonatomic) SUGradient* gradient;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
@end

