/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSIndexSet, NSString, UIColor, EKEvent;

@interface EKDayOccurrenceView : XXUnknownSuperclass {
	NSString* _title;
	NSString* _location;
	UIColor* _color;
	UIColor* _textColor;
	float _visibleHeight;
	NSIndexSet* _titleMetrics;
	NSIndexSet* _locationMetrics;
	CGPoint _titleEndPoint;
	float _textEndY;
	CGRect _titleRect;
	CGRect _locationRect;
	CGRect _fullTextRect;
	EKEvent* _occurrence;
	id _delegate;
	unsigned _tentative : 1;
	unsigned _cancelled : 1;
	unsigned _selected : 1;
	unsigned _colorType : 2;
	unsigned _darkensSelection : 1;
	unsigned _dimmed : 1;
	unsigned _touchKeptInsideOccurrence;
}
@property(assign, nonatomic) id delegate;
@property(assign, nonatomic, getter=isCancelled) BOOL cancelled;
@property(assign, nonatomic, getter=isTentative) BOOL tentative;
@property(copy, nonatomic) NSString* location;
@property(copy, nonatomic) NSString* title;
@property(copy, nonatomic) UIColor* color;
@property(assign, nonatomic) BOOL dimmed;
@property(assign, nonatomic) BOOL darkensSelection;
@property(assign, nonatomic, getter=isSelected) BOOL selected;
@property(retain, nonatomic) EKEvent* occurrence;
+(id)_viewCache;
+(unsigned)_viewCacheSize;
+(void)_clearViewCache;
+(void)clearCaches;
+(id)occurrenceViewWithFrame:(CGRect)frame;
+(float)minimumHeight;
+(float)bottomShadowMargin;
+(void)pushRoundedRectPath:(CGRect)path inContext:(CGContextRef)context withCornerRadius:(float)cornerRadius;
+(id)_imageForBackgroundColor:(id)backgroundColor foregroundColor:(id)color height:(float)height;
+(id)_cachedImageForBackgroundColor:(id)backgroundColor foregroundColor:(id)color height:(float)height;
-(id)_tentativeOutline;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)_prepareForReuse;
-(void)removeFromSuperview;
-(void)setVisibleHeight:(float)height;
-(void)setFrame:(CGRect)frame;
-(void)_invalidateMetrics;
-(id)_titleFont;
-(void)_getTitleMetrics:(id*)metrics endPoint:(CGPoint*)point;
-(id)_locationFont;
-(id)_locationMetrics;
-(id)textColor;
-(void)_drawRect:(CGRect)rect;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(BOOL)shouldTrack;
@end

