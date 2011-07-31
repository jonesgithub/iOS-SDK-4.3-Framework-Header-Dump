/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptNativeObject.h"

@class UIImage, NSString;

@interface SUScriptButtonNativeObject : SUScriptNativeObject {
	BOOL _loading;
	NSString* _subtitle;
	NSString* _styleString;
}
@property(retain, nonatomic) UIImage* image;
@property(retain, nonatomic) NSString* title;
@property(assign, nonatomic, getter=isLoading) BOOL loading;
@property(readonly, assign, nonatomic) NSString* styleString;
@property(retain, nonatomic) NSString* subtitle;
@property(readonly, assign, nonatomic) int buttonType;
+(id)objectWithDefaultButtonForScriptObject:(id)scriptObject;
-(void)dealloc;
-(void)buttonAction:(id)action;
-(void)setStyleFromString:(id)string;
@end
