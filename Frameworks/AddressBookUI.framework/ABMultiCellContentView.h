/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABResponderDelegate.h"
#import "AddressBookUI-Structs.h"
#import "ABPersonCellContentView.h"

@class ABAbstractPropertyGroup, UITableViewCell, UIView;
@protocol ABMultiCellContentViewUpdateDelegate;

@interface ABMultiCellContentView : ABPersonCellContentView <ABResponderDelegate> {
	UITableViewCell* _cell;
	BOOL _usesCustomPropertyCell;
	UIView* _labelDivider;
	BOOL _isImportant;
	BOOL _isEmphasized;
	BOOL _isHighlighted;
	BOOL _allowsEditing;
	BOOL _isEditing;
	BOOL _shouldIgnoreEndEditing;
	int _property;
	ABAbstractPropertyGroup* _pg;
	id _pgInfo;
	BOOL _needsReload;
	UIView* _touchedView;
	id<ABMultiCellContentViewUpdateDelegate> _updateDelegate;
	int _abCellStyle;
}
@property(readonly, assign, nonatomic) ABAbstractPropertyGroup* propertyGroup;
@property(retain, nonatomic) id propertyGroupInfo;
@property(assign, nonatomic, getter=isEditing) BOOL editing;
@property(assign, nonatomic) BOOL allowsEditing;
@property(assign, nonatomic, getter=isImportant) BOOL important;
@property(assign, nonatomic, getter=isEmphasized) BOOL emphasized;
@property(assign, nonatomic) id<ABMultiCellContentViewUpdateDelegate> updateDelegate;
@property(assign, nonatomic) int abCellStyle;
@property(assign, nonatomic) UITableViewCell* cell;
@property(assign, nonatomic) BOOL usesCustomPropertyCell;
@property(assign, nonatomic) BOOL shouldIgnoreEndEditing;
+(Class)classForProperty:(int)property;
+(id)reuseIdentifierForPropertyGroup:(id)propertyGroup info:(id)info;
+(CGSize)sizeThatFits:(CGSize)fits forPropertyGroup:(id)propertyGroup info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;
+(void)setupTextField:(id)field withStyleProvider:(id)styleProvider;
+(CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;
-(id)init;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame property:(int)property;
-(void)dealloc;
-(void)setPropertyGroup:(id)group andInfo:(id)info;
-(CGSize)sizeThatFits:(CGSize)fits forPropertyGroup:(id)propertyGroup info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(void)setLabelText:(id)text;
-(void)clearTextFieldDelegates:(id)delegates;
-(id)newTextFieldWithFrame:(CGRect)frame tag:(int)tag keyboardSettings:(id)settings delegate:(id)delegate;
-(void)setKeyboardSettings:(id)settings onTextField:(id)field;
-(CGRect)frameForLabelDivider;
-(id)labelTextColorWhenEditing:(BOOL)editing;
-(id)displayTextColor;
-(id)displayHighlightedTextColor;
-(void)layoutLabel;
-(id)initCommonWithFrame:(CGRect)frame property:(int)property;
-(BOOL)canHandleProperty:(int)property;
-(void)reloadLabelFromModel;
-(void)reloadFromModel;
-(void)reload;
-(void)reloadIfNeeded:(BOOL)needed reloadFromModel:(BOOL)model;
-(id)pickerView;
-(CGRect)rectForView:(id)view;
-(CGRect)backgroundRectForView:(id)view;
-(CGRect)focusRectForView:(id)view;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(BOOL)wantsLabelDivider;
-(void)updateSubviewsForNewStateAnimated:(BOOL)newStateAnimated;
-(BOOL)isValidValue:(id)value;
-(BOOL)entryFieldShouldBeginEditing:(id)entryField;
-(BOOL)entryFieldShouldEndEditing:(id)entryField;
-(void)entryFieldDidBeginEditing:(id)entryField;
-(void)entryField:(id)field valueDidChange:(id)value forKey:(id)key;
-(void)entryFieldDidEndEditing:(id)entryField;
-(BOOL)entryFieldShouldReturn:(id)entryField;
-(BOOL)tabToNextResponder:(BOOL)nextResponder fromView:(id)view;
-(BOOL)canBeginEditingAnytime;
-(id)viewForFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)resignFirstResponder;
-(id)hitTestForTouches:(id)touches withEvent:(id)event;
-(BOOL)shouldSendTouchesToSuperviewForHitView:(id)hitView;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(BOOL)ABTabToNextResponder:(BOOL)nextResponder fromView:(id)view;
-(void)entryFieldBeginAttemptBecomeFirstResponder:(id)responder;
-(void)entryFieldEndAttemptBecomeFirstResponder:(id)responder;
@end

