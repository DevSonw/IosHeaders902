/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface iAP2EASessionList : NSObject {

	NSMutableDictionary* _iap2SessionMap;

}
-(id)sessionWithSessionID:(unsigned short)arg1 ;
-(void)addSession:(id)arg1 withSessionID:(unsigned short)arg2 ;
-(void)removeSessionWithSessionID:(unsigned short)arg1 ;
-(id)sessions;
-(id)sessionsForClientID:(unsigned)arg1 ;
-(id)sessionWithProtocolID:(unsigned char)arg1 ;
-(id)sessionsWithProtocolID:(unsigned char)arg1 ;
-(void)dealloc;
-(id)init;
@end

