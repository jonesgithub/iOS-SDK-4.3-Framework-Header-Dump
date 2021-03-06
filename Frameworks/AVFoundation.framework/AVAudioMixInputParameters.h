/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class AVAudioMixInputParametersInternal;

@interface AVAudioMixInputParameters : XXUnknownSuperclass <NSCopying, NSMutableCopying> {
@private
	AVAudioMixInputParametersInternal* _inputParameters;
}
@property(readonly, assign, nonatomic) int trackID;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(id)description;
-(id)copyWithZone:(NSZone*)zone;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(void)setTrackID:(int)anId;
-(void)_setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;
-(void)setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;
-(void)setVolume:(float)volume atTime:(XXStruct_pwHToB)time;
-(BOOL)getVolumeRampForTime:(XXStruct_pwHToB)time startVolume:(float*)volume endVolume:(float*)volume3 timeRange:(XXStruct_yD8eWC*)range;
-(void)_setRamps:(id)ramps;
-(id)_audioVolumeCurve;
-(id)_volumeCurveAsString;
@end

