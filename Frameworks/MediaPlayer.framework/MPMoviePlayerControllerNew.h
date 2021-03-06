/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaPlayback.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSMutableArray, MPMovieView, MPMoviePlayerController, MPVideoViewController, NSArray, NSError;

@interface MPMoviePlayerControllerNew : XXUnknownSuperclass <MPMediaPlayback> {
@private
	MPMoviePlayerController* _moviePlayer;
	MPVideoViewController* _videoViewController;
	MPMovieView* _movieView;
	NSArray* _movies;
	NSMutableArray* _queuedThumbnailRequests;
	float _currentPlaybackRate;
	unsigned _stateBeforeSettingPlaybackTime;
	int _movieSourceType;
	int _controlStyle;
	int _repeatMode;
	BOOL _shouldAutoplay;
	BOOL _useApplicationAudioSession;
	BOOL _setUseApplicationAudioSessionWhenPlaybackEnds;
	BOOL _preparedQueue;
	BOOL _didAppear;
	BOOL _ignorePlaybackStateChanges;
	BOOL _playWhenSourceTypeIsDetermined;
	BOOL _prepareWhenSourceTypeIsDetermined;
	BOOL _isChangingMoviePath;
	BOOL _wasPlayingBeforeSuspended;
	BOOL _canPostDidFinishNotificationOnItemChange;
	BOOL _didPostDidFinishNotification;
	BOOL _shouldRestartPlaybackFromBeginning;
	NSError* _playbackError;
	double _initialPlaybackTime;
	double _endPlaybackTime;
	NSMutableDictionary* _timedMetadataForUniqueKey;
	BOOL _isActive;
	BOOL _isResigningActive;
	BOOL _didResignActive;
	BOOL _canShowControlsOverlayBeforeResignedActive;
	double _timeWhenResignedActive;
	unsigned _movieIndexWhenResignedActive;
}
@property(readonly, assign, nonatomic) BOOL isPreparedToPlay;
@property(assign, nonatomic) double currentPlaybackTime;
@property(assign, nonatomic) float currentPlaybackRate;
-(id)init;
-(void)dealloc;
-(id)contentURL;
-(void)setContentURL:(id)url;
-(id)view;
-(id)backgroundView;
-(int)playbackState;
-(int)loadState;
-(void)setScalingMode:(int)mode;
-(int)scalingMode;
-(void)setControlStyle:(int)style;
-(int)controlStyle;
-(void)setRepeatMode:(int)mode;
-(int)repeatMode;
-(void)setShouldAutoplay:(BOOL)autoplay;
-(BOOL)shouldAutoplay;
-(void)setUseApplicationAudioSession:(BOOL)session;
-(void)setFullscreen:(BOOL)fullscreen;
-(void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;
-(void)setAllowsAirPlay:(BOOL)play;
-(BOOL)allowsAirPlay;
-(BOOL)isFullscreen;
-(void)prepareToPlay;
-(void)play;
-(void)pause;
-(void)stop;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(int)movieMediaTypes;
-(void)setMovieSourceType:(int)type;
-(int)movieSourceType;
-(double)duration;
-(double)playableDuration;
-(CGSize)naturalSize;
-(void)setInitialPlaybackTime:(double)time;
-(double)initialPlaybackTime;
-(void)setEndPlaybackTime:(double)time;
-(double)endPlaybackTime;
-(void)movieView:(id)view willMoveToWindow:(id)window;
-(void)movieViewDidMoveToWindow:(id)movieView;
-(BOOL)videoControllerShouldAutohide:(id)videoController;
-(void)videoControllerWillEnterFullscreen:(id)videoController;
-(void)videoControllerDidEnterFullscreen:(id)videoController;
-(void)videoControllerWillExitFullscreen:(id)videoController;
-(void)videoControllerDidExitFullscreen:(id)videoController;
-(void)viewControllerRequestsExit:(id)exit reason:(int)reason;
-(BOOL)videoController:(id)controller tappedButtonPart:(unsigned)part;
-(void)_itemDidChangeNotification:(id)_item;
-(void)_itemReadyToPlayNotification:(id)playNotification;
-(void)_itemPlaybackDidEndNotification:(id)_itemPlayback;
-(void)_itemPlaybackErrorNotification:(id)notification;
-(void)_bufferingStateDidChangeNotification:(id)_bufferingState;
-(void)_playbackStateDidChangeNotification:(id)_playbackState;
-(void)_timedMetadataAvailableNotification:(id)notification;
-(void)_timedMetadataImageAvailableNotification:(id)notification;
-(void)_timeDidJumpNotification:(id)_time;
-(void)_videoViewScaleModeDidChangeNotification:(id)_videoViewScaleMode;
-(void)_videoViewPathWillChangeNotification:(id)_videoViewPath;
-(void)_moviePlayerWillBecomeActiveNotification:(id)_moviePlayer;
-(void)_moviePlayerDidBecomeActiveNotification:(id)_moviePlayer;
-(void)_movieTypeAvailableNotification:(id)notification;
-(void)_movieSourceTypeAvailableNotification:(id)notification;
-(void)_movieDurationAvailableNotification:(id)notification;
-(void)_movieNaturalSizeAvailableNotification:(id)notification;
-(void)_willResignActiveNotification:(id)notification;
-(void)_didBecomeActiveNotification:(id)notification;
-(void)_willTerminateNotification:(id)notification;
-(void)_windowOrientationChangingNotification:(id)notification;
-(void)_simpleRemoteNotification:(id)notification;
-(BOOL)_shouldContinuePlaybackInBackground;
-(id)_videoView;
-(id)_videoViewController;
-(void)setBackgroundColor:(id)color;
-(void)setMovieControlMode:(int)mode;
-(void)_setMovies:(id)movies;
-(id)_movies;
-(void)_setNowPlayingMovie:(id)movie;
-(id)_nowPlayingMovie;
-(void)_setMoviePlayer:(id)player;
-(void)_ensureActive;
-(void)_resignActive;
-(void)_prepareToPlayWithStartIndex:(unsigned)startIndex;
-(void)_setUseApplicationAudioSession:(BOOL)session;
-(void)_pausePlaybackForSuspension;
-(void)_clearPlaybackStateAfterTimeJumpIfNecessary;
-(void)_postNotificationName:(id)name object:(id)object;
-(void)_postNotificationName:(id)name object:(id)object userInfo:(id)info;
-(void)_postDidFinishNotificationWithUserInfo:(id)_post;
-(void)_restartPlaybackFromBeginning;
-(BOOL)_canContinuePlayingWhenLocked;
-(id)thumbnailImageAtTime:(double)time timeOption:(int)option;
-(void)requestThumbnailImagesAtTimes:(id)times timeOption:(int)option;
-(void)cancelAllThumbnailImageRequests;
-(void)_itemDidGenerateCGImage:(id)_item;
-(id)timedMetadata;
-(id)timedMetadataForKey:(id)key;
-(id)accessLog;
-(id)errorLog;
@end

