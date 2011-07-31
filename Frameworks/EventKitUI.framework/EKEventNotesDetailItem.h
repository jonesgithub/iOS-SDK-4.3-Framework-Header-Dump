/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import "EKEventDetailItem.h"

@class UITableViewCell, UITextView;

__attribute__((visibility("hidden")))
@interface EKEventNotesDetailItem : EKEventDetailItem {
@private
	UITableViewCell* _cell;
	UITableViewCell* _moreButtonCell;
	UITextView* _notesView;
}
-(void)reset;
-(BOOL)configureWithCalendar:(id)calendar preview:(BOOL)preview;
-(id)_notesViewForWidth:(float)width;
-(int)numberOfSubitems;
-(float)defaultCellHeightForSubitemAtIndex:(int)index forWidth:(float)width;
-(id)cellForSubitemAtIndex:(int)index;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned)index;
-(id)detailViewControllerWithFrame:(CGRect)frame forSubitemAtIndex:(int)index;
@end
