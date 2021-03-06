/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDDrawable.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "GQWrapPointGenerator.h"

@class GQDAffineGeometry, GQDBezierPath;

__attribute__((visibility("hidden")))
@interface GQDDrawable : XXUnknownSuperclass <GQWrapPointGenerator> {
@private
	GQDAffineGeometry* mGeometry;
	CFURLRef mUrl;
	char* mUid;
	GQDBezierPath* mWrapPath;
	GQDAffineGeometry* mWrapGeometry;
	set<GQUtility::ObjcSharedPtr<GQDWrapPoint>,GQUtility::NSObjectComparator<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > >* mInnerWrapPoints;
	BOOL mHasPagesOrder;
	long mPagesOrder;
}
-(void)dealloc;
-(id)geometry;
-(CFURLRef)url;
-(CFStringRef)urlString;
-(const char*)uid;
-(int)collectWrapPointsForState:(id)state graphicStyle:(id)style;
-(void)addWrapPoint:(id)point;
-(const set<GQUtility::ObjcSharedPtr<GQDWrapPoint>,GQUtility::NSObjectComparator<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > >*)wrapPoints;
-(vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > >*)createListOfWrapPointsAlongY:(float)wrapPointsAlongY minX:(float)x maxX:(float)x3 zIndex:(int)index;
-(void)clearWrapPoints;
-(CGPathRef)createBezierPath;
-(BOOL)hasPagesOrder;
-(int)pagesOrder;
@end

@interface GQDDrawable (Private)
-(void)collectWrapPoints:(id)points forPath:(CGPathRef)path context:(FindLinesContext*)context;
@end

