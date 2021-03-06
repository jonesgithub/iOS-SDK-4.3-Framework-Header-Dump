/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboard.h"
#import "UIView.h"
#import "UIKeyboardImplGeometryDelegate.h"

@class UITextInputTraits, UIImage;

@interface UIKeyboard : UIView <UIKeyboardImplGeometryDelegate> {
	UIImage* m_snapshot;
	UITextInputTraits* m_defaultTraits;
	BOOL m_typingDisabled;
	BOOL m_minimized;
	BOOL m_respondingToImplGeometryChange;
	int m_orientation;
}
@property(assign, nonatomic, getter=isMinimized) BOOL minimized;
@property(assign, nonatomic) BOOL typingEnabled;
+(id)activeKeyboard;
+(void)_clearActiveKeyboard;
+(void)initImplementationNow;
+(void)removeAllDynamicDictionaries;
+(CGSize)defaultSize;
+(CGSize)defaultSizeForInterfaceOrientation:(int)interfaceOrientation;
+(CGRect)defaultFrameForInterfaceOrientation:(int)interfaceOrientation;
+(CGSize)defaultSizeForOrientation:(int)orientation;
+(CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation;
+(CGSize)keyboardSizeForInterfaceOrientation:(int)interfaceOrientation;
-(void)autoAdjustOrientation;
-(void)autoAdjustOrientationForSize:(CGSize)size;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithDefaultSize;
-(void)dealloc;
-(void)setFrame:(CGRect)frame;
-(void)updateLayout;
-(int)orientation;
-(int)interfaceOrientation;
-(BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)prepareForGeometryChange;
-(void)geometryChangeDone:(BOOL)done;
-(void)removeAutocorrectPrompt;
-(void)acceptAutocorrection;
-(void)setCaretBlinks:(BOOL)blinks;
-(void)setCaretVisible:(BOOL)visible;
-(BOOL)returnKeyEnabled;
-(void)setReturnKeyEnabled:(BOOL)enabled;
-(id)defaultTextInputTraits;
-(void)setDefaultTextInputTraits:(id)traits;
-(id)delegate;
-(void)clearSnapshot;
-(void)takeSnapshot;
-(void)activate;
-(BOOL)isActive;
-(void)deactivate;
-(void)movedFromSuperview:(id)superview;
-(void)removeFromSuperview;
-(void)setNeedsDisplay;
-(void)displayLayer:(id)layer;
-(int)textEffectsVisibilityLevel;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)syncMinimizedStateToHardwareKeyboardAttachedState;
-(UIPeripheralAnimationGeometry)geometryForMinimize:(BOOL)minimize;
-(void)minimize;
-(void)maximize;
-(void)keyboardMinMaximized:(id)maximized finished:(id)finished context:(id)context;
-(UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(float)implHeightDelta;
-(void)prepareForImplBoundsHeightChange:(float)implBoundsHeightChange suppressNotification:(BOOL)notification;
-(void)implBoundsHeightChangeDone:(float)done suppressNotification:(BOOL)notification;
-(BOOL)canDismiss;
@end

@interface UIKeyboard (TestingSupport)
-(id)_getCurrentKeyplaneName;
-(id)_getCurrentKeyboardName;
-(id)_getLocalizedInputMode;
-(id)_baseKeyForRepresentedString:(id)representedString;
-(id)_keyplaneForKey:(id)key;
-(void)_changeToKeyplane:(id)keyplane;
-(id)_typeCharacter:(id)character withError:(CGPoint)error shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants4;
-(void)_setInputMode:(id)mode;
-(void)_setAutocorrects:(BOOL)autocorrects;
-(id)_getAutocorrection;
-(void)_acceptCurrentCandidate;
-(void)_clearCurrentInputManager;
-(BOOL)_hasCandidates;
-(int)_positionInCandidateList:(id)candidateList;
-(void)_disableDynamicDictionary:(BOOL)dictionary;
@end

@interface UIKeyboard (UIManualKeyboardAdditions)
-(void)manualKeyboardWillBeOrderedIn;
-(void)manualKeyboardWasOrderedIn;
-(void)manualKeyboardWillBeOrderedOut;
-(void)manualKeyboardWasOrderedOut;
@end

@interface UIKeyboard (UIPeripheralHostAdditions)
-(BOOL)_isAutomaticKeyboard;
@end

