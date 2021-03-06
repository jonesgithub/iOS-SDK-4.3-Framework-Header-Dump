/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"

@class NSMutableArray, UILongPressGestureRecognizer, UITextChecker, UITapGestureRecognizer, UIFieldEditor, NSMutableSet, UIView;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UITextInteractionAssistant : XXUnknownSuperclass {
@private
	UIView<UITextSelectingContainer>* _view;
	NSMutableArray* _recognizers;
	NSMutableSet* _linkGestures;
	UILongPressGestureRecognizer* _loupeGesture;
	UITapGestureRecognizer* _singleTapGesture;
	int _autoscrollRamp;
	float _autoscrollFactor;
	CGPoint _autoscrollBasePoint;
	CGPoint _autoscrollUntransformedExtentPoint;
	CGPoint _loupeGestureEndPoint;
	UITextChecker* _textChecker;
	BOOL _inGesture;
	BOOL _autoscrolled;
	BOOL _isTryingToHighlightLink;
}
@property(retain, nonatomic) UILongPressGestureRecognizer* loupeGesture;
@property(retain, nonatomic) UITapGestureRecognizer* singleTapGesture;
@property(assign, nonatomic) BOOL inGesture;
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer>* view;
@property(assign, nonatomic) CGPoint autoscrollUntransformedExtentPoint;
@property(assign, nonatomic) BOOL autoscrolled;
@property(readonly, assign, nonatomic) UIFieldEditor* fieldEditor;
@property(readonly, assign, nonatomic) UIView* scrollView;
-(id)initWithView:(id)view;
-(void)dealloc;
-(void)detach:(BOOL)detach;
-(void)detach;
-(void)attach;
-(BOOL)containerIsTextField;
-(BOOL)containerIsAtom;
-(BOOL)containerIsPlainStyleAtom;
-(void)turnOffDrawsAsAtomIfPlainStyleAtom;
-(void)clearGestureRecognizers:(BOOL)recognizers;
-(void)clearGestureRecognizers;
-(BOOL)useGesturesForEditableContent;
-(id)addOneFingerDoubleTapRecognizer:(SEL)recognizer;
-(id)addOneFingerDoubleTapRecognizer;
-(id)addOneFingerTapRecognizer:(SEL)recognizer;
-(id)addOneFingerTapRecognizer;
-(id)addOneFingerTripleTapRecognizer;
-(id)addSelectionTapRecognizer:(SEL)recognizer;
-(id)addSelectionTapRecognizer;
-(id)addTwoFingerSingleTapRecognizer;
-(id)addTapAndAHalfRecognizer;
-(id)addLoupeGestureRecognizer:(BOOL)recognizer;
-(id)addTwoFingerRangedSelectRecognizer;
-(id)addHighlightLinkRecognizer;
-(id)addTapAndHoldOnLinkRecognizer;
-(id)addPhraseBoundaryGestureRecognizer;
-(void)setGestureRecognizers;
-(void)setFirstResponderIfNecessary;
-(void)loupeGesture:(id)gesture;
-(void)confirmMarkedText:(id)text;
-(void)tapAndAHalf:(id)half;
-(void)setSelectionWithPoint:(CGPoint)point;
-(void)doubleTapInUneditable:(id)uneditable;
-(BOOL)shouldHandleFormGestureAtLocation:(CGPoint)location;
-(BOOL)shouldHandleOneFingerTapInUneditable:(id)uneditable;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(float)distanceBetweenPoint:(CGPoint)point andRange:(id)range;
-(void)oneFingerTap:(id)tap;
-(void)oneFingerTapInUneditable:(id)uneditable;
-(void)oneFingerTapSelectsAll:(id)all;
-(void)oneFingerDoubleTap:(id)tap;
-(void)oneFingerTripleTap:(id)tap;
-(void)selectWord;
-(void)selectWordWithoutShowingCommands;
-(void)selectAll;
-(void)clearSelection;
-(void)notifyKeyboardSelectionChanged;
-(void)twoFingerSingleTap:(id)tap;
-(void)twoFingerRangedSelectGesture:(id)gesture;
-(CGRect)rectFromContentToContainer:(CGRect)container;
-(CGRect)rectFromContainerToContent:(CGRect)content;
-(CGPoint)pointFromContentToContainer:(CGPoint)container;
-(CGPoint)pointFromContainerToContent:(CGPoint)content;
-(CGPoint)constrainedPoint:(CGPoint)point;
-(void)resignedFirstResponder;
-(void)startAutoscroll:(CGPoint)autoscroll;
-(void)cancelAutoscroll;
-(void)autoscrollWillNotStart;
-(void)updateAutoscroll:(id)autoscroll;
-(BOOL)viewCouldBecomeEditable:(id)editable;
-(void)smallDelayRecognizer:(id)recognizer;
-(void)longDelayRecognizer:(id)recognizer;
-(BOOL)shouldIgnoreLinkGestures;
-(BOOL)isInteractingWithLink;
-(BOOL)tapOnLinkWithGesture:(id)gesture;
-(void)cancelInteractionWithLink;
-(void)scheduleReplacementsWithOptions:(unsigned)options;
-(BOOL)isChineseInputEnabled;
-(id)rangeForTextReplacement:(id)textReplacement;
-(void)scheduleReplacementsForRange:(id)range withOptions:(unsigned)options;
-(BOOL)longPressGestureCanTransitionToRecognizedState:(id)recognizedState;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(BOOL)swallowsDoubleTapWithScale:(float)scale atPoint:(CGPoint)point;
@end

