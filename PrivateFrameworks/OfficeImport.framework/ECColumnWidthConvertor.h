/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ECColumnWidthConvertor : XXUnknownSuperclass {
@private
	int mMultiplier;
}
-(void)setupWithEDFont:(id)edfont state:(id)state;
-(double)lassoColumnWidthFromXl:(double)xl;
-(double)xlColumnWidthFromLasso:(double)lasso;
-(double)xlColumnWidthFromXlBaseColumnWidth:(double)xlBaseColumnWidth;
-(double)xlBaseColumnWidthFromXlColumnWidth:(double)xlColumnWidth;
@end

