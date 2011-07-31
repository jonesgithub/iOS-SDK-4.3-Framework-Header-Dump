/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import "BasicAccount.h"
#import "AccountCreationProtocol.h"
#import "DeviceLocalAccount.h"


@interface DeviceLocalAccount : BasicAccount <AccountCreationProtocol> {
}
+(id)basicAccountProperties;
+(id)typeString;
+(id)localizedSyncSourceStringForDataClass:(id)dataClass forBeginningOfSentence:(BOOL)sentence;
+(id)localizedReferenceToSyncSourceStringForDataClass:(id)dataClass;
+(BOOL)isTetheredSyncingDataclass:(id)dataclass;
+(id)tetheredSourceForDataClass:(id)dataClass;
+(id)accountWithBasicAccount:(id)basicAccount;
-(id)identifier;
-(id)displayName;
-(id)syncStoreIdentifier;
@end

@interface DeviceLocalAccount (Internal)
+(id)_identifier;
@end
