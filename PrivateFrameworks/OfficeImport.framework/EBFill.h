/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "EBFill.h"


__attribute__((visibility("hidden")))
@interface EBFill : XXUnknownSuperclass {
}
+(id)edFillFromXlXf:(XlXf*)xlXf edResources:(id)resources;
+(id)edFillFromXlDXf:(XlDXf*)xlDXf edResources:(id)resources;
@end

@interface EBFill (Private)
+(int)convertXlFillPatternEnumToED:(int)ed;
@end
