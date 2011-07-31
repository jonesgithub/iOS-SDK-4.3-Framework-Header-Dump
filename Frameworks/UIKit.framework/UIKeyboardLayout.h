/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIKeyboardLayoutProtocol.h"

@class NSMutableArray, UITouch;

@interface UIKeyboardLayout : UIView <UIKeyboardLayoutProtocol> {
	NSMutableArray* _uncommittedTouches;
	UITouch* _activeTouch;
	UITouch* _shiftKeyTouch;
	UITouch* _swipeTouch;
	int _orientation;
	int m_orientation;
}
@property(retain, nonatomic) UITouch* activeTouch;
@property(retain, nonatomic) UITouch* shiftKeyTouch;
@property(retain, nonatomic) UITouch* swipeTouch;
@property(assign) int orientation;
-(void)swipeGestureRecognized:(id)recognized;
-(void)addSwipeRecognizer;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)showKeyboardType:(int)type withAppearance:(int)appearance;
-(void)deactivateActiveKeys;
-(void)updateReturnKey;
-(void)updateLocalizedKeys;
-(BOOL)usesAutoShift;
-(void)setShift:(BOOL)shift;
-(void)setAutoshift:(BOOL)autoshift;
-(BOOL)isShiftKeyBeingHeld;
-(BOOL)isShiftKeyPlaneChooser;
-(BOOL)doesKeyCharging;
-(BOOL)shiftKeyRequiresImmediateUpdate;
-(void)longPressAction;
-(void)didClearInput;
-(BOOL)performReturnAction;
-(id)candidateList;
-(void)setLabel:(id)label forKey:(id)key;
-(void)setTarget:(id)target forKey:(id)key;
-(void)setAction:(SEL)action forKey:(id)key;
-(void)setLongPressAction:(SEL)action forKey:(id)key;
-(void)restoreDefaultsForKey:(id)key;
-(void)restoreDefaultsForAllKeys;
-(id)activationIndicatorView;
-(BOOL)shouldShowIndicator;
-(BOOL)canProduceString:(id)string;
-(void)touchDown:(id)down;
-(void)touchDragged:(id)dragged;
-(void)touchUp:(id)up;
-(void)touchCancelled:(id)cancelled;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)commitTouchesBeforeTouch:(id)touch;
-(void)phraseBoundaryDidChange;
-(float)hitBuffer;
-(float)flickDistance;
-(id)baseKeyForString:(id)string;
-(id)keyplaneForKey:(id)key;
-(void)changeToKeyplane:(id)keyplane;
-(id)simulateTouchForCharacter:(id)character errorVector:(CGPoint)vector shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants4;
@end
