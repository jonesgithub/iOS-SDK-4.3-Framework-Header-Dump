/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "NSObject.h"


@protocol EKDayViewDataSource <NSObject>
-(unsigned)dayView:(id)view numberOfEventsInSection:(int)section;
-(id)dayView:(id)view startDateForItemPath:(id)itemPath;
-(id)dayView:(id)view endDateForItemPath:(id)itemPath;
-(double)dayView:(id)view durationForItemPath:(id)itemPath;
-(id)dayView:(id)view occurrenceViewForItemPath:(id)itemPath;
@end
