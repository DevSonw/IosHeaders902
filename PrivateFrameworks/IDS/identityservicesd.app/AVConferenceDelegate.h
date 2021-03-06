/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVConferenceDelegate
@optional
-(void)conference:(id)arg1 didStartSession:(char)arg2 withCallID:(int)arg3 error:(id)arg4;
-(void)conference:(id)arg1 withCallID:(int)arg2 didPauseAudio:(char)arg3 error:(id)arg4;
-(void)conference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3 callMetadata:(id)arg4;
-(void)conference:(id)arg1 localIPChange:(id)arg2 withCallID:(int)arg3;
-(void)conference:(id)arg1 updateInputMeterLevel:(float)arg2;
-(void)conference:(id)arg1 updateOutputMeterLevel:(float)arg2;
-(void)conference:(id)arg1 didReceiveARPLData:(id)arg2 withCallID:(int)arg3;
-(void)conference:(id)arg1 didReceiveData:(id)arg2 forCallID:(int)arg3;
-(void)conference:(id)arg1 didChangeLocalVariablesForCallID:(int)arg2;
-(void)conference:(id)arg1 remoteAudioEnabled:(char)arg2 forCallID:(unsigned long)arg3;
-(void)conference:(id)arg1 localAudioEnabled:(char)arg2 forCallID:(unsigned long)arg3 error:(id)arg4;
-(void)conference:(id)arg1 remoteCallingModeChanged:(unsigned long)arg2 forCallID:(unsigned long)arg3;
-(void)conference:(id)arg1 reinitializeCallForCallID:(unsigned long)arg2;
-(void)conference:(id)arg1 closeConnectionForCallID:(int)arg2;

@required
-(void)conference:(id)arg1 didStartSession:(char)arg2 withUserInfo:(id)arg3;
-(void)conference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3;
-(void)conference:(id)arg1 withCallID:(int)arg2 remoteMediaStalled:(char)arg3;
-(void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(int)arg2;
-(void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(int)arg3;
-(void)conference:(id)arg1 remoteAudioPaused:(char)arg2 callID:(int)arg3;
-(void)conference:(id)arg1 remoteVideoPaused:(char)arg2 callID:(int)arg3;
-(void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(int)arg3;
-(void)conference:(id)arg1 updateInputFrequencyLevel:(id)arg2;
-(void)conference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
-(void)conference:(id)arg1 inititiateRelayRequest:(int)arg2 requestDict:(id)arg3;
-(void)conference:(id)arg1 sendRelayUpdate:(int)arg2 updateDict:(id)arg3;
-(void)conference:(id)arg1 cancelRelayRequest:(int)arg2 requestDict:(id)arg3;
-(void)conference:(id)arg1 videoQualityNotificationForCallID:(int)arg2 isDegraded:(char)arg3 isRemote:(char)arg4;
-(void)conference:(id)arg1 withCallID:(int)arg2 networkHint:(char)arg3;
-(void)serverDiedForConference:(id)arg1;

@end

