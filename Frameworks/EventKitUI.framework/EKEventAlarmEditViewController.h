/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import "EKEventEditItemViewController.h"
#import "CalendarEventAlarmTableDelegate.h"

@class CalendarEventAlarmTable, EKAlarm;

__attribute__((visibility("hidden")))
@interface EKEventAlarmEditViewController : EKEventEditItemViewController <CalendarEventAlarmTableDelegate> {
@private
	CalendarEventAlarmTable* _table;
	EKAlarm* _alarm;
	int _alarmIndex;
}
@property(assign, nonatomic) int presetIdentifier;
@property(assign, nonatomic) int alarmIndex;
@property(retain, nonatomic) EKAlarm* alarm;
-(id)initWithFrame:(CGRect)frame;
-(void)loadView;
-(void)viewDidUnload;
-(void)dealloc;
-(void)viewDidLoad;
-(id)_table;
-(void)setCustomString:(id)string;
-(BOOL)customSelected;
-(void)alarmTableDidChangeAlarm:(id)alarmTable;
@end

