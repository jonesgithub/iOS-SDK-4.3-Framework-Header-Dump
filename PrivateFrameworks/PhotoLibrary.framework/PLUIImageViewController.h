/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PLPhotoTileViewControllerDelegate.h"
#import "PLImageLoadingQueueDelegate.h"
#import "PLVideoViewDelegate.h"
#import "PhotoLibrary-Structs.h"

@class PLImageCache, NSString, PLImageLoadingQueue, PLImageSource, PLVideoRemaker, UIImage, PLCropOverlay, PLImage, PLPhotoTileViewController, MLPhoto, PLVideoView;

@interface PLUIImageViewController : XXUnknownSuperclass <PLVideoViewDelegate, PLImageLoadingQueueDelegate, PLPhotoTileViewControllerDelegate> {
	MLPhoto* _photo;
	CGImageRef _imageRef;
	UIImage* _image;
	PLImage* _plImage;
	CGRect _cropRect;
	PLCropOverlay* _cropOverlay;
	PLPhotoTileViewController* _imageTile;
	PLVideoView* _videoView;
	PLVideoRemaker* _remaker;
	NSString* _videoPath;
	PLImageCache* _imageCache;
	PLImageLoadingQueue* _imageLoadingQueue;
	PLImageSource* _imageSource;
	int _previousStatusBarMode;
	int _newStatusBarMode;
	unsigned _allowEditing : 1;
	unsigned _statusBarWasHidden : 1;
	unsigned _isVideo : 1;
	unsigned _isDisappearing : 1;
	unsigned _remaking : 1;
}
-(BOOL)_displaysFullScreen;
-(id)initWithPhoto:(id)photo;
-(id)initWithImage:(CGImageRef)image cropRect:(CGRect)rect;
-(id)initWithUIImage:(id)uiimage cropRect:(CGRect)rect;
-(id)initWithImageData:(id)imageData cropRect:(CGRect)rect;
-(id)initWithVideoPath:(id)videoPath;
-(void)dealloc;
-(int)cropOverlayMode;
-(CGRect)previewFrame;
-(CGRect)_viewFrame;
-(unsigned)_contentAutoresizingMask;
-(unsigned)_tileAutoresizingMask;
-(id)useButtonTitle;
-(BOOL)clientIsWallpaper;
-(void)setupNavigationItem;
-(Class)_viewClass;
-(void)loadView;
-(void)setParentViewController:(id)controller;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(int)_imagePickerStatusBarMode;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)setAllowsEditing:(BOOL)editing;
-(void)_editabilityChanged:(id)changed;
-(void)_updateGestureSettings;
-(void)_updateTitles;
-(void)cropOverlayWasCancelled:(id)cancelled;
-(void)didChooseVideoAtPath:(id)path options:(id)options;
-(void)_enableCropOverlayIfNecessary;
-(void)cropOverlayWasOKed:(id)ked;
-(void)cropOverlay:(id)overlay didFinishSaving:(id)saving;
-(void)cropOverlayPlay:(id)play;
-(void)cropOverlayPause:(id)pause;
-(BOOL)videoViewCanCreateMetadata:(id)metadata;
-(BOOL)videoViewShouldDisplayScrubber:(id)videoView;
-(float)videoViewScrubberYOrigin:(id)origin forOrientation:(int)orientation;
-(BOOL)videoViewCanBeginPlayback:(id)playback;
-(id)_trimMessage;
-(void)videoViewIsReadyToBeginPlayback:(id)beginPlayback;
-(void)videoViewDidBeginPlayback:(id)videoView;
-(void)videoViewDidPausePlayback:(id)videoView didFinish:(BOOL)finish;
-(void)videoViewDidEndPlayback:(id)videoView didFinish:(BOOL)finish;
-(void)videoRemakerDidBeginRemaking:(id)videoRemaker;
-(void)videoRemakerDidEndRemaking:(id)videoRemaker temporaryPath:(id)path;
-(BOOL)photoTileViewControllerIsDisplayingLandscape:(id)landscape;
-(void)photoTileViewController:(id)controller willAppear:(BOOL)appear;
-(void)photoTileViewController:(id)controller didDisappear:(BOOL)disappear;
-(int)imageFormat;
-(void)photoTileViewControllerRequestsFullScreenImage:(id)image;
-(void)photoTileViewControllerCancelImageRequests:(id)requests;
-(void)photoTileViewControllerRequestsFullSizeImage:(id)image;
-(void)photoTileViewControllerSingleTap:(id)tap;
-(void)photoTileViewControllerWillBeginGesture:(id)photoTileViewController;
-(void)photoTileViewControllerDidEndGesture:(id)photoTileViewController;
-(BOOL)photoTileViewControllerAllowsEditing:(id)editing;
-(void)imageLoadingQueue:(id)queue didLoadImage:(id)image forObject:(id)object fromSource:(id)source;
@end

