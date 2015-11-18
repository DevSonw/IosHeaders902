/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:45:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSURL, NSError;

@interface CAMLParser : NSObject {

	CAMLParserDataRef _data;

}

@property (retain) NSURL * baseURL; 
@property (__weak) id delegate; 
@property (readonly) NSError * error; 
@property (readonly) id result; 
+(id)parser;
+(id)parseContentsOfURL:(id)arg1 ;
-(BOOL)parseData:(id)arg1 ;
-(NSError *)error;
-(void)setElementValue:(id)arg1 ;
-(id)objectById:(id)arg1 ;
-(id)attributeForKey:(id)arg1 remove:(char)arg2 ;
-(void)parserError:(id)arg1 ;
-(id)elementValue;
-(void)parserWarning:(id)arg1 ;
-(id)willLoadResourceFromURL:(id)arg1 ;
-(void)didLoadResource:(id)arg1 fromURL:(id)arg2 ;
-(BOOL)parseContentsOfURL:(id)arg1 ;
-(BOOL)parseBytes:(const char*)arg1 length:(unsigned long)arg2 ;
-(BOOL)parseString:(id)arg1 ;
-(id)didFailToLoadResourceFromURL:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(NSURL *)baseURL;
-(id)result;
-(void)setBaseURL:(NSURL *)arg1 ;
@end
