/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GameKit-Structs.h"
#import "UIWebViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class UIAlertView, NSData, UIWebView, NSURLRequest, NSString, GKImageBackgroundView;

@interface GKServerWebViewController : XXUnknownSuperclass <UIWebViewDelegate, UIAlertViewDelegate> {
	GKImageBackgroundView* _backgroundView;
	UIWebView* _webView;
	NSString* _okCallback;
	NSString* _cancelCallback;
	NSString* _leftCallback;
	NSString* _rightCallback;
	BOOL _addedSheetFrame;
	NSString* _playerID;
	NSString* _authToken;
	NSURLRequest* _previousRequest;
	int _status;
	id _completionHandler;
	UIEdgeInsets _backgroundInsets;
	NSData* _pushToken;
	UIAlertView* _alert;
}
@property(retain, nonatomic) NSString* okCallback;
@property(retain, nonatomic) NSString* cancelCallback;
@property(retain, nonatomic) NSString* leftCallback;
@property(retain, nonatomic) NSString* rightCallback;
@property(assign, nonatomic) UIEdgeInsets backgroundInsets;
@property(retain, nonatomic) NSString* playerID;
@property(retain, nonatomic) NSString* authToken;
@property(retain, nonatomic) NSURLRequest* previousRequest;
@property(assign, nonatomic) int status;
@property(retain, nonatomic) NSData* pushToken;
@property(assign, nonatomic) BOOL addedSheetFrame;
@property(retain, nonatomic) UIAlertView* alert;
@property(copy, nonatomic) id completionHandler;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(void)dealloc;
-(void)loadView;
-(id)gkBackgroundView;
-(void)viewWillAppear:(BOOL)view;
-(void)loadURL:(id)url;
-(void)finish;
-(void)showMessageForError:(id)error;
-(void)setHeadersForRequest:(id)request;
-(void)authenticateAndTryURLRequestAgain:(id)again;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(unsigned)type;
-(void)webViewDidStartLoad:(id)webView;
-(void)webViewDidFinishLoad:(id)webView;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(id)decodeDashEncodedString:(id)string;
-(void)processGameKitURLComponents:(id)components;
-(void)parseNavBarURLString:(id)string;
-(void)leftNavButtonPressed;
-(void)rightNavButtonPressed;
-(void)parseAlertURLString:(id)string;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)cancelAlertWithoutDelegateCallback;
@end
