/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface CPTextLineMaker : XXUnknownSuperclass {
	NSMutableArray* textLines;
}
-(void)dealloc;
-(id)textLines;
-(void)splitByGraphic:(id)graphic with:(CPPDFContext*)with;
-(void)zOrderSplitLines:(id)lines;
-(unsigned)makeTextLines:(id)lines;
@end
