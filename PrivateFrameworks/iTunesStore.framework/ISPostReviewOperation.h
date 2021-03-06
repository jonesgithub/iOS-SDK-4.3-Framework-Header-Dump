/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"
#import "ISStoreURLOperationDelegate.h"

@class ISReview;

@interface ISPostReviewOperation : ISOperation <ISStoreURLOperationDelegate> {
	BOOL _backgroundReview;
	ISReview* _review;
}
@property(assign, getter=isBackgroundReview) BOOL backgroundReview;
@property(retain) ISReview* review;
-(void)dealloc;
-(void)run;
-(void)operation:(id)operation finishedWithOutput:(id)output;
-(id)_httpBody;
@end

