/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AssistantCallbackUIDelegateResult
@optional
-(void)callbackAskUserForUncertifiedResult:(long)arg1;
-(void)callbackAskUserForSetupCodeResult:(long)arg1 password:(id)arg2;

@required
-(void)callbackAskUserForPasswordResult:(long)arg1 password:(id)arg2 remember:(int)arg3;
-(void)callbackAskUserToChooseFromStringListResult:(long)arg1 selectedString:(id)arg2;
-(void)callbackAskUserAQuestionResult:(int)arg1 result:(long)arg2;

@end
