/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CALayer, NSMutableArray, MPVideoView;

@interface MPMovieSnapshotController : XXUnknownSuperclass {
	MPVideoView* _videoView;
	CALayer* _layer;
	NSMutableArray* _pendingSnapshots;
	unsigned _expectingTimeJump : 1;
	unsigned _pendingRestore : 1;
	float _originalTime;
}
-(void)dealloc;
-(void)cancel;
-(void)scheduleSnapshotWithSize:(CGSize)size orientation:(int)orientation time:(float)time delegate:(id)delegate;
-(void)setLayer:(id)layer;
-(void)setVideoView:(id)view;
-(void)_timeDidJump:(id)_time;
-(id)_currentSnapshot;
-(void)_finishSnapshot:(id)snapshot;
-(void)_restoreOriginalTime;
-(void)_startNextSnapshot;
-(void)_takeSnapshot:(id)snapshot;
@end

