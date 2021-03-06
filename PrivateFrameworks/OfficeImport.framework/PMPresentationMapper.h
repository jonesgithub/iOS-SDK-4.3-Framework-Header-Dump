/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "CMMapperRoot.h"
#import "OfficeImport-Structs.h"
#import "PMPresentationMapper.h"

@class NSMutableArray, PDPresentation, OIXMLDocument, OIXMLElement, NSString, CMArchiveManager;

__attribute__((visibility("hidden")))
@interface PMPresentationMapper : CMMapper <CMMapperRoot> {
@private
	int mWidth;
	PDPresentation* mPresentation;
	NSMutableArray* mSlideNames;
	NSMutableArray* mSlideGuids;
	NSString* mResourceUrlPrefix;
	NSString* mResourceUrlProtocol;
	CMArchiveManager* mArchiver;
	OIXMLDocument* mXhtmlDoc;
	OIXMLElement* mBodyElement;
	unsigned mNextCommit;
	unsigned mCurrentSlide;
	BOOL mHasPushedFirstSlides;
	float mSlideOriginY;
}
-(id)initWithPDPresentation:(id)pdpresentation archiver:(id)archiver;
-(void)dealloc;
-(id)archiver;
-(id)blipAtIndex:(unsigned)index;
-(id)documentTitle;
-(CGSize)pageSizeForDevice;
-(CGSize)slideSize;
-(void)startMappingWithState:(id)state;
-(void)_pushEmptySlideWithMessage:(id)message;
-(void)mapElement:(id)element atIndex:(unsigned)index withState:(id)state isLastElement:(BOOL)element4;
-(void)finishMappingWithState:(id)state;
@end

@interface PMPresentationMapper (Private)
-(void)mapDefaultCssStylesAt:(id)at;
-(void)setHtmlDocumentSizeInArchiver;
@end

