/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WAKView, WebDataSource;
@protocol WebPluginManualLoader;

__attribute__((visibility("hidden")))
@interface WebHTMLRepresentationPrivate : XXUnknownSuperclass {
@private
	WebDataSource* dataSource;
	BOOL hasSentResponseToPlugin;
	BOOL includedInWebKitStatistics;
	id<WebPluginManualLoader> manualLoader;
	WAKView* pluginView;
}
@end

