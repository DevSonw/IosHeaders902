/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CSDCallStateController, CSDRelayMessagingController, CSDCallController, NSArray;

@interface CSDRelayController : NSObject {

	CSDCallStateController* _callStateController;

}

@property (nonatomic,retain) CSDCallStateController * callStateController;                          //@synthesize callStateController=_callStateController - In the implementation block
@property (nonatomic,readonly) CSDRelayMessagingController * relayMessagingController; 
@property (nonatomic,readonly) CSDCallController * callController; 
@property (nonatomic,readonly) NSArray * allCalls; 
-(CSDCallStateController *)callStateController;
-(CSDRelayMessagingController *)relayMessagingController;
-(CSDCallController *)callController;
-(NSArray *)allCalls;
-(void)setCallStateController:(CSDCallStateController *)arg1 ;
@end
