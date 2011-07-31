/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "NSObject.h"


@protocol GQLassoGenerator <NSObject>
+(int)beginDocument:(id)document state:(id)state;
+(int)endDocument:(id)document state:(id)state;
+(int)handleStylesheet:(id)stylesheet state:(id)state;
+(int)beginWorkspace:(const char*)workspace state:(id)state;
+(int)endWorkspace:(id)workspace;
+(int)handleWorkspaceStyle:(id)style state:(id)state;
+(Class)beginWorkspacePage:(id)page state:(id)state;
+(int)handleDrawableZOrder:(const char*)order state:(id)state;
@end
