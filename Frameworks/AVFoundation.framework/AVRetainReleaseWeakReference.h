/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVWeakReference.h"

@class NSString;

@interface AVRetainReleaseWeakReference : AVWeakReference {
@private
	id _referencedObject;
	NSString* _cachedReferencedObjectDescription;
	dispatch_queue_s* _readWriteDispatchQueue;
	int _referencedObjectRetainCount;
}
-(id)initWithReferencedObject:(id)referencedObject;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)referencedObject;
-(void)referencedObjectWillBeRetained;
-(void)referencedObjectWillBeReleased;
@end

