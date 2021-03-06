/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
@class NSHashTable;

@interface SUNetworkMonitor : NSObject {

	SCNetworkReachabilityRef _reachability;
	NSHashTable* _observers;
	int _currentNetworkType;
	char _roaming;

}
+(id)sharedInstance;
+(char)holdsWiFiAssertion;
+(void)setHoldsWiFiAssertion:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(int)currentNetworkType;
-(char)isCellularDataRoamingEnabled;
-(char)_isCurrentlyRoaming;
-(void)_initNetworkObservation;
-(int)_networkTypeFromFlags:(unsigned)arg1 ;
-(void)setCurrentNetworkType:(int)arg1 ;
-(int)_networkTypeFromCurrentCellularData;
-(char)isNetworkTypeCellular:(int)arg1 ;
-(void)setCellularRoaming:(char)arg1 ;
-(void)_carrierBundleChanged;
-(void)_operatorBundleChanged;
-(char)isCellularRoaming;
@end

