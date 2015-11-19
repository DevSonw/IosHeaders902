/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <callservicesd/CSDUserActivityCommunicatorDelegate.h>

@class CSDUserActivityCommunicator, CSDUserActivity, NSString;

@interface CSDUserActivityManager : NSObject <CSDUserActivityCommunicatorDelegate> {

	CSDUserActivityCommunicator* _activityCommunicator;
	CSDUserActivity* _handoffActivity;

}

@property (nonatomic,retain) CSDUserActivityCommunicator * activityCommunicator;              //@synthesize activityCommunicator=_activityCommunicator - In the implementation block
@property (nonatomic,retain) CSDUserActivity * handoffActivity;                               //@synthesize handoffActivity=_handoffActivity - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setActivityCommunicator:(CSDUserActivityCommunicator *)arg1 ;
-(CSDUserActivityCommunicator *)activityCommunicator;
-(void)callStatusChanged:(id)arg1 ;
-(void)callContinuityChanged:(id)arg1 ;
-(void)shouldSuppressRingtoneChanged:(id)arg1 ;
-(void)callStartedConnecting:(id)arg1 ;
-(void)thumperCallingCapabilitiesChanged:(id)arg1 ;
-(void)updateHandoffRegistration;
-(void)updateAppHistoryActivityForCall;
-(void)updateHandoffActivityState;
-(void)updateSuppressRingtoneActivityListeningState;
-(void)unregisterHandoffActivityHandling;
-(void)registerHandoffActivityHandling;
-(CSDUserActivity *)handoffActivity;
-(void)endHandoffActivity;
-(void)setHandoffActivity:(CSDUserActivity *)arg1 ;
-(void)startSuppressRingtoneActivityBroadcastingForCall:(id)arg1 ;
-(void)startSuppressRingtoneActivityBroadcastingIfNecessaryForCallWithStatusChange:(id)arg1 ;
-(void)receivedBroadcastedActivityType:(unsigned)arg1 dynamicIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end
