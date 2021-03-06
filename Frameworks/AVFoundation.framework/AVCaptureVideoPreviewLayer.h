/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVCaptureSession, NSString, AVCaptureVideoPreviewLayerInternal;

@interface AVCaptureVideoPreviewLayer : XXUnknownSuperclass {
	AVCaptureVideoPreviewLayerInternal* _internal;
}
@property(assign, nonatomic, getter=isMirrored) BOOL mirrored;
@property(assign, nonatomic) BOOL automaticallyAdjustsMirroring;
@property(readonly, assign, nonatomic, getter=isMirroringSupported) BOOL mirroringSupported;
@property(assign, nonatomic) int orientation;
@property(readonly, assign, nonatomic, getter=isOrientationSupported) BOOL orientationSupported;
@property(copy) NSString* videoGravity;
@property(retain, nonatomic) AVCaptureSession* session;
+(void)initialize;
+(id)layerWithSession:(id)session;
-(void)centerSublayer;
-(id)initWithSession:(id)session;
-(id)initWithLayer:(id)layer;
-(void)dealloc;
-(void)setBounds:(CGRect)bounds;
-(void)layoutSublayers;
-(id)subLayer;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(BOOL)isPaused;
-(void)setPaused:(BOOL)paused;
-(void)layerDidBecomeVisible:(BOOL)layer;
-(void)setHidden:(BOOL)hidden;
-(void)didStartForSession:(id)session;
-(void)didStopForSession:(id)session error:(id)error;
-(id)_applyOverridesToCaptureOptions:(id)captureOptions;
-(id)activeConnections;
-(id)connections;
-(id)connectionMediaTypes;
-(id)addConnection:(id)connection error:(id*)error;
-(void)removeConnection:(id)connection;
-(BOOL)canAddConnectionForMediaType:(id)mediaType;
-(id)notReadyError;
@end

