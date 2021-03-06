/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@class MIDINetworkHost;
typedef struct _MIDINetworkConnectionImpl {
	MIDINetworkHost* _field1;
} MIDINetworkConnectionImpl;

@class NSString;
typedef struct _MIDINetworkHostImpl {
	NSString* _field1;
	NSString* _field2;
	unsigned _field3;
	NSString* _field4;
	NSString* _field5;
} MIDINetworkHostImpl;

typedef struct OpaqueMIDIEntity OpaqueMIDIEntity;

typedef struct OpaqueMIDIEndpoint OpaqueMIDIEndpoint;

@class NSMutableSet;
typedef struct ContactOrConnectionSet {
	bool mItemsAreConnections;
	NSMutableSet* mSet;
} ContactOrConnectionSet;

@class NSMutableDictionary;
typedef struct _MIDINetworkSessionImpl {
	OpaqueMIDIEntity* _field1;
	OpaqueMIDIEndpoint* _field2;
	OpaqueMIDIEndpoint* _field3;
	NSString* _field4;
	NSMutableDictionary* _field5;
	ContactOrConnectionSet _field6;
} MIDINetworkSessionImpl;


