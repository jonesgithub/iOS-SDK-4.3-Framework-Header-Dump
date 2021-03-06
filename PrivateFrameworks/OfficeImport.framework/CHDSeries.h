/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CHDChartType, OADGraphicProperties, CHDData, CHDDataLabel, CHDDataValue, CHDErrorBar, EDCollection, CHDFormula, EDKeyedCollection, CHDChart;

__attribute__((visibility("hidden")))
@interface CHDSeries : XXUnknownSuperclass <EDKeyedObject> {
@private
	CHDChart* mChart;
	CHDChartType* mChartType;
	int mOrder;
	int mStyleIndex;
	CHDFormula* mName;
	CHDDataValue* mLastCachedName;
	CHDData* mValueData;
	CHDData* mCategoryData;
	EDKeyedCollection* mDataValuePropertiesCollection;
	EDCollection* mTrendlinesCollection;
	CHDErrorBar* mErrorBarX;
	CHDErrorBar* mErrorBarY;
	CHDDataLabel* mDefaultDataLabel;
	OADGraphicProperties* mGraphicProperties;
	bool mDateTimeFormattingFlag;
	bool mHiddenFlag;
}
+(id)seriesWithChart:(id)chart;
-(id)initWithChart:(id)chart;
-(id)shallowCopy;
-(void)clearBackPointers;
-(void)dealloc;
-(id)chartType;
-(id)chart;
-(void)setChartType:(id)type;
-(unsigned)key;
-(int)order;
-(void)setOrder:(int)order;
-(int)styleIndex;
-(void)setStyleIndex:(int)index;
-(id)lastCachedName;
-(void)setLastCachedName:(id)name;
-(id)name;
-(void)setName:(id)name;
-(id)valueData;
-(void)setValueData:(id)data;
-(id)categoryData;
-(void)setCategoryData:(id)data;
-(id)dataValuePropertiesCollection;
-(void)setDataValuePropertiesCollection:(id)collection;
-(id)trendlinesCollection;
-(void)setTrendlinesCollection:(id)collection;
-(void)setErrorBar:(id)bar;
-(id)errorBarXAxis;
-(void)setErrorBarXAxis:(id)axis;
-(id)errorBarYAxis;
-(void)setErrorBarYAxis:(id)axis;
-(id)defaultDataLabel;
-(void)setDefaultDataLabel:(id)label;
-(id)graphicProperties;
-(void)setGraphicProperties:(id)properties;
-(void)setDateTimeFormattingFlag:(bool)flag;
-(bool)isDateTimeFormattingFlag;
-(bool)isHidden;
-(void)setHiddenFlag:(bool)flag;
-(id)defaultSeriesNameForIndex:(int)index;
-(bool)isEmpty;
@end

