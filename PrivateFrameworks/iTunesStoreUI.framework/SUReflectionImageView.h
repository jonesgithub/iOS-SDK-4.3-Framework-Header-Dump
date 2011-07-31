/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView;

@interface SUReflectionImageView : XXUnknownSuperclass {
	float _reflectionHeight;
	float _spacing;
	float _reflectionAlpha;
	BOOL _useImageSize;
	unsigned _nonSquareImage : 1;
	UIImageView* _imageView;
	UIImageView* _reflection;
}
@property(assign, nonatomic) float reflectionSpacing;
@property(assign, nonatomic) BOOL nonSquareImage;
-(id)init;
-(id)initWithReflectionHeight:(float)reflectionHeight spacing:(float)spacing;
-(void)dealloc;
-(void)setImage:(id)image;
-(void)setReflectionAlphaWhenVisible:(float)visible;
-(void)setReflectionVisible:(BOOL)visible;
-(void)setUseImageSize:(BOOL)size;
@end
