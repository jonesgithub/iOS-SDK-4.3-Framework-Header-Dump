/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CLHeading, NSString, MKUserLocationSearchResult, CLLocation;

__attribute__((visibility("hidden")))
@interface MKUserLocationInternal : XXUnknownSuperclass {
@private
	CLLocation* location;
	CLLocation* fixedLocation;
	CLLocation* predictedLocation;
	CLHeading* heading;
	NSString* title;
	NSString* subtitle;
	MKUserLocationSearchResult* searchResult;
	int source;
	double timestamp;
	BOOL updating;
}
@property(assign, nonatomic, getter=isUpdating) BOOL updating;
@property(retain, nonatomic) CLLocation* fixedLocation;
@property(retain, nonatomic) CLLocation* location;
@property(retain, nonatomic) CLLocation* predictedLocation;
@property(retain, nonatomic) CLHeading* heading;
@property(readonly, assign, nonatomic) MKUserLocationSearchResult* searchResult;
@property(assign, nonatomic) int source;
@property(assign, nonatomic) double timestamp;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSString* subtitle;
@end

