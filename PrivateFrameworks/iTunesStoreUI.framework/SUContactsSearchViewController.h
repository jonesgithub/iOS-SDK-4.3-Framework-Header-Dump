/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "SUViewController.h"

@class MFContactsSearchResultsModel, MFContactsSearchManager, NSArray, UITableView, NSNumber;
@protocol SUContactsSearchDelegate;

@interface SUContactsSearchViewController : SUViewController <UITableViewDataSource, UITableViewDelegate> {
@private
	NSNumber* _activeSearchTag;
	id<SUContactsSearchDelegate> _delegate;
	NSArray* _properties;
	int _scope;
	MFContactsSearchResultsModel* _searchResultsModel;
	MFContactsSearchManager* _searchManager;
	UITableView* _tableView;
}
@property(assign, nonatomic) id<SUContactsSearchDelegate> delegate;
@property(readonly, assign, nonatomic) NSArray* searchProperties;
@property(readonly, assign, nonatomic) int searchScope;
@property(readonly, assign, nonatomic) NSArray* searchResults;
-(id)init;
-(id)initWithProperties:(id)properties scope:(int)scope;
-(void)dealloc;
-(void)cancelSearchWithTag:(id)tag;
-(void)resetResults;
-(id)searchForText:(id)text;
-(void)loadView;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)beganNetworkActivity;
-(void)consumeSearchResults:(id)results type:(int)type taskID:(id)anId;
-(void)endedNetworkActivity;
-(void)finishedSearchingForType:(int)type;
-(void)finishedTaskWithID:(id)anId;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)_cancelActiveSearch;
-(id)_searchManager;
-(id)_searchResultsModel;
-(void)_sendResultsDidChange;
@end

