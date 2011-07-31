/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SUSectionsResponse, NSString, ISStoreURLOperation;

@interface SULoadNetworkSectionsOperation : XXUnknownSuperclass {
	ISStoreURLOperation* _baseOperation;
	NSString* _expectedVersionString;
	SUSectionsResponse* _sectionsResponse;
}
@property(readonly, assign) SUSectionsResponse* sectionsResponse;
@property(retain) NSString* expectedVersionString;
@property(retain) ISStoreURLOperation* baseOperation;
-(id)initWithURL:(id)url;
-(void)dealloc;
-(void)run;
-(id)_copyLoadedItemImage:(id)image returningError:(id*)error;
-(id)_itemImageForSection:(id)section imageKind:(id)kind;
-(BOOL)_loadArtworkForSections:(id)sections returningError:(id*)error;
-(void)_setSectionsResponse:(id)response;
@end
