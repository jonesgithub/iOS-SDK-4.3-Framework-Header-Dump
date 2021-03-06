/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import "ADAlertView.h"

@class NSString, NSURLAuthenticationChallenge;

@interface ADAuthenticationAlertView : ADAlertView {
	NSURLAuthenticationChallenge* _challenge;
	NSString* _userName;
}
@property(readonly, assign, nonatomic) NSURLAuthenticationChallenge* challenge;
@property(readonly, assign, nonatomic) NSString* userName;
-(void)dealloc;
-(id)initWithChallenge:(id)challenge userName:(id)name;
-(void)showIfNeeded;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
@end

