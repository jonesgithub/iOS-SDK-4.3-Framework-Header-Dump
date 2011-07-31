/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSArray;

@interface NSGrammarCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;
	NSArray* _details;
}
-(id)initWithRange:(NSRange)range details:(id)details;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(unsigned long long)resultType;
-(NSRange)range;
-(id)resultByAdjustingRangesWithOffset:(int)offset;
-(BOOL)_adjustRangesWithOffset:(int)offset;
-(id)grammarDetails;
@end
