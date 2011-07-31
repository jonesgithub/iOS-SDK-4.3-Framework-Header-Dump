/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSPredefinedValue.h"
#import "ICSStatusValue.h"


@interface ICSStatusValue : ICSPredefinedValue {
}
+(id)statusTypeFromCode:(int)code;
@end

@interface ICSStatusValue (ICSWriter)
-(void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;
@end

@interface ICSStatusValue (iCalendarImport)
+(id)statusValueFromICSString:(id)icsstring;
@end
