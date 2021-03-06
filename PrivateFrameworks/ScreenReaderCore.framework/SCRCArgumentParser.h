/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "SCRCArgumentSubcommand.h"

@class NSString, NSMutableArray;

@interface SCRCArgumentParser : SCRCArgumentSubcommand {
	int _argc;
	char** _argv;
	NSMutableArray* _subcommandArray;
	NSMutableArray* _argumentArray;
	NSString* _appName;
	SCRCArgumentSubcommand* _subcommand;
	BOOL _isLaunchedAtLogin;
}
+(id)processIdentifier;
+(id)versionString;
+(id)commandPath;
-(id)initWithArgc:(int)argc argv:(const char**)argv;
-(void)dealloc;
-(char**)argv;
-(int)argc;
-(BOOL)isLaunchedAtLogin;
-(void)setAppName:(id)name;
-(id)appName;
-(void)addSubcommand:(id)subcommand;
-(BOOL)parse;
-(int)run;
-(void)stop;
-(id)_displayVersion:(id)version;
-(id)_displayHelp:(id)help;
-(id)setRunningAtStartup:(id)startup;
@end

