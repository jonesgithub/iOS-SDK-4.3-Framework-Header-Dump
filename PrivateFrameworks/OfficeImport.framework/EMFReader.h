/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFReader.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class EMFPlayer;

__attribute__((visibility("hidden")))
@interface EMFReader : XXUnknownSuperclass <MFReader> {
@private
	EMFPlayer* m_player;
}
-(id)initWithEMFPlayer:(id)emfplayer;
-(void)dealloc;
-(oneway void)release;
-(int)play:(id)play;
@end
