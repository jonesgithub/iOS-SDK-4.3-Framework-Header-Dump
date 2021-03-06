/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface DAKeychain : XXUnknownSuperclass {
}
+(id)sharedKeychain;
-(BOOL)saveKeychainInformationsForURL:(id)url andPassword:(id)password withAccessibility:(int)accessibility;
-(id)loadKeychainInformationsForURL:(id)url;
-(void)removeKeychainInformationsForURL:(id)url;
-(id)guessPasswordForURL:(id)url;
@end

