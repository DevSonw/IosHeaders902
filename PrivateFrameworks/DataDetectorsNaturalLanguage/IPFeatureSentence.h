/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsNaturalLanguage/IPFeature.h>

@class NSString, RKText;

@interface IPFeatureSentence : IPFeature {

	char _hasCheckedEventVocabularyKeyword;
	char _hasCheckedEventVocabularyIgnoreDateKeyword;
	char _hasCheckedPolarity;
	unsigned _type;
	NSString* _languageID;
	unsigned _storedPolarity;
	RKText* _responseKitSentence;
	NSString* _storedEventVocabularyPositiveKeyword;
	NSString* _storedEventVocabularyRejectionKeyword;
	NSString* _storedEventVocabularyIgnoreDateKeyword;

}

@property (readonly) NSString * eventVocabularyPositiveKeyword; 
@property (readonly) NSString * eventVocabularyRejectionKeyword; 
@property (readonly) NSString * eventVocabularyIgnoreDateKeyword; 
@property (getter=isQuoteAttributionLine,readonly) char quoteAttributionLine; 
@property (assign) unsigned type;                                                          //@synthesize type=_type - In the implementation block
@property (readonly) unsigned polarity; 
@property (copy) NSString * languageID;                                                    //@synthesize languageID=_languageID - In the implementation block
@property (assign) unsigned storedPolarity;                                                //@synthesize storedPolarity=_storedPolarity - In the implementation block
@property (retain) RKText * responseKitSentence;                                           //@synthesize responseKitSentence=_responseKitSentence - In the implementation block
@property (copy) NSString * storedEventVocabularyPositiveKeyword;                          //@synthesize storedEventVocabularyPositiveKeyword=_storedEventVocabularyPositiveKeyword - In the implementation block
@property (copy) NSString * storedEventVocabularyRejectionKeyword;                         //@synthesize storedEventVocabularyRejectionKeyword=_storedEventVocabularyRejectionKeyword - In the implementation block
@property (copy) NSString * storedEventVocabularyIgnoreDateKeyword;                        //@synthesize storedEventVocabularyIgnoreDateKeyword=_storedEventVocabularyIgnoreDateKeyword - In the implementation block
+(id)eventVocabularyPositiveKeywordInString:(id)arg1 languageID:(id)arg2 ;
+(id)eventVocabularyRejectionKeywordInString:(id)arg1 languageID:(id)arg2 ;
+(id)bestLanguageIDFromText:(id)arg1 ;
+(id)eventVocabularyIgnoreDateKeywordInString:(id)arg1 languageID:(id)arg2 ;
+(id)regexPatternForLanguageID:(id)arg1 eventVocabularySet:(id)arg2 ;
+(id)eventVocabularyPositiveRegexForLanguageID:(id)arg1 ;
+(id)keywordForRegex:(id)arg1 inString:(id)arg2 ;
+(id)eventVocabularyRejectionRegexForLanguageID:(id)arg1 ;
+(id)eventVocabularyIgnoreDateRegexForLanguageID:(id)arg1 ;
-(id)description;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(unsigned)polarity;
-(char)isQuoteAttributionLine;
-(NSString *)eventVocabularyIgnoreDateKeyword;
-(NSString *)eventVocabularyRejectionKeyword;
-(NSString *)eventVocabularyPositiveKeyword;
-(id)initWithType:(unsigned)arg1 languageID:(id)arg2 responseKitSentence:(id)arg3 ;
-(void)setResponseKitSentence:(RKText *)arg1 ;
-(void)setStoredPolarity:(unsigned)arg1 ;
-(unsigned)storedPolarity;
-(RKText *)responseKitSentence;
-(void)checkEventVocabularyKeywordsIfNeeded;
-(NSString *)storedEventVocabularyPositiveKeyword;
-(NSString *)storedEventVocabularyRejectionKeyword;
-(void)setStoredEventVocabularyIgnoreDateKeyword:(NSString *)arg1 ;
-(NSString *)storedEventVocabularyIgnoreDateKeyword;
-(void)setStoredEventVocabularyPositiveKeyword:(NSString *)arg1 ;
-(void)setStoredEventVocabularyRejectionKeyword:(NSString *)arg1 ;
-(NSString *)languageID;
-(void)setLanguageID:(NSString *)arg1 ;
@end

