/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UISearchBar.h"

@class NSArray, UIButton, UIColor, NSString, UILabel, UIImageView, UITextField;
@protocol UISearchBarDelegate;

@interface UISearchBar : UIView {
@private
	UITextField* _searchField;
	UILabel* _promptLabel;
	UIButton* _cancelButton;
	id<UISearchBarDelegate> _delegate;
	id _controller;
	UIColor* _tintColor;
	UIImageView* _separator;
	NSString* _cancelButtonText;
	NSArray* _scopes;
	int _selectedScope;
	UIView* _background;
	UIView* _scopeBar;
	UIEdgeInsets _contentInset;
	id _appearance;
	struct {
		unsigned barStyle : 3;
		unsigned showsBookmarkButton : 1;
		unsigned showsCancelButton : 1;
		unsigned isTranslucent : 1;
		unsigned autoDisableCancelButton : 1;
		unsigned showsScopeBar : 1;
		unsigned hideBackground : 1;
		unsigned combinesLandscapeBars : 1;
		unsigned usesEmbeddedAppearance : 1;
		unsigned showsSearchResultsButton : 1;
		unsigned searchResultsButtonSelected : 1;
		unsigned pretendsIsInBar : 1;
		unsigned disabled : 1;
	} _searchBarFlags;
}
@property(assign, nonatomic) id<UISearchBarDelegate> delegate;
@property(retain, nonatomic) UIColor* tintColor;
@property(assign, nonatomic) BOOL showsScopeBar;
@property(assign, nonatomic) int selectedScopeButtonIndex;
@property(copy, nonatomic) NSArray* scopeButtonTitles;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;
@property(assign, nonatomic, getter=isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;
@property(assign, nonatomic) BOOL showsSearchResultsButton;
@property(assign, nonatomic) BOOL showsCancelButton;
@property(assign, nonatomic) BOOL showsBookmarkButton;
@property(copy, nonatomic) NSString* placeholder;
@property(copy, nonatomic) NSString* prompt;
@property(copy, nonatomic) NSString* text;
@property(assign, nonatomic) int barStyle;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithCoder:(id)coder;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(void)setController:(id)controller;
-(id)controller;
-(id)searchField;
-(id)_scopeBar;
-(void)willMoveToSuperview:(id)superview;
-(void)movedToSuperview:(id)superview;
-(void)_updateRightView;
-(void)_hideShowAnimationDidFinish;
-(void)setShowsCancelButton:(BOOL)button animated:(BOOL)animated;
-(void)_setShowsCancelButton:(BOOL)button;
-(void)setBackgroundImage:(id)image;
-(id)backgroundImage;
-(void)setDrawsBackground:(BOOL)background;
-(BOOL)drawsBackground;
-(void)setCombinesLandscapeBars:(BOOL)bars;
-(BOOL)combinesLandscapeBars;
-(void)setUsesEmbeddedAppearance:(BOOL)appearance;
-(BOOL)usesEmbeddedAppearance;
-(void)setCancelButton:(id)button;
-(id)cancelButton;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)_setShowsSeparator:(BOOL)separator;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)inset;
-(UIEdgeInsets)contentInset;
-(void)_setUpScopeBar;
-(void)_scopeChanged:(id)changed;
@end

@interface UISearchBar (UISearchBarStatic)
-(BOOL)pretendsIsInBar;
-(void)setPretendsIsInBar:(BOOL)bar;
-(BOOL)_isInBar;
-(void)_updateSearchFieldArt;
-(void)_setupSearchField;
-(void)_updateOpacity;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(BOOL)textFieldShouldEndEditing:(id)textField;
-(void)_setupPromptLabel;
-(void)_setCancelButtonText:(id)text;
-(void)_setAutoDisableCancelButton:(BOOL)button;
-(void)_setCancelButtonBackgroundImage:(id)image forStates:(unsigned)states;
-(void)_takeAppearanceFromNavigationBarAppearance:(id)navigationBarAppearance;
-(void)_setupCancelButton;
-(void)_destroyCancelButton;
-(void)_cancelButtonPressed;
-(void)_bookmarkButtonPressed;
-(void)_resultsListButtonPressed;
-(void)_searchFieldBeginEditing;
-(void)_searchFieldEndEditing;
-(void)_searchFieldReturnPressed;
-(void)_searchFieldEditingChanged;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)canBecomeFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)_isEnabled;
-(void)_setEnabled:(BOOL)enabled;
-(void)_setEnabled:(BOOL)enabled animated:(BOOL)animated;
@end

@interface UISearchBar (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

