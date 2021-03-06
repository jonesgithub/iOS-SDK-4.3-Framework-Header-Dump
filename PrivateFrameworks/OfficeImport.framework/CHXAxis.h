/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "CHXAxis.h"


__attribute__((visibility("hidden")))
@interface CHXAxis : XXUnknownSuperclass {
}
+(id)chdAxisFromXmlAxisElement:(xmlNode*)xmlAxisElement state:(id)state;
@end

@interface CHXAxis (Private)
+(Class)chxAxisClassWithXmlAxisElement:(xmlNode*)xmlAxisElement;
+(void)readScalingFromXmlScalingElement:(xmlNode*)xmlScalingElement axis:(id)axis state:(id)state;
+(int)chdAxisPositionFromXmlAxisElement:(xmlNode*)xmlAxisElement;
+(int)chdTickMarkFromXmlTickMarkElement:(xmlNode*)xmlTickMarkElement;
+(int)chdTickLabelPositionFromXmlTickLabelPositionElement:(xmlNode*)xmlTickLabelPositionElement;
+(int)chdCrossesFromXmlAxisElement:(xmlNode*)xmlAxisElement;
@end

