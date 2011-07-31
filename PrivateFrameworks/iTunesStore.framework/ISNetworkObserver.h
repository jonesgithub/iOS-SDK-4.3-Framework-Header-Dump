/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iTunesStore-Structs.h"
#import "ISSingleton.h"
#import "SSDownloadQueueObserver.h"

@class NSString, NSMutableSet;

@interface ISNetworkObserver : XXUnknownSuperclass <ISSingleton, SSDownloadQueueObserver> {
	dispatch_queue_s* _dispatchQueue;
	double _lastNetworkTypeChangeTime;
	int _networkUsageCount;
	CFBagRef _networkUsageCountByAsset;
	int _networkType;
	NSMutableSet* _observedDownloadQueues;
	SCNetworkReachabilityRef _reachability;
}
@property(readonly, assign, getter=isWiFiEnabled) BOOL wifiEnabled;
@property(readonly, assign) NSString* connectionTypeHeader;
@property(readonly, assign) BOOL shouldShowCellularAutomaticDownloadsSwitch;
@property(readonly, assign, getter=isUsingNetwork) BOOL usingNetwork;
@property(readonly, assign) double lastNetworkTypeChangeTime;
@property(assign) int networkType;
+(void)setSharedInstance:(id)instance;
+(id)sharedInstance;
+(void)set3GEnabled:(BOOL)enabled;
+(void)setAirplaneModeEnabled:(BOOL)enabled;
+(void)setWiFiEnabled:(BOOL)enabled;
-(id)init;
-(void)dealloc;
-(void)beginObservingDownloadQueue:(id)queue;
-(void)beginUsingNetwork;
-(id)copyValueForCarrierBundleKey:(id)carrierBundleKey;
-(void)endObservingDownloadQueue:(id)queue;
-(void)endUsingNetwork;
-(void)beginUsingNetworkForAssetType:(int)assetType;
-(id)copyActiveAssetTypes;
-(void)endUsingNetworkForAssetType:(int)assetType;
-(void)reloadNetworkType;
-(void)downloadQueue:(id)queue changedWithRemovals:(id)removals;
-(void)downloadQueueNetworkUsageChanged:(id)changed;
-(void)_dataStatusChangedNotification:(id)notification;
-(void)_telephonyObserverAvailableNotification:(id)notification;
-(int)_currentNetworkType;
-(int)_networkTypeFromDataIndicator:(id)dataIndicator;
-(BOOL)_ntsIsUsingNetwork;
-(void)_postTypeChangedNotificationFromValue:(int)value toValue:(int)value2;
-(void)_postUsageChangedToValue:(BOOL)value;
-(void)_reloadNetworkType;
-(int)_setNetworkType:(int)type;
@end
