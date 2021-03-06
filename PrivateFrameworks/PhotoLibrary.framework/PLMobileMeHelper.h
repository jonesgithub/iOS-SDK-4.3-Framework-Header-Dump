/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface PLMobileMeHelper : XXUnknownSuperclass {
	NSArray* _usernames;
	NSArray* _likelyValidUsernames;
}
+(id)sharedInstance;
+(id)serviceName;
+(id)userAgentString;
+(id)preferredUsername;
-(void)dealloc;
-(BOOL)getUsername:(id*)username andPassword:(id*)password;
-(id)_passwordForUsername:(id)username;
-(id)_usernames;
-(id)_validUsernames;
-(BOOL)hasMobileMeAccounts;
-(BOOL)hasValidMobileMeAccounts;
-(void)invalidateUserAccounts;
@end

