/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, GKConnection, NSData, NSMutableDictionary, GKSession;
@protocol GKMatchDelegate;

@interface GKMatch : XXUnknownSuperclass {
	id<GKMatchDelegate> _delegate;
	GKSession* _session;
	GKConnection* _connection;
	unsigned _expectedPlayerCount;
	NSMutableDictionary* _playerEventQueues;
	NSData* _selfBlob;
	unsigned char _version;
	id<GKMatchDelegate> _inviteDelegate;
	unsigned _packetSequenceNumber;
}
@property(assign, nonatomic) id<GKMatchDelegate> delegate;
@property(retain, nonatomic) GKSession* session;
@property(retain, nonatomic) GKConnection* connection;
@property(readonly, assign, nonatomic) unsigned expectedPlayerCount;
@property(retain, nonatomic) NSMutableDictionary* playerEventQueues;
@property(retain, nonatomic) NSData* selfBlob;
@property(assign, nonatomic) unsigned char version;
@property(assign, nonatomic) id<GKMatchDelegate> inviteDelegate;
@property(assign, nonatomic) unsigned packetSequenceNumber;
@property(readonly, assign, nonatomic) NSArray* playerIDs;
-(BOOL)connected:(id)connected;
-(id)init;
-(void)dealloc;
-(void)getLocalConnectionDataWithCompletionHandler:(id)completionHandler;
-(void)preLoadInviter:(id)inviter sessionToken:(id)token;
-(void)connectToPeersWithDictionaries:(id)dictionaries version:(unsigned char)version sessionToken:(id)token cdxTicket:(id)ticket;
-(void)inviteeComboMatched:(int)matched;
-(id)packet:(unsigned char)packet data:(id)data;
-(BOOL)sendData:(id)data toPlayers:(id)players withDataMode:(int)dataMode error:(id*)error;
-(BOOL)sendDataToAllPlayers:(id)allPlayers withDataMode:(int)dataMode error:(id*)error;
-(BOOL)sendInviteData:(id)data error:(id*)error;
-(void)sendVersionData:(unsigned char)data;
-(void)sendVersionData:(unsigned char)data toPeer:(id)peer;
-(void)disconnect;
-(id)voiceChatWithName:(id)name;
-(id)playerFromPeer:(id)peer;
-(id)peerFromPlayer:(id)player;
-(void)queueData:(id)data forPlayer:(id)player;
-(void)sendData:(id)data fromPlayer:(id)player;
-(void)sendQueuedPacketsForPlayer:(id)player;
-(void)deferStateCallbackForPlayer:(id)player state:(int)state;
-(void)updateStateForPlayer:(id)player state:(int)state;
-(void)sendStateCallbackForPlayer:(id)player state:(int)state;
-(void)session:(id)session peer:(id)peer didChangeState:(int)state;
-(void)session:(id)session connectionWithPeerFailed:(id)peerFailed withError:(id)error;
-(void)session:(id)session didFailWithError:(id)error;
-(void)receiveData:(id)data fromPeer:(id)peer inSession:(id)session context:(void*)context;
-(void)relayPushNotification:(id)notification;
-(void)relayPush:(id)push;
-(void)initRelayInfoFromServerResponse:(id)serverResponse forPlayer:(id)player;
-(void)initRelayInfoFromPush:(id)push forPlayer:(id)player;
-(void)updateRelayInfo:(id)info forPlayer:(id)player;
-(void)requestRelayInitForPlayer:(id)player;
-(void)requestRelayUpdateForPlayer:(id)player;
-(void)initRelayInfoFromCallback:(id)callback forPlayer:(id)player;
-(void)updateRelayInfoFromCallback:(id)callback forPlayer:(id)player;
-(void)initRelayConnectionForPlayer:(id)player;
-(void)updateRelayConnectionForPlayer:(id)player;
-(void)acceptRelayResponse:(id)response playerID:(id)anId;
-(void)initRelayResponse:(id)response playerID:(id)anId;
-(void)preemptRelay:(id)relay;
-(BOOL)shouldStartRelay:(id)relay;
-(void)session:(id)session initiateRelay:(id)relay forPeer:(id)peer;
-(void)session:(id)session updateRelay:(id)relay forPeer:(id)peer;
-(id)dataFromBase64String:(id)base64String;
@end
