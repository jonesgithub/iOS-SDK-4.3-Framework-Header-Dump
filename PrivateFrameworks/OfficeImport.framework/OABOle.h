/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABOle : XXUnknownSuperclass {
}
+(id)read4ByteFromStream:(SsrwOOStream*)stream;
+(id)readAnsiStringFromStream:(SsrwOOStream*)stream;
+(id)stringForCLSID:(SsrwOO_GUID)clsid;
+(id)readCLSIDFromStream:(SsrwOOStream*)stream;
+(BOOL)isBiffCLSID:(id)clsid;
+(BOOL)isChart:(id)chart;
+(id)readUnicodeStringFromStream:(SsrwOOStream*)stream;
+(BOOL)readSharedInfoFor:(id)aFor fromStorage:(SsrwOOStorage*)storage;
+(id)readFromFileName:(id)fileName cancel:(id)cancel;
+(id)readFromParentStorage:(SsrwOOStorage*)parentStorage storageName:(id)name cancel:(id)cancel;
+(id)readFromData:(id)data cancel:(id)cancel;
+(id)readCompressedFromStream:(SsrwOOStream*)stream compressedSize:(unsigned long)size uncompressedSize:(unsigned long)size3 cancel:(id)cancel;
+(id)readFromStream:(SsrwOOStream*)stream size:(unsigned long)size cancel:(id)cancel;
@end
