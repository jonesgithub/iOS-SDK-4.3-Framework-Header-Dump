/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation {
@private
	ISOpenURLRequest* _request;
}
@property(readonly, assign) ISOpenURLRequest* openURLRequest;
-(id)init;
-(id)initWithOpenURLRequest:(id)openURLRequest;
-(void)dealloc;
-(void)run;
-(id)_newSortedTargetsArray;
-(BOOL)_openURL:(id)url;
@end
