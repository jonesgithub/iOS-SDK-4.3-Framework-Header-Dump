/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSNumber;

@interface MCAPNInfo : XXUnknownSuperclass {
	NSString* _apnName;
	NSString* _username;
	NSString* _password;
	NSString* _proxy;
	NSNumber* _proxyPort;
}
@property(retain, nonatomic) NSString* apnName;
@property(retain, nonatomic) NSString* username;
@property(retain, nonatomic) NSString* password;
@property(retain, nonatomic) NSString* proxy;
@property(retain, nonatomic) NSNumber* proxyPort;
-(void)dealloc;
-(id)description;
-(id)strippedDefaultsRepresentation;
-(id)defaultsRepresentation;
@end

