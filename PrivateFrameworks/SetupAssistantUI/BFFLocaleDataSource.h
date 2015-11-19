/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString, NSMutableArray;

@interface BFFLocaleDataSource : NSObject {

	NSArray* _canonicalLocales;
	NSString* _language;
	NSMutableArray* _suggestedCountries;
	NSMutableArray* _moreCountries;

}

@property (nonatomic,copy) NSString * language;                                //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSMutableArray * suggestedCountries;              //@synthesize suggestedCountries=_suggestedCountries - In the implementation block
@property (nonatomic,retain) NSMutableArray * moreCountries;                   //@synthesize moreCountries=_moreCountries - In the implementation block
+(id)newWithLanguage:(id)arg1 ;
-(void)reloadData;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setSuggestedCountries:(NSMutableArray *)arg1 ;
-(void)setMoreCountries:(NSMutableArray *)arg1 ;
-(NSMutableArray *)suggestedCountries;
-(NSMutableArray *)moreCountries;
-(unsigned)numberOfRecommendedLocales;
-(unsigned)numberOfOtherLocales;
-(id)recommendedLocaleAtIndex:(unsigned)arg1 ;
-(id)otherLocaleAtIndex:(unsigned)arg1 ;
@end
