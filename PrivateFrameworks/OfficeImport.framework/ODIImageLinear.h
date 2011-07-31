/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODILinear.h"
#import "OfficeImport-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ODIImageLinear : ODILinear {
@private
	NSString* mImagePresentationName;
}
-(id)initWithImagePresentationName:(id)imagePresentationName state:(id)state;
-(void)dealloc;
-(void)mapPoint:(id)point bounds:(CGRect)bounds;
@end
