/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "CKMessagePart.h"

@class NSData, UIImage, CKMediaObject;

@interface CKMediaObjectMessagePart : CKMessagePart {
	CKMediaObject* _mediaObject;
	UIImage* _composeImage;
	NSData* _previewData;
	NSData* _composeData;
	NSData* _dataForHighlight;
}
@property(readonly, assign, nonatomic) UIImage* composeImage;
@property(readonly, assign, nonatomic) CKMediaObject* mediaObject;
-(id)detachedCopy;
-(id)initWithMediaObject:(id)mediaObject;
-(BOOL)isDisplayable;
-(int)_orientation;
-(void)setComposeData:(id)data;
-(void)setPreviewData:(id)data;
-(id)highlightData;
-(id)composeData;
-(id)previewData;
-(void)copyToPasteboard;
-(int)type;
-(void)dealloc;
@end

