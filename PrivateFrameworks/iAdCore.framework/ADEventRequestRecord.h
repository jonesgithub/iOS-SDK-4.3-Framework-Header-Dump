/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface ADEventRequestRecord : XXUnknownSuperclass {
	double _sent;
	unsigned numberOfRetransmits;
	BOOL awaitingRetransmit;
}
@property(assign) double sent;
@property(assign) unsigned numberOfRetransmits;
@property(assign) BOOL awaitingRetransmit;
+(id)requestRecord;
@end

