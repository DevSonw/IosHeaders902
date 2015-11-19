/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@protocol CoreDAVItem <NSObject>
@required
+(id)copyParseRules;
+(id)parseRuleCache;
-(char)validate;
-(void)parserFoundAttributes:(id)arg1;
-(id)copyParseRules;
-(void)write:(id)arg1;
-(void)parserFoundPayload:(id)arg1;
-(void)parserFoundUnrecognizedElement:(id)arg1;
-(void)parserSuggestsBaseURL:(id)arg1;

@end


@class NSString, NSMutableSet, NSMutableArray, NSData;

@interface CoreDAVItem : NSObject <CoreDAVItem> {

	NSString* _name;
	NSString* _nameSpace;
	NSMutableSet* _attributes;
	NSMutableArray* _extraChildItems;
	NSData* _payload;
	char _useCDATA;

}

@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * nameSpace;                          //@synthesize nameSpace=_nameSpace - In the implementation block
@property (nonatomic,retain) NSMutableSet * attributes;                     //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * extraChildItems;              //@synthesize extraChildItems=_extraChildItems - In the implementation block
@property (nonatomic,retain) NSData * payload;                              //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) char useCDATA;                                 //@synthesize useCDATA=_useCDATA - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)copyParseRules;
+(id)parseRuleCache;
-(NSString *)nameSpace;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSData *)payload;
-(NSMutableSet *)attributes;
-(id)hashString;
-(char)validate;
-(void)setAttributes:(NSMutableSet *)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(id)payloadAsString;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)parserFoundAttributes:(id)arg1 ;
-(NSMutableArray *)extraChildItems;
-(id)copyParseRules;
-(id)childrenToWrite;
-(void)setPayloadAsString:(id)arg1 ;
-(void)write:(id)arg1 ;
-(void)setNameSpace:(NSString *)arg1 ;
-(void)parserFoundPayload:(id)arg1 ;
-(void)parserFoundUnrecognizedElement:(id)arg1 ;
-(void)parserSuggestsBaseURL:(id)arg1 ;
-(id)generateXMLString;
-(void)setExtraChildItems:(NSMutableArray *)arg1 ;
-(char)useCDATA;
-(void)setUseCDATA:(char)arg1 ;
@end
