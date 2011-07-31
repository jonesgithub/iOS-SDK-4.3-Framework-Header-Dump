/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSObject.h"


@protocol UIMovieScrubberTrackViewDataSource <NSObject>
-(double)movieScrubberTrackViewDuration:(id)duration;
-(id)movieScrubberTrackView:(id)view evenlySpacedTimestamps:(int)timestamps startingAt:(id)at endingAt:(id)at4;
-(id)movieScrubberTrackView:(id)view timestampsStartingAt:(id)at endingAt:(id)at3 maxCount:(int)count;
-(float)movieScrubberTrackViewThumbnailAspectRatio:(id)ratio;
-(void)movieScrubberTrackView:(id)view requestThumbnailImageForTimestamp:(id)timestamp;
@end
