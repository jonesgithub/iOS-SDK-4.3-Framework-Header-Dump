/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "MFDAMailAccountConsumer.h"
#import "DAMessageSendConsumer.h"

@class MFError;

@interface MFDADeliveryConsumer : MFDAMailAccountConsumer <DAMessageSendConsumer> {
	int status;
	MFError* _error;
}
@property(retain, nonatomic) MFError* error;
-(void)messageSentWithContext:(void*)context;
-(void)actionFailed:(int)failed forTask:(id)task error:(id)error;
-(void)dealloc;
@end
