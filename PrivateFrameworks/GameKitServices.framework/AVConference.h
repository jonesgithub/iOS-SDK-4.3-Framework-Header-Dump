/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import "AVConference.h"
#import "GameKitServices-Structs.h"
#import <Foundation/NSMutableIndexSet.h>

@class NSTimer, NSMutableDictionary, NSObject, CALayer;
@protocol AVConferenceDelegate, AVConferenceNotificationObserver;

@interface AVConference : NSMutableIndexSet {
@private
	id opaqueConf;
	BOOL useServer;
	BOOL runningInServer;
	void* serverConnection;
	NSObject<AVConferenceDelegate>* delegate;
	NSObject<AVConferenceNotificationObserver>* genericObserver;
	dispatch_queue_s* notificationQueue;
	NSMutableDictionary* notificationDictionary;
	BOOL testIsRunning;
	BOOL shouldDisplayNetworkQualityGraph_;
	CALayer* networkQualityGraphLayer_;
	NSTimer* networkQualityUpdateTimer_;
}
@property(assign) NSObject<AVConferenceDelegate>* delegate;
@property(assign) NSObject<AVConferenceNotificationObserver>* genericObserver;
@property(assign) BOOL shouldDisplayNetworkQualityGraph;
@property(retain) CALayer* networkQualityGraphLayer;
@property(retain) NSTimer* networkQualityUpdateTimer;
@property(readonly, assign) BOOL natType;
@property(assign, nonatomic) unsigned orientation;
@property(assign, nonatomic) unsigned cameraType;
@property(assign, getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property(readonly, assign) int remoteFrameWidth;
@property(readonly, assign) int remoteFrameHeight;
@property(readonly, assign) int localFrameWidth;
@property(readonly, assign) int localFrameHeight;
@property(readonly, assign) double roundTripTime;
@property(readonly, assign) double localPacketLossRate;
@property(readonly, assign) double remotePacketLossRate;
@property(readonly, assign, getter=getRemoteBitrate) double remoteBitrate;
@property(readonly, assign, getter=getRemoteFramerate) double remoteFramerate;
@property(readonly, assign, getter=getLocalBitrate) double localBitrate;
@property(readonly, assign, getter=getLocalFramerate) double localFramerate;
@property(assign) void* remoteVideoBackLayer;
@property(assign) void* remoteVideoLayer;
@property(assign) void* localVideoBackLayer;
@property(assign) void* localVideoLayer;
@property(assign, nonatomic) BOOL requiresWifi;
@property(readonly, assign) float inputMeterLevel;
@property(readonly, assign) float outputMeterLevel;
@property(assign, nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property(assign, nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property(assign, nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;
@property(assign, getter=isUsingViceroyBlobFormat) BOOL useViceroyBlobFormat;
+(short)addressPointerFromBlob:(id)blob;
+(id)externalAddressForSelfConnectionBlob:(id)selfConnectionBlob;
+(void)startAudioSession;
+(void)stopAudioSession;
-(void)listenForNotifications;
-(void)stopListeningForNotifications;
-(void)updateGKSConnectivitySettings;
-(void)handleGKSConnectivitySettingsUpdate:(id)update;
-(id)init;
-(void)warmupForCall;
-(void)testIsPausedProc:(id)proc;
-(id)initWithFlags:(int)flags;
-(void)dealloc;
-(void)setSetSessionID:(id)anId forCallID:(int)callID;
-(void)addGKSCallEvent:(id)event sessionID:(id)anId;
-(id)connectionBlobForParticipantID:(id)participantID callID:(int*)anId error:(id*)error;
-(void)setPeerCN:(id)cn callID:(int)anId;
-(double)networkQualityForCallID:(int)callID;
-(id)convertBlobtoOldBlob:(id)blob;
-(id)convertBlobtoNewBlob:(id)blob;
-(BOOL)startConnectionWithParticipantID:(id)participantID callID:(int)anId usingBlob:(id)blob isCaller:(BOOL)caller capabilities:(id)capabilities error:(id*)error;
-(BOOL)startConnectionWithParticipantID:(id)participantID callID:(int)anId connectionID:(id)anId3 usingBlob:(id)blob isCaller:(BOOL)caller capabilities:(id)capabilities error:(id*)error;
-(void)stopCallID:(int)anId;
-(void)remoteCancelledCallID:(int)anId;
-(BOOL)setActive:(BOOL)active;
-(void)receivedRealTimeData:(id)data fromParticipantID:(id)participantID;
-(BOOL)getIsAudioPaused:(BOOL*)paused callID:(int)anId error:(id*)error;
-(BOOL)getIsVideoPaused:(BOOL*)paused callID:(int)anId error:(id*)error;
-(float)networkQuality;
-(BOOL)updateNetworkQualityGraph;
-(void)startNetworkQualityUpdateTimer;
-(void)stopNetworkQualityUpdateTimer;
-(id)statsForCallID:(int)callID;
-(int)getRemoteVideoSlot:(BOOL)slot;
-(int)getLocalVideoSlot:(BOOL)slot;
-(BOOL)startPreviewWithError:(id*)error;
-(BOOL)startPreview:(BOOL)preview withError:(id*)error;
-(void)stopPreview;
-(BOOL)setPauseAudio:(BOOL)audio callID:(int)anId error:(id*)error;
-(void)applyServerInfo:(id)info;
-(BOOL)setPauseVideo:(BOOL)video callID:(int)anId error:(id*)error;
-(BOOL)setServerInfo:(id)info;
-(unsigned)doBlockingConnectionCheck;
-(void)videoConference:(id)conference didStartSession:(BOOL)session withCallID:(int)callID error:(id)error;
-(void)videoConference:(id)conference didStopWithCallID:(int)callID error:(id)error;
-(void)videoConference:(id)conference updateInputMeterLevel:(float)level;
-(void)videoConference:(id)conference updateOutputMeterLevel:(float)level;
-(id)localDisplayNameForCallID:(int)callID;
-(id)remoteDisplayNameForCallID:(int)callID;
-(void)videoConference:(id)conference notificationEvent:(id)event;
-(void)processRelayRequestResponse:(int)response responseDict:(id)dict didOriginateRequest:(BOOL)request;
-(void)processRelayUpdate:(int)update updateDict:(id)dict didOriginateRequest:(BOOL)request;
-(void)processCancelRelayRequest:(int)request cancelDict:(id)dict didOriginateRequest:(BOOL)request3;
@end

@interface AVConference (Private)
-(void)processServerSideApplicationQuery:(id)query responseDict:(id*)dict;
-(void)processApplicationQuery:(id)query responseDict:(id*)dict;
-(void)addTransaction:(id)transaction outputDictionary:(id*)dictionary;
@end

