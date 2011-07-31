/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol OCDDelayedNodeContext;

__attribute__((visibility("hidden")))
@interface OCDDelayedNode : XXUnknownSuperclass {
@private
	id<OCDDelayedNodeContext> mDelayedContext;
	bool mLoaded;
}
+(void)disableDelayedLoading;
+(void)enableDelayedLoading;
-(void)dealloc;
-(void)setDelayedContext:(id)context;
-(id)delayedContext;
-(bool)isLoaded;
-(void)setLoaded:(bool)loaded;
-(bool)load;
@end
