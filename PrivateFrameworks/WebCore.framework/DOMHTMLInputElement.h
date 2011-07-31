/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"
#import "WebCore-Structs.h"
#import "DOMHTMLInputElement.h"

@class NSString, NSURL, DOMHTMLFormElement, DOMFileList;

@interface DOMHTMLInputElement : DOMHTMLElement {
}
@property(readonly, retain) DOMFileList* files;
@property(readonly, copy) NSURL* absoluteImageURL;
@property(readonly, copy) NSString* altDisplayString;
@property(assign) int selectionEnd;
@property(assign) int selectionStart;
@property(assign) BOOL indeterminate;
@property(readonly, assign) BOOL willValidate;
@property(copy) NSString* value;
@property(copy) NSString* useMap;
@property(copy) NSString* type;
@property(copy) NSString* src;
@property(copy) NSString* size;
@property(assign) BOOL readOnly;
@property(copy) NSString* name;
@property(assign) BOOL multiple;
@property(assign) int maxLength;
@property(assign) BOOL autofocus;
@property(assign) BOOL disabled;
@property(assign) BOOL checked;
@property(copy) NSString* alt;
@property(copy) NSString* align;
@property(copy) NSString* accessKey;
@property(copy) NSString* accept;
@property(readonly, retain) DOMHTMLFormElement* form;
@property(assign) BOOL defaultChecked;
@property(copy) NSString* defaultValue;
-(BOOL)formNoValidate;
-(void)setFormNoValidate:(BOOL)validate;
-(id)validity;
-(id)max;
-(void)setMax:(id)max;
-(id)min;
-(void)setMin:(id)min;
-(id)pattern;
-(void)setPattern:(id)pattern;
-(id)placeholder;
-(void)setPlaceholder:(id)placeholder;
-(BOOL)required;
-(void)setRequired:(BOOL)required;
-(id)step;
-(void)setStep:(id)step;
-(double)valueAsDate;
-(void)setValueAsDate:(double)date;
-(double)valueAsNumber;
-(void)setValueAsNumber:(double)number;
-(id)validationMessage;
-(BOOL)autocorrect;
-(void)setAutocorrect:(BOOL)autocorrect;
-(BOOL)autocapitalize;
-(void)setAutocapitalize:(BOOL)autocapitalize;
-(void)stepUp:(int)up;
-(void)stepDown:(int)down;
-(BOOL)checkValidity;
-(void)setCustomValidity:(id)validity;
-(void)select;
-(void)click;
-(void)setValueForUser:(id)user;
-(void)setSelectionRange:(int)range end:(int)end;
@end

@interface DOMHTMLInputElement (FormPromptAdditions)
-(BOOL)_isEdited;
@end

@interface DOMHTMLInputElement (FormAutoFillTransition)
-(BOOL)_isTextField;
-(void)_replaceCharactersInRange:(NSRange)range withString:(id)string selectingFromIndex:(int)index;
-(NSRange)_selectedRange;
-(BOOL)_isAutofilled;
-(void)_setAutofilled:(BOOL)autofilled;
@end

@interface DOMHTMLInputElement (DOMUIKitComplexityExtensions)
-(int)structuralComplexityContribution;
@end
