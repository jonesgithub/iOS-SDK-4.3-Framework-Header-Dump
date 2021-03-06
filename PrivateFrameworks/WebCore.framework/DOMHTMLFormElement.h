/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLFormElement.h"
#import "WebCore-Structs.h"
#import "DOMHTMLElement.h"

@class NSString, DOMHTMLCollection;

@interface DOMHTMLFormElement : DOMHTMLElement {
}
@property(copy) NSString* target;
@property(copy) NSString* method;
@property(copy) NSString* enctype;
@property(copy) NSString* encoding;
@property(copy) NSString* action;
@property(copy) NSString* acceptCharset;
@property(copy) NSString* name;
@property(readonly, assign) int length;
@property(readonly, retain) DOMHTMLCollection* elements;
-(BOOL)noValidate;
-(void)setNoValidate:(BOOL)validate;
-(BOOL)autocorrect;
-(void)setAutocorrect:(BOOL)autocorrect;
-(BOOL)autocapitalize;
-(void)setAutocapitalize:(BOOL)autocapitalize;
-(void)submit;
-(void)reset;
-(BOOL)checkValidity;
@end

@interface DOMHTMLFormElement (DOMUIKitComplexityExtensions)
-(int)structuralComplexityContribution;
@end

