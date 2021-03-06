/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TUPrivacyManager : NSObject
+(id)sharedPrivacyManager;
-(void)dealloc;
-(id)init;
-(void)addRule:(id)arg1 ;
-(void)_handleBlockListChanged:(id)arg1 ;
-(void)setBlockIncomingCommunication:(char)arg1 forPhoneNumber:(id)arg2 ;
-(void)setBlockIncomingCommunication:(char)arg1 forEmailAddress:(id)arg2 ;
-(char)isIncomingCommunicationBlockedForPhoneNumber:(id)arg1 ;
-(char)isIncomingCommunicationBlockedForEmailAddress:(id)arg1 ;
-(id)allBlacklistRules;
-(void)removeRule:(id)arg1 ;
@end

