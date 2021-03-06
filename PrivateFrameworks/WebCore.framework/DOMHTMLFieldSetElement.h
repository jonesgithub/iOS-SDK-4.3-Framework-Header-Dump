/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLFormElement;

__attribute__((visibility("hidden")))
@interface DOMHTMLFieldSetElement : DOMHTMLElement {
}
@property(readonly, retain) DOMHTMLFormElement* form;
-(id)validity;
-(BOOL)willValidate;
-(id)validationMessage;
-(BOOL)checkValidity;
-(void)setCustomValidity:(id)validity;
@end

