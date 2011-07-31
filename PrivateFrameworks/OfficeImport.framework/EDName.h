/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EDString, EDFormula, TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDName : XXUnknownSuperclass {
@private
	unsigned mSheetIndex;
	EDString* mNameString;
	EDFormula* mFormula;
	TSUPointerKeyDictionary* mMaxWorksheetReferences;
}
-(id)init;
-(void)dealloc;
-(BOOL)isEqualToEDName:(id)edname;
-(BOOL)isEqualToString:(id)string;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)nameString;
-(void)setNameString:(id)string;
-(id)formula;
-(void)setFormula:(id)formula workbook:(id)workbook;
-(unsigned)sheetIndex;
-(void)setSheetIndex:(unsigned)index;
-(id)maxWorksheetReferences;
@end
