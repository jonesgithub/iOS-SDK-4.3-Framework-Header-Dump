/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ALAssetsFilterInternal;

@interface ALAssetsFilter : XXUnknownSuperclass {
@private
	id _internal;
}
@property(retain, nonatomic) ALAssetsFilterInternal* internal;
+(id)allPhotos;
+(id)allVideos;
+(id)allAssets;
-(id)init;
-(void)dealloc;
-(int)_filter;
-(void)_setFilter:(int)filter;
@end

