/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOLocation, GEOSessionID, GEOMapRegion, NSString;

__attribute__((visibility("hidden")))
@interface GEOMapQuery : PBCodable {
@private
	NSString* _query;
	int _requestType;
	int _mapCenterX;
	BOOL _hasMapCenterX;
	int _mapCenterY;
	BOOL _hasMapCenterY;
	int _mapSpanX;
	BOOL _hasMapSpanX;
	int _mapSpanY;
	BOOL _hasMapSpanY;
	int _zoomlevel;
	BOOL _hasZoomlevel;
	int _clientImgFmt;
	BOOL _hasClientImgFmt;
	int _tilesizeX;
	BOOL _hasTilesizeX;
	int _tilesizeY;
	BOOL _hasTilesizeY;
	int _clientImgMaxWidth;
	BOOL _hasClientImgMaxWidth;
	int _clientImgMaxHeight;
	BOOL _hasClientImgMaxHeight;
	GEOMapRegion* _mapRegion;
	GEOLocation* _userLocation;
	GEOSessionID* _sessionID;
}
@property(retain, nonatomic) NSString* query;
@property(assign, nonatomic) int requestType;
@property(assign, nonatomic) int mapCenterX;
@property(readonly, assign, nonatomic) BOOL hasMapCenterX;
@property(assign, nonatomic) int mapCenterY;
@property(readonly, assign, nonatomic) BOOL hasMapCenterY;
@property(assign, nonatomic) int mapSpanX;
@property(readonly, assign, nonatomic) BOOL hasMapSpanX;
@property(assign, nonatomic) int mapSpanY;
@property(readonly, assign, nonatomic) BOOL hasMapSpanY;
@property(assign, nonatomic) int zoomlevel;
@property(readonly, assign, nonatomic) BOOL hasZoomlevel;
@property(assign, nonatomic) int clientImgFmt;
@property(readonly, assign, nonatomic) BOOL hasClientImgFmt;
@property(assign, nonatomic) int tilesizeX;
@property(readonly, assign, nonatomic) BOOL hasTilesizeX;
@property(assign, nonatomic) int tilesizeY;
@property(readonly, assign, nonatomic) BOOL hasTilesizeY;
@property(assign, nonatomic) int clientImgMaxWidth;
@property(readonly, assign, nonatomic) BOOL hasClientImgMaxWidth;
@property(assign, nonatomic) int clientImgMaxHeight;
@property(readonly, assign, nonatomic) BOOL hasClientImgMaxHeight;
@property(retain, nonatomic) GEOMapRegion* mapRegion;
@property(retain, nonatomic) GEOLocation* userLocation;
@property(retain, nonatomic) GEOSessionID* sessionID;
@property(readonly, assign, nonatomic) BOOL hasSessionID;
@property(readonly, assign, nonatomic) BOOL hasUserLocation;
@property(readonly, assign, nonatomic) BOOL hasMapRegion;
-(id)init;
-(void)dealloc;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

