/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADTable.h"
#import "OADDrawable.h"

@class NSMutableArray, OADTableGrid, OADTableProperties;

__attribute__((visibility("hidden")))
@interface OADTable : OADDrawable {
@private
	OADTableProperties* mProperties;
	OADTableGrid* mGrid;
	NSMutableArray* mRows;
}
-(id)init;
-(void)dealloc;
-(id)tableProperties;
-(id)grid;
-(unsigned)rowCount;
-(id)rowAtIndex:(unsigned)index;
-(id)addRow;
-(void)setParentTextListStyle:(id)style;
@end

@interface OADTable (Writer)
-(id)cellAtPos:(OADTMatrixPos)pos;
-(OADTMatrixPos)masterPosOfPos:(OADTMatrixPos)pos;
-(id)masterCellOfPos:(OADTMatrixPos)pos;
@end
