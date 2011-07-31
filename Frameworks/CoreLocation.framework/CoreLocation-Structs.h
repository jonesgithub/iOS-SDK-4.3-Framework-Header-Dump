/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

typedef struct _NSZone NSZone;

typedef struct {
	double latitude;
	double longitude;
} XXStruct_zYrK5D;

typedef struct {
	int suitability;
	XXStruct_zYrK5D coordinate;
	double horizontalAccuracy;
	double altitude;
	double verticalAccuracy;
	double speed;
	double course;
	double timestamp;
	int confidence;
	double lifespan;
	int type;
} XXStruct_lPTB1C;

typedef struct __CLClient* CLClientRef;

typedef struct {
	double x;
	double y;
	double z;
	double magneticHeading;
	double trueHeading;
	double accuracy;
	double timestamp;
	double temperature;
	double magnitude;
	double inclination;
	int calibration;
} XXStruct__AuldD;

typedef struct {
	XXStruct_zYrK5D center;
	double radius;
	BOOL identifier[512];
} XXStruct_PcbLhD;

