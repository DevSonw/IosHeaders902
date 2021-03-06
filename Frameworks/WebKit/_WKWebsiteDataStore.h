/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:51:37 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface _WKWebsiteDataStore : NSObject {

	RetainPtr<WKWebsiteDataStore>* _dataStore;

}

@property (getter=isNonPersistent,readonly) char nonPersistent; 
+(id)defaultDataStore;
+(id)nonPersistentDataStore;
-(void)fetchDataRecordsOfTypes:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDataOfTypes:(unsigned)arg1 modifiedSince:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeDataOfTypes:(unsigned)arg1 forDataRecords:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithDataStore:(id)arg1 ;
-(char)isNonPersistent;
@end

