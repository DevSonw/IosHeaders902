/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:52:30 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ADClient : NSObject
+(id)sharedClient;
-(void)lookupAdConversionDetails:(/*^block*/id)arg1 ;
-(void)requestAttributionDetailsWithBlock:(/*^block*/id)arg1 ;
-(void)addClientToSegments:(id)arg1 replaceExisting:(char)arg2 ;
-(void)determineAppInstallationAttributionWithCompletionHandler:(/*^block*/id)arg1 ;
@end

