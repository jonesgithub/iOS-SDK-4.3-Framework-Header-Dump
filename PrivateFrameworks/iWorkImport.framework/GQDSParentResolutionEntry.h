/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDSParentResolutionEntry : XXUnknownSuperclass {
@private
	char* mParentIdentifier;
	GQDSStyle* mStyle;
}
-(id)initWithStyle:(id)style parentIdentifier:(const char*)identifier;
-(void)dealloc;
-(id)style;
-(const char*)parentIdentifier;
@end
