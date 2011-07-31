/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "DeliveryAccount.h"

@class DAMailAccount;

@interface DADeliveryAccount : DeliveryAccount {
	DAMailAccount* _DAMailAccount;
}
-(id)initWithDAMailAccount:(id)damailAccount;
-(Class)deliveryClass;
-(id)newDeliveryWithMessage:(id)message;
-(id)newDeliveryWithHeaders:(id)headers mixedContent:(id)content textPartsAreHTML:(BOOL)html;
-(id)newDeliveryWithHeaders:(id)headers HTML:(id)html plainTextAlternative:(id)alternative other:(id)other;
-(void)dealloc;
-(id)mailAccountIfAvailable;
@end
