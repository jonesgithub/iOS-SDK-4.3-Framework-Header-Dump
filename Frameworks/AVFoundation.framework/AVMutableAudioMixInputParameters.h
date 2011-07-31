/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAudioMixInputParameters.h"

@class AVMutableAudioMixInputParametersInternal;

@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters {
@private
	AVMutableAudioMixInputParametersInternal* _mutableInputParameters;
}
@property(assign, nonatomic) int trackID;
+(id)audioMixInputParametersWithTrack:(id)track;
+(id)audioMixInputParameters;
-(void)setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;
-(void)setVolume:(float)volume atTime:(XXStruct_pwHToB)time;
@end
