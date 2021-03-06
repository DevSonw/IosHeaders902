/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface SBConferenceManager : NSObject {

	char _hasFaceTimeCapability;
	MGNotificationTokenStructRef _faceTimeCapabilityUpdateToken;

}
+(id)sharedInstance;
+(void)initialize;
-(char)activeFaceTimeCallExists;
-(void)endFaceTime;
-(char)inFaceTime;
-(char)faceTimeInvitationExists;
-(char)hasFaceTimeCapability;
-(char)canStartFaceTime;
-(void)_faceTimeStateChanged:(id)arg1 ;
-(void)_faceTimeCapabilityChanged:(id)arg1 ;
-(id)incomingFaceTimeCall;
-(id)activeFaceTimeCall;
-(id)currentFaceTimeCall;
-(id)_faceTimeApp;
-(char)faceTimeIsAvailable;
-(void)dealloc;
-(id)init;
@end

