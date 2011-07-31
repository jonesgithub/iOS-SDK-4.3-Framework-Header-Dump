/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface CAWindowServer : XXUnknownSuperclass {
@private
	CAWindowServerImpl* _impl;
}
@property(assign) unsigned rendererFlags;
@property(assign, getter=isMirroringEnabled) BOOL mirroringEnabled;
@property(readonly, assign) NSArray* displays;
+(id)context;
+(id)contextWithOptions:(id)options;
+(id)server;
+(id)serverIfRunning;
-(id)init;
-(id)_init;
-(void)addDisplay:(id)display;
-(void)removeDisplay:(id)display;
-(void)removeAllDisplays;
-(id)displayWithName:(id)name;
-(void)_detectDisplays;
-(void)dealloc;
-(id)description;
@end
