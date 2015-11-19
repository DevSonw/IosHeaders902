/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CRDRecentContactsLibraryProtocol <NSObject>
@required
-(void)searchRecentsUsingQuery:(id)arg1 completion:(/*^block*/id)arg2;
-(void)recordContactEvents:(id)arg1 domain:(id)arg2 sendingAddress:(id)arg3 source:(id)arg4;
-(void)removeRecentContactsWithRecentIDs:(id)arg1 syncKeys:(id)arg2 domain:(id)arg3;

@end
