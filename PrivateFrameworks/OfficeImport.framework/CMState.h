/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, OADColorMap, OADColorScheme, NSString;

__attribute__((visibility("hidden")))
@interface CMState : XXUnknownSuperclass {
@private
	NSMutableDictionary* components;
	NSMutableDictionary* htmlResource;
	NSString* mResourceUrlPrefix;
	OADColorMap* mColorMap;
	OADColorScheme* mColorScheme;
	id mResources;
	int mSrcFormat;
	BOOL mIsThumbnail;
	BOOL mIsOnPhone;
	int _textLevel;
}
-(id)init;
-(void)dealloc;
-(id)componentByName:(id)name;
-(void)setComponentWithName:(id)name value:(id)value;
-(void)setResourceUrlPrefix:(id)prefix;
-(id)resourceUrlPrefix;
-(void)setHtmlResource:(id)resource;
-(id)getHtmlResource;
-(void)setSrcFormat:(int)format;
-(int)sourceFormat;
-(id)colorMap;
-(void)setColorMap:(id)map;
-(id)colorScheme;
-(void)setColorScheme:(id)scheme;
-(id)resources;
-(void)setResources:(id)resources;
-(void)copyFromCMStateWithoutComponents:(id)cmstateWithoutComponents;
-(BOOL)isOffice12;
-(void)setIsThumbnail:(BOOL)thumbnail;
-(BOOL)isThumbnail;
-(void)setIsOnPhone:(BOOL)phone;
-(BOOL)isOnPhone;
-(void)pushTextLevel;
-(void)popTextLevel;
-(int)textLevel;
@end
