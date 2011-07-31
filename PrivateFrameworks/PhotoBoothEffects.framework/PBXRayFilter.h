/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import "PBFilter.h"
#import "PhotoBoothEffects-Structs.h"
#import "PBXRayFilter.h"


@interface PBXRayFilter : PBFilter {
}
-(const char*)_fragmentShaderSource;
-(id)_glesUniforms;
-(id)_lookupTableNames;
-(id)_lookupTableForName:(id)name;
-(void)renderWithContext:(id)context inputSize:(CGSize)size outputRect:(CGRect)rect mirrored:(BOOL)mirrored;
@end

@interface PBXRayFilter (OpenCL)
-(void)setupKernelArguments:(id)arguments mirrored:(BOOL)mirrored;
-(unsigned long)kernelArgCount;
-(/*function-pointer*/ void*)kernelWrapper;
@end
