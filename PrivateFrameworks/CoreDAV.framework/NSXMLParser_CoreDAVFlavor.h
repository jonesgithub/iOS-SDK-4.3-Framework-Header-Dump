/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CoreDAV-Structs.h"


@interface NSXMLParser_CoreDAVFlavor : XXUnknownSuperclass {
@private
	id _delegate;
	id _reserved1;
	id _reserved2;
	id _reserved3;
}
-(id)_info;
-(id)initWithContentsOfURL:(id)url;
-(id)initWithData:(id)data;
-(id)initForIterativeParsing;
-(id)delegate;
-(void)setDelegate:(id)delegate;
-(void)setShouldProcessNamespaces:(BOOL)processNamespaces;
-(void)setShouldReportNamespacePrefixes:(BOOL)reportNamespacePrefixes;
-(void)setShouldResolveExternalEntities:(BOOL)resolveExternalEntities;
-(void)setShouldAutoreleaseReportedObjects:(BOOL)autoreleaseReportedObjects;
-(BOOL)shouldProcessNamespaces;
-(BOOL)shouldReportNamespacePrefixes;
-(BOOL)shouldResolveExternalEntities;
-(BOOL)shouldAutoreleaseReportedObjects;
-(void)setShouldContinueAfterFatalError:(BOOL)continueAfterFatalError;
-(BOOL)shouldContinueAfterFatalError;
-(BOOL)parseData:(id)data;
-(void)finishIterativeParsing;
-(BOOL)parse;
-(void)abortParsing;
-(id)parserError;
-(id)publicID;
-(id)systemID;
-(int)lineNumber;
-(int)columnNumber;
-(void)dealloc;
-(void)finalize;
-(void)_setParserError:(int)error;
-(xmlParserCtxt*)_parserContext;
-(void)_pushNamespaces:(id)namespaces;
-(void)_popNamespaces;
-(void)_initializeSAX2Callbacks;
@end

