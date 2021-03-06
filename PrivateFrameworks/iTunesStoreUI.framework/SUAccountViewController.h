/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUStorePageViewController.h"
#import "iTunesStoreUI-Structs.h"


@interface SUAccountViewController : SUStorePageViewController {
	BOOL _failed;
	int _style;
}
@property(assign, nonatomic) int style;
-(id)init;
-(id)newFetchOperation;
-(id)newViewControllerForPage:(id)page ofType:(int)type returningError:(id*)error;
-(void)handleFailureWithError:(id)error;
-(void)viewDidDisappear:(BOOL)view;
-(id)_authenticationQueryParametersForStyle:(int)style;
-(id)_bagKeyForStyle:(int)style;
@end

