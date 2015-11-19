/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/searchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPSearchQuery.h>
#import <searchd/SPSearchResultsPipe.h>

@protocol OS_dispatch_source;
@class SPXPCConnection, NSObject, NSMutableArray, NSArray, NSDictionary, NSMutableDictionary, SPXPCMessage, NSString;

@interface SDSearchQuery : SPSearchQuery <SPSearchResultsPipe> {

	SPXPCConnection* _connection;
	unsigned _externalID;
	unsigned long long _stopWaitTime;
	NSObject*<OS_dispatch_source> _timer;
	NSMutableArray* _waitingDomains;
	NSArray* _bottomRankedCategories;
	char _didSendTopHits;
	char _didSendResults;
	char _isZKW;
	NSDictionary* _category_stats;
	NSArray* _parsecCategoryOrdering;
	NSMutableDictionary* _categoryToResultMapping;
	SPXPCMessage* _message;
	NSString* _fbq;
	NSString* _web_fbq;
	NSMutableArray* _tokens;
	NSMutableArray* _slowTokens;
	NSMutableDictionary* _sections;
	unsigned long long _startTime;

}

@property (nonatomic,retain) NSDictionary * category_stats;                              //@synthesize category_stats=_category_stats - In the implementation block
@property (nonatomic,retain) NSArray * parsecCategoryOrdering;                           //@synthesize parsecCategoryOrdering=_parsecCategoryOrdering - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * categoryToResultMapping;              //@synthesize categoryToResultMapping=_categoryToResultMapping - In the implementation block
@property (nonatomic,readonly) SPXPCConnection * connection;                             //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) unsigned externalID;                                      //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,retain) SPXPCMessage * message;                                     //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) char isZKW;                                                 //@synthesize isZKW=_isZKW - In the implementation block
@property (assign,nonatomic) unsigned long long startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (readonly) NSString * fbq;                                                     //@synthesize fbq=_fbq - In the implementation block
@property (readonly) NSString * web_fbq;                                                 //@synthesize web_fbq=_web_fbq - In the implementation block
@property (nonatomic,retain) NSMutableArray * tokens;                                    //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,retain) NSMutableArray * slowTokens;                                //@synthesize slowTokens=_slowTokens - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sections;                             //@synthesize sections=_sections - In the implementation block
-(char)storeCompletedSearch:(id)arg1 ;
-(void)sendError:(id)arg1 ;
-(void)sendQueryCompleted;
-(void)setIsZKW:(char)arg1 ;
-(void)domainCompletedSearch:(unsigned)arg1 ;
-(void)addSlowQueryToken:(id)arg1 ;
-(void)addQueryToken:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 keyboardPrimaryLanguage:(id)arg3 forSearchDomains:(id)arg4 disabledBundles:(id)arg5 externalID:(unsigned)arg6 connection:(id)arg7 ;
-(void)storeWillComplete:(id)arg1 ;
-(void)setSlowTokens:(NSMutableArray *)arg1 ;
-(id)getBagCEPBlacklist:(id)arg1 ;
-(char)isFoundInCache:(id)arg1 ;
-(id)orderedCategories:(id)arg1 ;
-(char)isZKW;
-(void)subcategorize:(id)arg1 ;
-(void)makeTopHits:(id)arg1 maxTopHitCount:(int)arg2 ;
-(void)getSmartRankedDomains:(id*)arg1 bottom:(id*)arg2 blacklisted:(id*)arg3 ;
-(void)sendResultsForKeys:(id)arg1 toSendSections:(id)arg2 ;
-(void)sendResults:(id)arg1 ;
-(void)sendFinishedDomains;
-(void)setParsecCategoryOrdering:(NSArray *)arg1 ;
-(void)appendResults:(id)arg1 ;
-(void)appendSection:(id)arg1 toSerializerDomain:(unsigned)arg2 ;
-(void)appendSerializer:(id)arg1 toSerializerDomain:(unsigned)arg2 ;
-(void)sendQueryReset;
-(NSArray *)parsecCategoryOrdering;
-(NSMutableDictionary *)categoryToResultMapping;
-(void)setCategoryToResultMapping:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)slowTokens;
-(unsigned)externalID;
-(void)cancel;
-(void)dealloc;
-(void)setStartTime:(unsigned long long)arg1 ;
-(SPXPCMessage *)message;
-(void)setMessage:(SPXPCMessage *)arg1 ;
-(unsigned long long)startTime;
-(SPXPCConnection *)connection;
-(void)setSections:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sections;
-(NSMutableArray *)tokens;
-(void)setTimeout:(float)arg1 ;
-(void)sendData:(id)arg1 ;
-(NSDictionary *)category_stats;
-(void)setCategory_stats:(NSDictionary *)arg1 ;
-(void)setTokens:(NSMutableArray *)arg1 ;
-(void)appendSection:(id)arg1 ;
-(NSString *)fbq;
-(NSString *)web_fbq;
-(void)appendResults:(id)arg1 toSerializerDomain:(unsigned)arg2 ;
-(void)queryFinishedWithError:(id)arg1 ;
-(char)offersDefaultSearch;
-(char)onlyDefaultSearch;
@end
