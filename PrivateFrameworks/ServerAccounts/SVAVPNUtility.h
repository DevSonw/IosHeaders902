/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ServerAccounts.framework/ServerAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SVAVPNUtility : NSObject
+(char)isVPNProfileInstalledForAccount:(id)arg1 ;
+(char)setPassword:(id)arg1 forVPNConfiguration:(id)arg2 ;
+(void)installVPNProfileForAccount:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)removeVPNProfileForAccount:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
