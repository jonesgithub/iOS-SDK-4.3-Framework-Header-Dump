/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStatusBarItemView.h"


__attribute__((visibility("hidden")))
@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView {
@private
	int _dataNetworkType;
	int _wifiStrengthRaw;
	int _wifiStrengthBars;
	BOOL _enableRSSI;
	BOOL _showRSSI;
}
-(float)extraLeftPadding;
-(float)maximumOverlap;
-(BOOL)updateForNewData:(XXStruct_LyCp7D*)newData actions:(int)actions;
-(id)contentsImageForStyle:(int)style;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(id)_dataNetworkImageForStyle:(int)style;
-(id)_stringForRSSI;
@end

