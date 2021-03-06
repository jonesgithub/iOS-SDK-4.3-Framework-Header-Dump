/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface MessageKeychainManager : XXUnknownSuperclass {
}
+(void)initialize;
+(id)_passwordForHost:(id)host username:(id)username port:(int)port keychainProtocol:(CFStringRef)protocol;
+(id)passwordForHost:(id)host username:(id)username port:(int)port keychainProtocol:(void*)protocol;
+(void)setPassword:(id)password forHost:(id)host username:(id)username port:(int)port keychainProtocol:(void*)protocol keychainAccessibility:(void*)accessibility;
+(void)removePasswordForHost:(id)host username:(id)username port:(int)port keychainProtocol:(void*)protocol;
+(id)_passwordForGenericAccount:(id)genericAccount service:(id)service error:(id*)error;
+(id)passwordForServiceName:(id)serviceName accountName:(id)name error:(id*)error;
+(id)passwordForServiceName:(id)serviceName accountName:(id)name;
+(void)setPassword:(id)password forServiceName:(id)serviceName accountName:(id)name keychainAccessibility:(void*)accessibility;
+(void)removePasswordForServiceName:(id)serviceName accountName:(id)name;
@end

