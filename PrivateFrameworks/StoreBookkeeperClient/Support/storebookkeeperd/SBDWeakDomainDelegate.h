/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBDPushNotificationControllerDelegate;
@interface SBDWeakDomainDelegate : NSObject {

	id<SBDPushNotificationControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBDPushNotificationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SBDPushNotificationControllerDelegate>)arg1 ;
-(id<SBDPushNotificationControllerDelegate>)delegate;
@end
