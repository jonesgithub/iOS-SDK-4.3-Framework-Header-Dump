/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSData, NSURLConnection, NSMutableSet, NSMutableDictionary, NSThread, NSError, NSSet, NSString, NSURLRequest, NSURLResponse;

__attribute__((visibility("hidden")))
@interface QLPreviewParts : XXUnknownSuperclass {
@private
	NSURL* _url;
	NSData* _data;
	NSString* _fileName;
	NSString* _uti;
	BOOL _progressive;
	void* _convertFunction;
	NSURLConnection* _connection;
	id _delegate;
	NSURL* previewURL;
	NSMutableSet* registeredURLs;
	NSMutableSet* outstandingURLs;
	NSMutableDictionary* encodingsForURLs;
	NSThread* delegateCallbackThread;
	NSError* mainError;
	BOOL computed;
	BOOL cancelled;
	void* representedObject;
	XXStruct_QrC3XA representedObjectCallbacks;
	int representedObjectProtection;
}
@property(retain, nonatomic) NSURL* url;
@property(retain, nonatomic) NSData* data;
@property(retain, nonatomic) NSString* fileName;
@property(retain, nonatomic) NSString* uti;
@property(assign, nonatomic) BOOL progressive;
@property(retain, nonatomic) NSURLConnection* connection;
@property(retain, nonatomic) id delegate;
@property(readonly, assign, nonatomic) NSURL* previewURL;
@property(readonly, assign, getter=isCancelled) BOOL cancelled;
@property(readonly, assign, getter=isComputed) BOOL computed;
@property(readonly, assign, nonatomic) NSSet* attachmentURLs;
@property(readonly, assign, nonatomic) NSURLResponse* previewResponse;
@property(readonly, assign, nonatomic) NSURLRequest* previewRequest;
+(void)registerPreview:(id)preview;
+(void)unregisterPreview:(id)preview;
+(id)safeURLScheme;
+(BOOL)isSafeURL:(id)url;
+(BOOL)isSafeRequest:(id)request;
+(id)relativeStringForSafeURL:(id)safeURL;
-(void)dealloc;
-(void)computePreview;
-(void)cancel;
-(id)_voidRequest;
-(id)_requestForURL:(id)url;
-(id)safeRequestForRequest:(id)request;
-(void)startComputingPreview;
-(void)computePreviewInThread;
-(void)_protectRepresentedObjectSafely;
-(void)_discardRepresentedObjectSafely;
-(void)setDocumentObject:(const void*)object callbacks:(const XXStruct_QrC3XA*)callbacks;
-(const void*)documentObject;
-(void)_registerURL:(id)url mimeType:(id)type textEncoding:(id)encoding;
-(void)startDataRepresentationWithContentType:(id)contentType properties:(id)properties;
-(id)newAttachmentURLWithID:(id)anId properties:(id)properties;
-(id)newSafeAttachmentURLWithID:(id)anId mimeType:(id)type textEncoding:(id)encoding;
-(void)appendData:(id)data forURL:(id)url lastChunk:(BOOL)chunk;
-(void)setError:(id)error;
-(unsigned long)cfEncodingForAttachmentURL:(id)attachmentURL;
@end

