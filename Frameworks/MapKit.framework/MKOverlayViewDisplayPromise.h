/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MKOverlayView;

__attribute__((visibility("hidden")))
@interface MKOverlayViewDisplayPromise : XXUnknownSuperclass {
@private
	MKOverlayView* overlayView;
	XXStruct_Yvvv9D mapRect;
	float zoomScale;
	struct {
		unsigned displayBaseTiles : 1;
		unsigned delegateDisplayBaseTiles : 1;
		unsigned delegateRenderLayer : 1;
	} flags;
}
-(id)initWithOverlayView:(id)overlayView mapRect:(XXStruct_Yvvv9D)rect zoomScale:(float)scale;
-(void)display;
-(void)cancel;
-(void)dealloc;
@end
