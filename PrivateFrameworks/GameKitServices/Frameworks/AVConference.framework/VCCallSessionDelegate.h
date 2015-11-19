/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VCCallSessionDelegate
@required
-(char)stopVideoSend:(char)arg1 error:(id*)arg2;
-(void)session:(id)arg1 withCallID:(unsigned long)arg2 videoIsDegraded:(char)arg3 isRemote:(char)arg4;
-(void)session:(id)arg1 didChangeRemoteScreenAttributes:(id)arg2;
-(void)session:(id)arg1 changeVideoRulesToCaptureRule:(id)arg2 encodeRule:(id)arg3 featuresListString:(id)arg4;
-(void)session:(id)arg1 remoteMediaStalled:(char)arg2;
-(void)session:(id)arg1 receivedNoPacketsForSeconds:(double)arg2;
-(void)session:(id)arg1 packMeters:(char*)arg2 withLength:(char*)arg3;
-(void)session:(id)arg1 didPauseAudio:(char)arg2 error:(id)arg3;
-(void)didChangeLocalVariablesForSession:(id)arg1;
-(void)session:(id)arg1 sendRelayResponse:(id)arg2;
-(int)currentCameraID;
-(void)session:(id)arg1 inititiateRelayRequest:(id)arg2;
-(void)session:(id)arg1 didReceiveData:(id)arg2 withCallID:(unsigned long)arg3;
-(void)closeConnectionForSession:(id)arg1 withCallID:(unsigned long)arg2;
-(void)session:(id)arg1 cancelRelayRequest:(id)arg2;
-(void)session:(id)arg1 withCallID:(unsigned long)arg2 networkHint:(char)arg3;
-(void)session:(id)arg1 didStart:(char)arg2 connectionType:(unsigned)arg3 localUseCell:(unsigned)arg4 remoteUseCell:(unsigned)arg5 error:(id)arg6;
-(void)session:(id)arg1 didStopWithError:(id)arg2;
-(void)session:(id)arg1 didStopWithDelay:(int)arg2 error:(id)arg3;
-(void)remoteVideoDidPause:(char)arg1 callID:(unsigned long)arg2;
-(void)remoteAudioDidPause:(char)arg1 callID:(unsigned long)arg2;
-(void)session:(id)arg1 localAudioEnabled:(char)arg2 withCallID:(unsigned long)arg3 error:(id)arg4;
-(char)session:(id)arg1 startVideoSend:(id*)arg2 captureRule:(id)arg3 isUnpausing:(char)arg4;
-(char)session:(id)arg1 startVideoReceive:(id*)arg2;
-(char)session:(id)arg1 didStopVideoIO:(char)arg2 error:(id*)arg3;
-(char)stopVideoReceive:(id*)arg1;
-(BOOL)didDetectBandwidth:(char)arg1 upstreamBandwidth:(int)arg2 downstreamBandwidth:(int)arg3;
-(void)setBWEOptions:(char)arg1 UseNewBWEMode:(char)arg2 FakeLargeFrameMode:(char)arg3 ProbingSenderLog:(char)arg4;
-(void)session:(id)arg1 remoteAudioEnabled:(char)arg2 withCallID:(unsigned long)arg3;
-(void)session:(id)arg1 remoteCallingModeChanged:(unsigned long)arg2 withCallID:(unsigned long)arg3;
-(void)session:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned long)arg3;
-(void)session:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned long)arg3;
-(void)session:(id)arg1 didChangeVideoRule:(id)arg2;
-(BOOL)session:(id)arg1 receivedRemoteFrame:(CVBufferRef)arg2 atTime:(SCD_Struct_VC12)arg3 withScreenAttributes:(id)arg4 videoAttributes:(id)arg5 isFirstFrame:(char)arg6 isVideoPaused:(char)arg7;
-(void)session:(id)arg1 didSeeThermalChange:(double)arg2;
-(BOOL)session:(id)arg1 startVideoIO:(id*)arg2 captureRule:(id)arg3 isUnpausing:(char)arg4;

@end
