/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:56 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSError, NSMutableArray, NSData, NSSet, NSURL;

@interface NSXMLParser : NSObject {

	id _reserved0;
	id _delegate;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	xmlSAXHandler* _saxHandler;
	xmlParserCtxt* _parserContext;
	unsigned _parserFlags;
	NSError* _error;
	NSMutableArray* _namespaces;
	CFDictionaryRef _slowStringMap;
	char _delegateAborted;
	char _haveDetectedEncoding;
	NSData* _bomChunk;
	unsigned _chunkSize;
	NSSet* _allowedEntityURLs;
	NSURL* _url;
	unsigned _externalEntityResolvingPolicy;

}

@property (assign) id<NSXMLParserDelegate> delegate; 
@property (assign) char shouldProcessNamespaces; 
@property (assign) char shouldReportNamespacePrefixes; 
@property (assign) unsigned externalEntityResolvingPolicy; 
@property (copy) NSSet * allowedExternalEntityURLs; 
@property (copy,readonly) NSError * parserError; 
@property (assign) char shouldResolveExternalEntities; 
+(void)setCurrentParser:(id)arg1 ;
+(id)currentParser;
-(void)_initializeSAX2Callbacks;
-(id)initForIncrementalParsing;
-(unsigned)externalEntityResolvingPolicy;
-(NSSet *)allowedExternalEntityURLs;
-(void)_setExpandedParserError:(id)arg1 ;
-(void)_setParserError:(int)arg1 ;
-(char)shouldResolveExternalEntities;
-(char)parseData:(id)arg1 ;
-(char)_handleParseResult:(int)arg1 ;
-(char)finishIncrementalParse;
-(char)parseFromStream;
-(void)setShouldProcessNamespaces:(char)arg1 ;
-(void)setShouldReportNamespacePrefixes:(char)arg1 ;
-(void)setShouldResolveExternalEntities:(char)arg1 ;
-(void)setAllowedExternalEntityURLs:(NSSet *)arg1 ;
-(void)setExternalEntityResolvingPolicy:(unsigned)arg1 ;
-(xmlParserInput*)_xmlExternalEntityWithURL:(const char*)arg1 identifier:(const char*)arg2 context:(xmlParserCtxt*)arg3 originalLoaderFunction:(/*function pointer*/void*)arg4 ;
-(char)shouldProcessNamespaces;
-(char)shouldReportNamespacePrefixes;
-(void)setShouldContinueAfterFatalError:(char)arg1 ;
-(char)shouldContinueAfterFatalError;
-(void)abortParsing;
-(NSError *)parserError;
-(id)publicID;
-(id)systemID;
-(int)lineNumber;
-(void)_pushNamespaces:(id)arg1 ;
-(void)_popNamespaces;
-(char)parse;
-(void)setDelegate:(id<NSXMLParserDelegate>)arg1 ;
-(void)dealloc;
-(id<NSXMLParserDelegate>)delegate;
-(id)initWithData:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)initWithStream:(id)arg1 ;
-(void)finalize;
-(int)columnNumber;
@end

