/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class TIWordSearch;

@interface TIWordSearchOperation : XXUnknownSuperclass {
	TIWordSearch* _kbws;
}
@property(readonly, retain, nonatomic) TIWordSearch* kbws;
-(id)initWithTIWordSearch:(id)tiwordSearch;
-(void)dealloc;
-(void)perform;
-(void)main;
@end
