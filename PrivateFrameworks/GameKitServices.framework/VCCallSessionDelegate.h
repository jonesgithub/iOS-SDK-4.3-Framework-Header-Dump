/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import "GameKitServices-Structs.h"


@protocol VCCallSessionDelegate
-(void)session:(id)session didStart:(BOOL)start connectionType:(unsigned)type error:(id)error;
-(void)session:(id)session didStopWithDelay:(int)delay error:(id)error;
-(void)session:(id)session didStopWithError:(id)error;
-(bool)startVideoIO:(id*)io rtpVideo:(tagHANDLE*)video rtpAudio:(tagHANDLE*)audio actualVideoPayload:(int)payload enableUEP:(BOOL)uep enableControlByte:(BOOL)byte featuresListString:(char*)string;
-(bool)stopVideoIO:(BOOL)io error:(id*)error;
-(id)localDisplayNameForCallID:(int)callID;
-(id)remoteDisplayNameForCallID:(int)callID;
-(void)remoteAudioDidPause:(BOOL)remoteAudio callID:(int)anId;
-(void)remoteVideoDidPause:(BOOL)remoteVideo callID:(int)anId;
-(void)session:(id)session inititiateRelayRequest:(id)request;
-(void)session:(id)session sendRelayResponse:(id)response;
-(void)session:(id)session cancelRelayRequest:(id)request;
-(void)session:(id)session receivedNoPacketsForSeconds:(double)seconds;
-(bool)didDetectBandwidth:(BOOL)bandwidth upstreamBandwidth:(int)bandwidth2 downstreamBandwidth:(int)bandwidth3;
@end

