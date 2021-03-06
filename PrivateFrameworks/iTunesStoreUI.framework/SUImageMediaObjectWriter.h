/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUMediaObjectWriter.h"

@class SUImageMediaObject;

@interface SUImageMediaObjectWriter : SUMediaObjectWriter {
}
@property(readonly, assign, nonatomic) SUImageMediaObject* mediaObject;
-(id)initWithMediaObject:(id)mediaObject;
-(void)writeMediaObject;
-(void)_writeDidFinish:(id)_write error:(id)error context:(void*)context;
@end

