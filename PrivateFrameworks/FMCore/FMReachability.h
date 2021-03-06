/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FMCore/FMCore-Structs.h>
@interface FMReachability : NSObject {

	char localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithHostName:(id)arg1 ;
-(void)dealloc;
-(unsigned)localWiFiStatusForFlags:(unsigned)arg1 ;
-(unsigned)networkStatusForFlags:(unsigned)arg1 ;
-(char)connectionRequired;
-(unsigned)currentReachabilityStatus;
-(char)startNotifier;
-(void)stopNotifier;
@end

