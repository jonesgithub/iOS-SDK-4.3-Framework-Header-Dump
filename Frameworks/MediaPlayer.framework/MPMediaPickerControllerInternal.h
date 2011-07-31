/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CALayerHost, UIWindow, NSString;
@protocol MPMediaPickerControllerDelegate;

@interface MPMediaPickerControllerInternal : XXUnknownSuperclass {
@private
	int _mediaTypes;
	unsigned _allowsPickingMultipleItems : 1;
	NSString* _prompt;
	id<MPMediaPickerControllerDelegate> _delegate;
	unsigned _serverPort;
	unsigned _replyPort;
	CFRunLoopSourceRef _replyPortRunLoopSource;
	UIWindow* _layerHostProxyWindow;
	CALayerHost* _layerHost;
	unsigned _layerHostIsActive : 1;
}
@end
