/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "RadiosPreferencesDelegate.h"

@class RadiosPreferences, SBSIMLockAlertItem, SBSIMLockEntryAlert, NSString;

@interface SBSIMLockManager : XXUnknownSuperclass <RadiosPreferencesDelegate> {
	BOOL _isInitialUpdate;
	BOOL _isBrickedDevice;
	int _status;
	SBSIMLockAlertItem* _currentAlert;
	SBSIMLockEntryAlert* _lockEntryAlert;
	NSString* _languageCode;
	RadiosPreferences* _radiosPrefs;
}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)_hopelesslyPUKLocked;
-(int)_CTToSBSIMStatus:(CFStringRef)sbsimstatus;
-(int)_statusFromCT;
-(void)lockEntryAlertDismissed:(id)dismissed;
-(void)alertItemDismissed:(id)dismissed;
-(void)repopAlert;
-(void)attemptUnlock;
-(void)_updateToStatus:(int)status;
-(void)_tryToUpdateStatus;
-(void)airplaneModeChanged;
-(void)_tearDownAlertAndUpdateStatus;
-(void)_updateSIMStatus:(CFStringRef)status withOptions:(CFDictionaryRef)options;
-(int)pinLockAttemptsRemaining;
-(int)pukLockAttemptsRemaining;
-(void)_initialUpdate;
-(void)_lockdownChanged;
-(void)registerForAlerts;
-(int)status;
-(id)languageCode;
@end

