/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AVFoundation-Structs.h"
#import "AVAssetExportSession.h"

@class AVVideoComposition, NSString, NSArray, AVAssetExportSessionInternal, NSError, AVAudioMix, NSURL;

@interface AVAssetExportSession : XXUnknownSuperclass {
@private
	AVAssetExportSessionInternal* _exportSession;
}
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;
@property(copy, nonatomic) AVVideoComposition* videoComposition;
@property(copy, nonatomic) AVAudioMix* audioMix;
@property(assign, nonatomic) long long fileLengthLimit;
@property(copy, nonatomic) NSArray* metadata;
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;
@property(readonly, assign, nonatomic) XXStruct_pwHToB maxDuration;
@property(readonly, assign, nonatomic) float progress;
@property(readonly, assign, nonatomic) NSError* error;
@property(readonly, assign, nonatomic) int status;
@property(copy, nonatomic) NSURL* outputURL;
@property(copy, nonatomic) NSString* outputFileType;
@property(readonly, assign, nonatomic) NSArray* supportedFileTypes;
@property(readonly, assign, nonatomic) NSString* presetName;
+(id)allExportPresets;
+(id)exportPresetsCompatibleWithAsset:(id)asset;
+(id)exportSessionWithAsset:(id)asset presetName:(id)name;
-(id)init;
-(id)initWithAsset:(id)asset presetName:(id)name;
-(id)retain;
-(void)release;
-(void)dealloc;
-(void)finalize;
-(id)description;
-(void)_updateProgress;
-(void)exportAsynchronouslyWithCompletionHandler:(id)completionHandler;
-(void)cancelExport;
@end

@interface AVAssetExportSession (AVAssetExportSession_Local)
+(id)_utTypesForPresets;
+(id)_settingForPreset:(id)preset;
+(id)_figRemakerNotificationNames;
-(void)_handleFigRemakerNotification:(id)notification;
-(void)_handleFigRemakerNotificationAsync:(id)async;
-(id)_actualPresetName;
-(void)_transitionToStatus:(int)status error:(id)error;
-(void)_removeListeners;
-(void)_addListeners;
-(CGSize)_getSourceDimension;
-(int)_getTrackCountOfType:(id)type checkEnabled:(BOOL)enabled;
-(BOOL)_hasProtectedNonAudioVideoTracks;
-(BOOL)_totalSizeOfTracksIsWithinFileLengthLimit:(id)tracksIsWithinFileLengthLimit forSetting:(id)setting;
-(BOOL)_canPassThroughAudio:(id)audio checkEnabled:(BOOL)enabled checkProtected:(BOOL)aProtected;
-(id)_settingForFigRemaker;
-(BOOL)_canPassThroughVideo:(id)video checkEnabled:(BOOL)enabled checkAll:(BOOL)all checkProtected:(BOOL)aProtected;
-(OpaqueFigRemaker*)_createFigRemaker;
@end
