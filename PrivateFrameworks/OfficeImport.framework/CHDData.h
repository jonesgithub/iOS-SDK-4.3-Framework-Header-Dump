/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CHDData.h"

@class CHDFormula, CHDDataValuesCollection, EDResources;

__attribute__((visibility("hidden")))
@interface CHDData : XXUnknownSuperclass {
@private
	CHDDataValuesCollection* mDataValues;
	CHDFormula* mFormula;
	unsigned mContentFormatId;
	unsigned mDataValueIndexCount;
	EDResources* mResources;
}
+(id)dataWithResources:(id)resources;
+(id)dataWithDataPointCount:(unsigned)dataPointCount resources:(id)resources;
-(id)initWithResources:(id)resources;
-(id)initWithDataPointCount:(unsigned)dataPointCount resources:(id)resources;
-(void)dealloc;
-(id)dataValues;
-(unsigned)dataValueIndexCount;
-(void)setDataValueIndexCount:(unsigned)count;
-(unsigned)averageDataPointDecimalCount;
-(id)formula;
-(void)setFormula:(id)formula chart:(id)chart;
-(unsigned)countOfCellsBeingReferenced;
-(id)contentFormat;
-(void)setContentFormat:(id)format;
-(bool)isEmpty;
-(id)firstValueContentFormatWithWorkbook:(id)workbook;
@end

@interface CHDData (EDInternal)
-(unsigned)contentFormatId;
-(void)setContentFormatId:(unsigned)anId;
@end

