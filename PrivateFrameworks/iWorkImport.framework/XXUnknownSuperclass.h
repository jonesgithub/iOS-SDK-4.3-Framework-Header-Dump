/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (GQCustomNumberFormatAdditions)
+(id)customNumberFormatTokenStringOfType:(int)type content:(id)content;
+(id)customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned)digits separator:(BOOL)separator digitString:(id)string;
+(id)customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned)digits separator:(BOOL)separator digitString:(id)string;
+(id)customNumberFormatIntegerFormatStringWithDigits:(unsigned)digits digitString:(id)string;
+(id)customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned)digits digitString:(id)string;
+(id)customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned)digits digitString:(id)string;
+(id)customNumberFormatDecimalFormatStringWithDigits:(unsigned)digits digitString:(id)string includeDecimalSeparator:(BOOL)separator;
-(BOOL)isSpecialCustomNumberFormatToken;
-(BOOL)isSpecialCustomNumberFormatTokenOfType:(int)type;
-(unsigned)numberOfDigitsInCustomNumberFormatIntegerToken;
-(BOOL)customFormatIntegerTokenUsesSeparator;
-(id)stringByInsertingGroupingSeparators;
-(unsigned)numberOfDigitsInCustomNumberFormatDecimalToken;
-(id)digitPlaceholderStringInDigitToken;
-(id)currencyCodeFromCustomNumberFormatCurrencyToken;
-(int)fractionAccuracyFromCustomNumberFormatFractionToken;
-(id)formatStringFromCustomNumberFormatScaleToken;
-(unsigned short)scaleCharacterInCustomNumberFormatScaleToken;
-(unsigned short)spaceCharacterInCustomNumberFormatSpaceToken;
@end

@interface XXUnknownSuperclass (GQDTNumberFormatUtility)
-(void)insertCharacter:(unsigned short)character atIndex:(unsigned short)index;
@end

@interface XXUnknownSuperclass (GQUAdditions)
-(id)description;
-(BOOL)differsFrom:(id)from;
-(BOOL)differOnlyByTranslation:(id)translation;
-(void)transformRect:(CGRect)rect upperLeft:(CGPoint*)left lowerLeft:(CGPoint*)left3 lowerRight:(CGPoint*)right upperRight:(CGPoint*)right5;
-(CGRect)boundsOfTransformedRect:(CGRect)transformedRect;
-(void)shearXBy:(float)by yBy:(float)by2;
-(BOOL)isAxisAligned;
-(float)angle;
-(id)initWithCGAffineTransform:(CGAffineTransform)cgaffineTransform;
-(CGAffineTransform)cgAffineTransform;
@end

@interface XXUnknownSuperclass (GQFormatStringUtilities)
+(id)numberSymbols;
-(id)createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;
-(BOOL)isNumberFormatPattern;
-(id)createRangesOfEscapedCharactersInNumberFormatPattern;
-(id)stringByRemovingEscapedCharactersFromNumberFormatPattern;
-(int)indexOfNumberFormatSubpatternSeparator;
-(id)positiveSubpatternOfNumberFormatPattern;
-(id)negativeSubpatternOfNumberFormatPattern;
-(id)numberPortionOfNumberFormatSubpattern;
-(int)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
-(id)suffixOfNumberFormatSubpattern;
-(int)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
-(id)prefixOfNumberFormatSubpattern;
@end
