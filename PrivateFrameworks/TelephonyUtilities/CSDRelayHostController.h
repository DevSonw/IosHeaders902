/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <callservicesd/CSDRelayController.h>
#import <callservicesd/CSDRelayMessagingControllerHostMessagingDelegate.h>

@class NSString;

@interface CSDRelayHostController : CSDRelayController <CSDRelayMessagingControllerHostMessagingDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pushHostedCalls;
-(void)handleDialCallMessageFromClient:(id)arg1 fromPairedDevice:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleAnswerCallMessageFromClient:(id)arg1 fromPairedDevice:(char)arg2 ;
-(void)handlePlayDTMFToneForKeyMessageFromClient:(id)arg1 ;
-(void)handleHoldCallMessageFromClient:(id)arg1 ;
-(void)handleUnholdCallMessageFromClient:(id)arg1 ;
-(void)handleConferenceCallMessageFromClient:(id)arg1 ;
-(void)handleUnconferenceCallMessageFromClient:(id)arg1 ;
-(void)handleDisconnectCallMessageFromClient:(id)arg1 ;
-(void)handleSwapCallsMessageFromClient:(id)arg1 ;
-(void)handleEndActiveAndAnswerMessageFromClient:(id)arg1 ;
-(void)handleEndHeldAndAnswerMessageFromClient:(id)arg1 ;
-(void)handleDisconnectCurrentCallAndActivateHeldMessageFromClient:(id)arg1 ;
-(void)handleDisconnectAllCallsMessageFromClient:(id)arg1 ;
-(void)handleSendHardPauseDigitsMessageFromClient:(id)arg1 ;
-(void)handleRequestCallStateMessageFromClient:(id)arg1 ;
-(void)handlePullHostedCallsMessageFromClient:(id)arg1 ;
-(void)handlePushRelayingCallsMessageFromClient:(id)arg1 ;
-(void)_conferenceDidStopForCall:(id)arg1 cleanly:(char)arg2 error:(id)arg3 ;
-(void)_launchInCallApplicationForOutgoingCallOnHostIfNecessary;
-(void)_answerHostedCall:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)callWithUniqueProxyIdentifier:(id)arg1 ;
@end
