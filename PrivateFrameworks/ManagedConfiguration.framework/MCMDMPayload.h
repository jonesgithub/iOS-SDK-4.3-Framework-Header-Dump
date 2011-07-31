/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString, NSData, NSArray;

@interface MCMDMPayload : MCPayload {
@private
	NSString* _identityUUID;
	NSData* _identityPersistentID;
	BOOL _useDevelopmentAPNS;
	NSString* _topic;
	NSString* _serverURLString;
	NSString* _checkInURLString;
	int _accessRights;
	BOOL _signMessage;
}
@property(readonly, assign) NSString* identityUUID;
@property(retain) NSData* identityPersistentID;
@property(readonly, assign) NSString* topic;
@property(readonly, assign) NSString* serverURLString;
@property(readonly, assign) BOOL useDevelopmentAPNS;
@property(readonly, assign) NSString* checkInURLString;
@property(readonly, assign) int accessRights;
@property(readonly, assign) BOOL signMessage;
@property(readonly, assign) NSArray* localizedAccessRightDescriptions;
+(id)typeStrings;
+(id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;
-(id)_invalidRightsError;
-(id)_invalidTopicError;
-(id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id*)error;
-(id)stubDictionary;
-(id)description;
-(id)installationWarnings;
-(void)dealloc;
-(id)title;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
@end
