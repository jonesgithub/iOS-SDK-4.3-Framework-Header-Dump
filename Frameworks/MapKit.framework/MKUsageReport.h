/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface MKUsageReport : XXUnknownSuperclass {
@private
	NSString* _key;
	unsigned _count;
}
@property(readonly, assign, nonatomic) NSString* key;
@property(assign, nonatomic) unsigned count;
-(id)initWithKey:(id)key count:(unsigned)count;
-(void)dealloc;
-(void)add:(unsigned)add;
@end
