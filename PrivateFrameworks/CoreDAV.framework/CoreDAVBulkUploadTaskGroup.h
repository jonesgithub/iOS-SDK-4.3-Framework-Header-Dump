/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"
#import "CoreDAVTaskDelegate.h"

@class NSURL, NSMutableDictionary, NSDictionary, NSString;
@protocol CoreDAVTaskGroupDelegate;

@interface CoreDAVBulkUploadTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
	NSURL* _folderURL;
	NSString* _lastKnownCTag;
	BOOL _validCTag;
	void* _context;
	unsigned _multiPutBatchMaxNumResources;
	unsigned _multiPutBatchMaxSize;
	NSMutableDictionary* _remainingUUIDsToAddActions;
	NSMutableDictionary* _remainingHREFsToModDeleteActions;
	NSMutableDictionary* _uuidToHREF;
	NSMutableDictionary* _hrefToETag;
}
@property(assign) unsigned multiPutBatchMaxNumResources;
@property(assign) unsigned multiPutBatchMaxSize;
@property(readonly, assign) NSURL* folderURL;
@property(readonly, assign) void* context;
@property(readonly, assign) BOOL validCTag;
@property(retain) NSString* newCTag;
@property(readonly, assign) NSDictionary* uuidToHREF;
@property(readonly, assign) NSDictionary* hrefToETag;
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;
-(id)initWithFolderURL:(id)folderURL checkCTag:(id)tag uuidsToAddActions:(id)addActions hrefsToModDeleteActions:(id)modDeleteActions context:(void*)context accountInfoProvider:(id)provider taskManager:(id)manager;
-(void)dealloc;
-(id)description;
-(void)taskGroupWillCancelWithError:(id)taskGroup;
-(void)cancelTasks;
-(Class)multiPutTaskClass;
-(void)_sendNextBatch;
-(void)startTaskGroup;
-(void)syncAway;
-(void)task:(id)task didFinishWithError:(id)error;
@end

