/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"


@protocol SafeVMUProcInfoProtocol
+(id)getProcessIds;
+(BOOL)isProcessRunning:(int)running;
+(int)processParentId:(int)anId;
-(unsigned)task;
-(int)pid;
-(int)ppid;
-(id)name;
-(timeval)startTime;
-(id)description;
-(id)procTableName;
-(id)realAppName;
-(id)requestedAppName;
-(id)firstArgument;
-(id)arguments;
-(id)userAppName;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(int)compare:(id)compare;
-(int)compareByName:(id)name;
-(BOOL)isApp;
-(BOOL)isMachO;
-(BOOL)isCFM;
-(BOOL)isRunning;
-(int)cpuType;
-(BOOL)isNative;
@end

