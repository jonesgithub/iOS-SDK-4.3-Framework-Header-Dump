/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSURL;

@interface CoreDAVCopyOrMoveTask : CoreDAVTask {
	int _overwrite;
	NSURL* _destinationURL;
}
@property(assign) int overwrite;
@property(retain) NSURL* destinationURL;
+(id)stringFromOverwriteValue:(int)overwriteValue;
-(id)initWithURL:(id)url;
-(id)initWithSourceURL:(id)sourceURL destinationURL:(id)url;
-(id)initWithSourceURL:(id)sourceURL destinationURL:(id)url andOverwrite:(int)overwrite;
-(void)dealloc;
-(id)description;
-(id)requestBody;
-(id)additionalHeaderValues;
-(void)finishCoreDAVTaskWithError:(id)error;
-(void)_callBackToDelegateWithResponses:(id)responses error:(id)error;
@end

