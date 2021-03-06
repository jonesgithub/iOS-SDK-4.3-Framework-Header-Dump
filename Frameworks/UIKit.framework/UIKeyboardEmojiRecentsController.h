/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSMutableArray;
@protocol UIKeyboardEmojiController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiRecentsController : XXUnknownSuperclass {
@private
	id<UIKeyboardEmojiController> _controller;
	int _currentSequence;
	NSMutableArray* _recents;
	NSMutableDictionary* _usageHistory;
}
-(id)initWithController:(id)controller;
-(void)dealloc;
-(void)readDefaultsDictionary:(id)dictionary;
-(BOOL)isAncientSequence:(int)sequence;
-(double)scoreForSequence:(int)sequence;
-(double)scoreForEmoji:(id)emoji;
-(void)emojiUsed:(id)used;
-(void)clearAncientHistory;
-(id)defaultsDictionary;
-(id)recents;
@end

