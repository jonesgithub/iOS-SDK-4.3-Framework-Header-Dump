/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import "PrintKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSFileHandle, NSMutableArray;
@protocol PKPrinterBrowserDelegate;

@interface PKPrinterBrowser : XXUnknownSuperclass {
	id<PKPrinterBrowserDelegate> delegate;
@private
	DNSServiceRef_tRef mainBrowserRef;
	DNSServiceRef_tRef cupsBrowserRef;
	DNSServiceRef_tRef universalBrowserRef;
	NSMutableDictionary* printers;
	NSFileHandle* handle;
	unsigned char originalCellFlag;
	unsigned char originalWifiFlag;
	dispatch_queue_s* printersQueue;
	NSMutableArray* pendingList;
}
@property(assign, nonatomic) id<PKPrinterBrowserDelegate> delegate;
@property(retain, nonatomic) NSFileHandle* handle;
@property(retain, nonatomic) NSMutableDictionary* printers;
@property(readonly, assign, nonatomic) dispatch_queue_s* printersQueue;
@property(retain, nonatomic) NSMutableArray* pendingList;
+(id)browserWithDelegate:(id)delegate;
-(id)initWithDelegate:(id)delegate;
-(void)dealloc;
-(void)removePrinter:(id)printer;
-(void)addLimboPrinter:(id)printer;
-(void)reissueTXTQuery:(id)query;
-(void)addQueryResult:(id)result toPrinter:(id)printer;
-(void)addBlockToPendingList:(id)pendingList;
-(void)browseCallback:(unsigned)callback interface:(unsigned)interface name:(const char*)name regType:(const char*)type domain:(const char*)domain;
-(void)queryCallback:(int)callback flags:(unsigned)flags fullName:(const char*)name rdlen:(unsigned short)rdlen rdata:(const void*)rdata;
-(void)handleNotification:(id)notification;
@end

