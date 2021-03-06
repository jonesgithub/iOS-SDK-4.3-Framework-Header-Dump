/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

#import "NSObject.h"


@protocol UIAlertViewDelegate <NSObject>
@optional
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)alertViewCancel:(id)cancel;
-(void)willPresentAlertView:(id)view;
-(void)didPresentAlertView:(id)view;
-(void)alertView:(id)view willDismissWithButtonIndex:(int)buttonIndex;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
@end

