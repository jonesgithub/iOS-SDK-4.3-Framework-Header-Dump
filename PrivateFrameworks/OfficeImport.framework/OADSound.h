/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDelayedMedia.h"

@class NSString, NSData;

__attribute__((visibility("hidden")))
@interface OADSound : OCDDelayedMedia {
@private
	NSData* mSoundData;
	NSString* mName;
	int mSizeInBytes;
}
-(id)init;
-(void)dealloc;
-(id)soundData;
-(void)setSoundData:(id)data;
-(id)name;
-(void)setName:(id)name;
-(long)sizeInBytes;
-(void)setSizeInBytes:(long)bytes;
-(bool)isLoaded;
@end

