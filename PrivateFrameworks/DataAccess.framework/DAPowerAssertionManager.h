/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DataAccess-Structs.h"

@class NSMutableSet, NSMutableDictionary, NSString, NSCountedSet;

@interface DAPowerAssertionManager : XXUnknownSuperclass {
	NSString* _uuid;
	NSCountedSet* _contexts;
	NSMutableDictionary* _groupIdentifierToContexts;
	CFDictionaryRef _contextToGroupIdentifier;
	NSMutableSet* _heldAsideGroupIdentifiers;
	NSCountedSet* _heldAsideContexts;
	void* _timedAssertionRef;
}
+(void)vendDaemons:(Class)daemons;
+(id)sharedPowerAssertionManager;
-(id)init;
-(void)dealloc;
-(unsigned)powerAssertionRetainCount:(id)count;
-(void)retainPowerAssertion:(id)assertion withGroupIdentifier:(id)groupIdentifier;
-(void)releasePowerAssertion:(id)assertion;
-(id)stateString;
-(void)dropPowerAssertionsForGroupIdentifier:(id)groupIdentifier;
-(void)reattainPowerAssertionsForGroupIdentifier:(id)groupIdentifier;
-(void)_retainAssertions;
-(void)_releaseAssertions;
@end

