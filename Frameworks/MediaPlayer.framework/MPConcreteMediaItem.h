/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaItem.h"

@class NSNumber, NSArray, MPMediaLibrary;

@interface MPConcreteMediaItem : MPMediaItem {
@private
	unsigned long long _persistentID;
	MPMediaLibrary* _library;
	NSNumber* _physicalOrder;
	NSArray* _chapters;
}
-(id)init;
-(id)initWithPersistentID:(unsigned long long)persistentID;
-(id)initWithPersistentID:(unsigned long long)persistentID physicalOrder:(id)order library:(id)library;
-(void)dealloc;
-(id)description;
-(BOOL)isEqual:(id)equal;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(BOOL)existsInLibrary;
-(id)mediaLibrary;
-(unsigned long long)persistentID;
-(id)valueForProperty:(id)property;
-(void)setValue:(id)value forProperty:(id)property;
-(void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;
-(void)reallyIncrementPlayCount;
-(void)markNominalAmountHasBeenPlayed;
-(double)nominalHasBeenPlayedThreshold;
-(void)noteWasPlayedToTime:(double)time skipped:(BOOL*)skipped;
-(void)incrementSkipCount;
-(void)clearBookmarkTime;
-(void)setCachedPhysicalOrder:(long long)order;
-(void)incrementPlayCountForPlayingToEnd;
-(BOOL)incrementPlayCountForStopTime:(double)stopTime;
@end

