/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BBDataProviderConnectionServerProxy <NSObject>
@required
-(void)addDataProviderWithSectionID:(id)arg1 clientProxy:(id)arg2 identity:(id)arg3 completion:(/*^block*/id)arg4;
-(void)removeDataProviderWithSectionID:(id)arg1;
-(void)addParentSectionFactory:(id)arg1;
-(void)clientIsReady:(/*^block*/id)arg1;

@end
