/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPViewController.h"
#import "MediaPlayer-Structs.h"
#import "MPSwipableViewDelegate.h"
#import "UIModalViewDelegate.h"
#import "MPVideoTransferViewController.h"

@class MPImageCacheRequest, UIProgressIndicator, MPSwipableView, UIAlertView, UIView, UIImage, MPTVOutWindow, MPVideoBackgroundView, UIColor, MPVideoView;

@interface MPVideoViewController : MPViewController <MPSwipableViewDelegate, MPVideoTransferViewController, UIModalViewDelegate> {
	MPVideoBackgroundView* _backgroundView;
	MPSwipableView* _backstopView;
	unsigned _desiredParts;
	unsigned _disabledParts;
	unsigned _visibleParts;
	unsigned _tvOutEnabled : 1;
	unsigned _allowsTVOutInBackground : 1;
	unsigned _itemTypeOverride;
	unsigned _scaleMode;
@private
	UIAlertView* _alertSheet;
	MPImageCacheRequest* _artworkImageRequest;
	UIColor* _backstopColor;
	UIProgressIndicator* _loadingIndicator;
	MPTVOutWindow* _tvOutWindow;
	int _artworkImageStyle;
	UIImage* _posterImage;
	unsigned _canAnimateControlsOverlay : 1;
	unsigned _canShowControlsOverlay : 1;
	unsigned _disableControlsAutohide : 1;
	unsigned _ownsStatusBar : 1;
	unsigned _ownsVideoView : 1;
	unsigned _playAfterPop : 1;
	unsigned _scheduledLoadingIndicator : 1;
	unsigned _displayPlaybackErrorAlerts : 1;
	unsigned _allowsDetailScrubbing : 1;
	unsigned _attemptAutoPlayWhenControlsHidden : 1;
	unsigned _alwaysAllowHidingControlsOverlay : 1;
	unsigned _hasShownFirstVideoFrame : 1;
	unsigned _allowsWirelessPlayback : 1;
	unsigned _disableAutoRotation : 1;
	unsigned _inlinePlaybackUsesTVOut : 1;
}
@property(assign, nonatomic) unsigned desiredParts;
@property(assign, nonatomic) unsigned disabledParts;
@property(assign, nonatomic) unsigned scaleMode;
@property(assign, nonatomic) unsigned visibleParts;
@property(retain, nonatomic) UIColor* backstopColor;
@property(assign, nonatomic) unsigned itemTypeOverride;
@property(assign, nonatomic) int artworkImageStyle;
@property(retain, nonatomic) UIImage* posterImage;
@property(readonly, assign, nonatomic) UIView* backgroundView;
@property(readonly, assign, nonatomic) BOOL canShowQTAudioOnlyUI;
@property(assign, nonatomic) BOOL alwaysAllowHidingControlsOverlay;
@property(assign, nonatomic) BOOL controlsOverlayVisible;
@property(assign, nonatomic) BOOL disableControlsAutohide;
@property(assign, nonatomic) BOOL canShowControlsOverlay;
@property(assign, nonatomic) BOOL canAnimateControlsOverlay;
@property(assign, nonatomic) BOOL inhibitOverlay;
@property(readonly, assign) CGRect backgroundViewSnapshotFrame;
@property(readonly, assign, nonatomic) BOOL showArtworkForTVOut;
@property(readonly, assign, nonatomic) BOOL showArtworkInImageView;
@property(readonly, assign, nonatomic) UIView* artworkImageView;
@property(readonly, assign, nonatomic, getter=isTransitioningFromFullscreen) BOOL transitioningFromFullscreen;
@property(readonly, assign, nonatomic, getter=isTransitioningToFullscreen) BOOL transitioningToFullscreen;
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;
@property(assign, nonatomic) BOOL inlinePlaybackUsesTVOut;
@property(assign, nonatomic) BOOL disableAutoRotation;
@property(assign, nonatomic) BOOL allowsWirelessPlayback;
@property(assign, nonatomic) BOOL attemptAutoPlayWhenControlsHidden;
@property(assign, nonatomic) BOOL allowsDetailScrubbing;
@property(assign, nonatomic) BOOL displayPlaybackErrorAlerts;
@property(readonly, assign, nonatomic) BOOL viewControllerWillRequestExit;
@property(readonly, retain, nonatomic) MPVideoView* videoView;
@property(assign, nonatomic) BOOL allowsTVOutInBackground;
@property(assign, nonatomic) BOOL TVOutEnabled;
@property(assign, nonatomic) BOOL ownsStatusBar;
@property(readonly, assign, nonatomic) BOOL canChangeScaleMode;
+(BOOL)isPlayingToTVOut;
+(BOOL)supportsFullscreenDisplay;
+(CGRect)calculateArtworkImageViewFrameInRect:(CGRect)rect;
+(id)sharedVideoView:(BOOL)view;
-(id)init;
-(void)dealloc;
-(BOOL)canHideOverlay:(BOOL)overlay;
-(void)showAlternateTracksController:(id)controller;
-(void)showChaptersControllerAndFadeViews:(id)views;
-(void)showChaptersController;
-(void)_updateIdleTimerDisabledFromPlaybackState:(unsigned)playbackState;
-(void)crossedArtworkTimeMarker:(id)marker;
-(BOOL)isFullscreenForLayoutPurposes;
-(int)displayArtworkImageStyle;
-(CGRect)calculateFullScreenArtworkImageViewFrame;
-(CGRect)calculateArtworkImageViewFrame;
-(unsigned)_itemTypeWithActualTypePreference;
-(void)setOrientation:(int)orientation animate:(BOOL)animate;
-(void)reloadArtworkImageView;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)_updateAlwaysPlayWheneverPossible;
-(void)setItem:(id)item;
-(void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;
-(void)setScaleMode:(unsigned)mode animated:(BOOL)animated;
-(void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;
-(unsigned)visiblePartsForProposedParts:(unsigned)proposedParts;
-(void)toggleScaleMode:(BOOL)mode;
-(void)setControlsNeedLayout;
-(void)loadView;
-(void)viewDidUnload;
-(void)noteIgnoredChangeTypes:(unsigned)types;
-(void)removeChildViewController:(id)controller;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;
-(BOOL)infoOverlayShouldDisplayQueuePositionUI:(id)infoOverlay;
-(void)chapterList:(id)list selectedChapter:(unsigned)chapter;
-(void)chapterListDidDisappear:(id)chapterList;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)_videoView_applicationDidEnterBackgroundNotification:(id)_videoView_application;
-(void)_videoView_applicationSuspendedNotification:(id)notification;
-(void)_videoView_applicationWillEnterForegroundNotification:(id)_videoView_application;
-(void)_videoView_availableRoutesDidChangeNotification:(id)_videoView_availableRoutes;
-(void)_videoView_batteryStateDidChangeNotification:(id)_videoView_batteryState;
-(void)_videoView_destinationDidChangeNotification:(id)_videoView_destination;
-(void)_videoView_effectiveScaleModeChangedNotification:(id)notification;
-(void)_videoView_playbackErrorNotification:(id)notification;
-(void)_exitPlayerForPlaybackError;
-(void)_videoView_playbackStateChangedNotification:(id)notification;
-(void)_videoView_resumeEventsOnlyNotification:(id)notification;
-(void)_videoView_scaleModeChangedNotification:(id)notification;
-(void)_videoView_sizeChangedNotification:(id)notification;
-(void)_videoView_timedImageMetadataAvailableNotification:(id)notification;
-(void)_videoView_tvOutCapabilityDidChangeNotification:(id)_videoView_tvOutCapability;
-(void)_videoView_validityChangedNotification:(id)notification;
-(void)videoView_itemTypeAvailableNotification:(id)notification;
-(void)_firstVideoFrameDisplayedNotification:(id)notification;
-(void)_delayedUpdateBackgroundView;
-(void)_updateBackgroundView:(BOOL)view;
-(void)bufferingStateChangedNotification:(id)notification;
-(void)_popForTimeJump:(id)timeJump;
-(void)_screenDidConnect:(id)_screen;
-(void)_screenDidDisconnect:(id)_screen;
-(void)_itemDurationDidChange:(id)_itemDuration;
-(void)_delayedPopForTimeJump;
-(void)_delayedShowLoading;
-(void)tearDownTVOutWindow;
-(void)displayFreshVideoViewContents;
-(void)displayVideoView;
-(void)displayVideoViewOnScreen;
-(void)displayVideoViewOnTV;
-(void)handleScaleModeChange;
-(void)_showStillFrameIfNotAlreadyPlaying;
-(void)_scheduleLoadingIndicatorIfNeeded;
-(void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate;
-(void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;
-(void)setOwnsVideoView:(BOOL)view;
-(id)newAlternateTracksTransition;
-(id)createChapterFlipTransition;
-(void)backgroundViewDidUpdate;
-(unsigned)disabledPartsForProposedParts:(unsigned)proposedParts;
-(void)_cancelArtworkImageRequest;
-(BOOL)_canEnableAirPlayVideoRoutes;
-(void)_enableAirPlayVideoRoutesIfNecessary;
-(void)_hideLoadingIndicator;
-(BOOL)_showDestinationPlaceholder;
-(void)_updateProgressControlForItem:(id)item;
@end
