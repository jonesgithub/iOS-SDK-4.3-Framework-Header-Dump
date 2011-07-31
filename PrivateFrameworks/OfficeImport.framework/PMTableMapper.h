/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PMTableMapper.h"
#import "CMMapper.h"

@class CMDrawableStyle, CMTableGridInfo, OADTable, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface PMTableMapper : CMMapper {
@private
	OADTable* mTable;
	CMDrawableStyle* mStyle;
	CMTableGridInfo* mGrid;
	OADOrientedBounds* mBounds;
}
-(id)initWithOadTable:(id)oadTable bounds:(id)bounds parent:(id)parent;
-(void)dealloc;
-(void)mapAt:(id)at withState:(id)state;
-(id)grid;
-(float)columnWidthAtIndex:(int)index state:(id)state;
-(id)defaultCellFillWithState:(id)state;
-(id)defaultCellFillForRow:(unsigned)row withState:(id)state;
-(id)tableBorderStyle;
-(unsigned)rowCount;
@end

@interface PMTableMapper (Private)
-(void)mapTablePropertiesWithState:(id)state;
-(void)mapColumnGridAt:(id)at withState:(id)state;
-(id)cellStyle;
@end
