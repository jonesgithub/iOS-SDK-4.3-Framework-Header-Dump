/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, PLProgressView, NSString, NSURL, AVRemaker;

@interface PLVideoRemaker : XXUnknownSuperclass {
	NSURL* _sourceURL;
	NSString* _trimmedPath;
	double _duration;
	double _trimStartTime;
	double _trimEndTime;
	int _mode;
	AVRemaker* _remaker;
	float _percentComplete;
	NSTimer* _progressTimer;
	PLProgressView* _progressView;
	id _delegate;
}
+(double)maximumDurationForTrimMode:(int)trimMode;
+(long long)approximateByteSizeForMode:(int)mode duration:(double)duration;
+(int)getHDRemakerModeForMode:(int)mode;
+(int)getSDRemakerModeForMode:(int)mode;
-(id)initWithURL:(id)url;
-(void)dealloc;
-(id)messageForRemakingProgress;
-(id)progressView;
-(id)delegate;
-(void)setDelegate:(id)delegate;
-(double)duration;
-(void)setDuration:(double)duration;
-(int)mode;
-(void)setMode:(int)mode;
-(double)trimStartTime;
-(void)setTrimStartTime:(double)time;
-(double)trimEndTime;
-(void)setTrimEndTime:(double)time;
-(void)_resetProgressTimer;
-(void)_removeProgressTimer;
-(void)_updateProgress;
-(void)remake;
-(void)_didEndRemakingWithTemporaryPath:(id)temporaryPath;
-(void)cancel;
-(void)_remakerDidFinish:(id)_remaker;
@end

