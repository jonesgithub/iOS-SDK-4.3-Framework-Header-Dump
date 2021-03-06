/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "ABVCardValueSetter.h"
#import "AddressBook-Structs.h"


@interface ABVCardPersonValueSetter : ABVCardValueSetter {
	void* _person;
	CFArrayRef _properties;
}
+(CFArrayRef)supportedProperties;
-(id)initWithPerson:(void*)person;
-(CFArrayRef)foundProperties;
-(void)dealloc;
-(BOOL)setValue:(void*)value forProperty:(unsigned)property;
-(void*)valueForProperty:(unsigned)property;
-(BOOL)setImageData:(id)data;
-(id)fullName;
-(void)setValueInTemporaryCache:(id)temporaryCache forProperty:(unsigned)property;
@end

