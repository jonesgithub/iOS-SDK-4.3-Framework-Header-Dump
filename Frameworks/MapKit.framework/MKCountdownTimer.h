/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet, NSTimer;

@interface MKCountdownTimer : XXUnknownSuperclass {
@private
	NSTimer* timer;
	NSMutableSet* observers;
}
+(id)sharedTimer;
-(id)init;
-(id)initOnce;
-(void)dealloc;
-(void)addObserver:(id)observer;
-(void)removeObserver:(id)observer;
-(void)timerFired;
-(void)applicationResumed:(id)resumed;
@end
