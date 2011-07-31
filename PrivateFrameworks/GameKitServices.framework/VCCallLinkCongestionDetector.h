/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VCCallLinkCongestionDetector : XXUnknownSuperclass {
@private
	BOOL isLinkCongested;
	double rttThreshold;
	double lossRateThreshold;
}
@property(assign, nonatomic) BOOL isLinkCongested;
-(id)initWithRTTThreshold:(double)rttthreshold lossRateThreshold:(double)threshold;
-(void)addNewRTT:(double)rtt packetLossRate:(double)rate timestamp:(double)timestamp;
@end
