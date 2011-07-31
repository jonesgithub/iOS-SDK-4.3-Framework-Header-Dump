/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessage.h"

@class NSString, NSDictionary;

@interface FTProfileMessage : FTMessage {
	NSString* _profileID;
	NSString* _authToken;
	NSDictionary* _responseAlert;
}
@property(copy) NSString* authToken;
@property(copy) NSString* profileID;
@property(copy) NSDictionary* responseAlertInfo;
-(void)dealloc;
-(BOOL)hasRequiredKeys;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)dictionary;
@end
