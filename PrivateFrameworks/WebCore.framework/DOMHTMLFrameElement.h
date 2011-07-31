/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"
#import "DOMHTMLFrameElement.h"
#import "WebCore-Structs.h"

@class NSString, DOMDocument, DOMAbstractView;

@interface DOMHTMLFrameElement : DOMHTMLElement {
}
@property(readonly, assign) int height;
@property(readonly, assign) int width;
@property(copy) NSString* location;
@property(readonly, retain) DOMAbstractView* contentWindow;
@property(readonly, retain) DOMDocument* contentDocument;
@property(copy) NSString* src;
@property(copy) NSString* scrolling;
@property(assign) BOOL noResize;
@property(copy) NSString* name;
@property(copy) NSString* marginWidth;
@property(copy) NSString* marginHeight;
@property(copy) NSString* longDesc;
@property(copy) NSString* frameBorder;
@end

@interface DOMHTMLFrameElement (DOMUIKitComplexityExtensions)
-(int)structuralComplexityContribution;
@end
