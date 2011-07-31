/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DAMailboxStreamingContentConsumer.h"
#import "DAMailboxFetchSearchResultConsumer.h"

@class MFConditionLock, MFError;
@protocol MFDAStreamingContentConsumer;

@interface _MFDAMessageStoreSearchResultBodyConsumer : XXUnknownSuperclass <DAMailboxFetchSearchResultConsumer, DAMailboxStreamingContentConsumer> {
	MFConditionLock* _doneCondition;
	id<MFDAStreamingContentConsumer> _streamConsumer;
	MFError* _error;
}
@property(retain, nonatomic) MFError* error;
@property(retain, nonatomic) id<MFDAStreamingContentConsumer> streamConsumer;
-(id)init;
-(BOOL)waitUntilDoneBeforeDate:(id)date;
-(void)waitUntilDone;
-(void)actionFailed:(int)failed forTask:(id)task error:(id)error;
-(void)searchResultFetchedWithResponses:(id)responses;
-(BOOL)shouldBeginStreamingForMailMessage:(id)mailMessage format:(int)format;
-(void)consumeData:(char*)data length:(int)length format:(int)format mailMessage:(id)message;
-(void)didEndStreamingForMailMessage:(id)mailMessage;
-(void)dealloc;
@end
