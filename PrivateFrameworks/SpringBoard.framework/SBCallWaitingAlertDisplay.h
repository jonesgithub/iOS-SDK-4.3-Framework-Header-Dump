/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBCallAlertDisplay.h"

@class TPCallWaitingButton, TPPushButton, TPBottomButtonBar;

@interface SBCallWaitingAlertDisplay : SBCallAlertDisplay {
	TPCallWaitingButton* _ignoreButton;
	TPCallWaitingButton* _answerButton;
	TPPushButton* _answerAndReleaseButton;
	TPBottomButtonBar* _animatingBottomBar;
	unsigned _didRelease : 1;
	unsigned _didHeldRelease : 1;
	unsigned _setupForThree : 1;
}
+(id)newBottomBarForInstance:(id)instance;
+(id)_newBottomButtonBarForDisplay:(id)display;
-(id)initWithSize:(CGSize)size;
-(void)dealloc;
-(void)_callCountChanged:(id)changed;
-(void)_callWaitingControlsFaded;
-(void)_setPhoneFlipBackAttribute;
-(void)ignore;
-(void)dismiss;
-(id)additionalURLParameter;
-(void)answerCall:(CTCallRef)call;
-(void)answerAndRelease:(id)release;
-(void)endAllCalls:(id)calls;
-(void)setMiddleContentAlpha:(float)alpha;
-(void)lockBarUnlocked:(id)unlocked;
-(void)_bottomBarSwitchHalfDone;
-(void)_bottomBarSwitchDone;
-(void)updateDesktopImage:(id)image;
-(void)_addCallWaitingButtons:(BOOL)buttons;
@end

