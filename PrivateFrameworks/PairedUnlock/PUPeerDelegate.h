/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedUnlock.framework/pairedunlockd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PUPeerDelegate <NSObject>
@required
-(void)peer:(id)arg1 remoteDeviceRequestsPasscodeAction:(int)arg2 type:(int)arg3 existingPasscode:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)peerRemoteDeviceDidUnlock:(id)arg1;
-(void)peer:(id)arg1 wantsNotificationOfNextUnlock:(char)arg2;
-(void)peer:(id)arg1 didNotifyStateHasPasscode:(char)arg2 isPasscodeLocked:(char)arg3 isUnlockOnly:(char)arg4;
-(void)peer:(id)arg1 didPairForUnlock:(char)arg2 error:(id)arg3;

@end

