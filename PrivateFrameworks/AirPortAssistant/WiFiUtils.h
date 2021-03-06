/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <AirPortAssistant/AirPortAssistant-Structs.h>
@class NSDictionary, NSMutableDictionary, NSObject, NSTimer;

@interface WiFiUtils : NSObject {

	NSDictionary* _unmergedScanInfoDict;
	NSMutableDictionary* _missingBSSIDCounts;
	WiFiShimContextRef _wifiShim;
	NSObject*<OS_dispatch_semaphore> _wifiBusy;
	char _scanInProgress;
	char _joinInProgress;
	char _scanningActive;
	char _scanOnlyWhenAppActive;
	NSTimer* _scanTimer;
	int _periodicScanType;
	double _periodicScanInterval;

}

@property (nonatomic,retain) NSTimer * _scanTimer;                     //@synthesize scanTimer=_scanTimer - In the implementation block
@property (assign,nonatomic) int periodicScanType;                     //@synthesize periodicScanType=_periodicScanType - In the implementation block
@property (assign,nonatomic) double periodicScanInterval;              //@synthesize periodicScanInterval=_periodicScanInterval - In the implementation block
+(id)sharedInstance;
+(char)scanInfoIsSTAOnly:(id)arg1 ;
+(id)sharedInstanceRef;
+(unsigned)scanInfoAppleProductID:(id)arg1 ;
+(int)scanInfoDeviceKind:(id)arg1 ;
+(id)scanInfoFriendlyName:(id)arg1 ;
+(id)getNetworkPassword:(id)arg1 ;
+(char)networkIsSecure:(id)arg1 secMode:(int*)arg2 isEnterprise:(char*)arg3 ;
+(id)scanInfoNetworkName:(id)arg1 ;
+(char)scanInfoIsUnconfigured:(id)arg1 ;
+(char)scanInfoSupportsMFIConfigV1:(id)arg1 ;
+(char)scanInfoSupportsACPConfigV1:(id)arg1 ;
+(char)scanInfoSupportsSpruce:(id)arg1 ;
+(id)scanInfoBSSIDStr:(id)arg1 ;
+(char)scanInfoIsMFIAirPlayDevice:(id)arg1 ;
+(id)scanInfoModelName:(id)arg1 ;
+(id)scanInfoManufacturerName:(id)arg1 ;
+(void)sharedInstanceRelease;
+(char)scanInfoIs5GHz:(id)arg1 ;
+(char)scanInfoIsInSoftReset:(id)arg1 ;
+(id)scanInfoStringFromAppleDeviceIE:(id)arg1 forType:(int)arg2 ;
+(char)scanInfoIsAirPlayDevice:(id)arg1 ;
+(char)scanInfoTestBitFromAppleDeviceIE:(id)arg1 forType:(int)arg2 ;
+(char)scanInfoIsAudioDevice:(id)arg1 ;
+(char)network:(id)arg1 shouldBeIgnored:(int)arg2 ;
+(char)scanInfoIsIBSS:(id)arg1 ;
+(char)scanInfoIsGuestNetwork:(id)arg1 ;
+(char)scanInfoIsDWDSCapable:(id)arg1 isDWDSEnabled:(char*)arg2 ;
+(id)scanInfoAirPortUniqueIdentifier:(id)arg1 ;
+(unsigned)scanInfoSubAppleProductID:(id)arg1 ;
+(char)scanInfoIsiAPOverWiFiDevice:(id)arg1 ;
+(char)scanInfoCanJoin2_4GHzNetworks:(id)arg1 ;
+(char)scanInfoCanJoin5GHzNetworks:(id)arg1 ;
+(char)networkIsApple:(id)arg1 productID:(unsigned*)arg2 ;
+(id)copyFilteredNetworks:(id)arg1 ignoreOptions:(int)arg2 ;
+(int)barsForRSSI:(int)arg1 ;
+(char)stringArray:(id)arg1 containsBSSID:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(char)airPortIsOn;
-(long)asyncWiFiScan:(id)arg1 wifiType:(int)arg2 merge:(char)arg3 maxAge:(unsigned)arg4 ;
-(long)setAutoJoinState:(char)arg1 ;
-(id)unmergedScanInfoArray;
-(void)cancelAsync;
-(id)getPreferredNetworks:(char)arg1 ;
-(char)isCurrentlyAssociatedToAnInfrastructureNetwork:(char*)arg1 ;
-(id)getCurrentAssociationInfo;
-(char)getAutoJoinState;
-(long)disassociateSync;
-(long)clearScanCacheSync;
-(long)joinNetworkWithScanInfoAsync:(id)arg1 password:(id)arg2 rememberChoice:(int)arg3 ;
-(char)isScanningActive;
-(void)setPeriodicScanType:(int)arg1 ;
-(void)setPeriodicScanInterval:(double)arg1 ;
-(void)activateScanning:(char)arg1 ;
-(id)mergedScanInfoArray;
-(id)getNetworkPasswordForNetworkNamed:(id)arg1 ;
-(id)scanInfoForMACAddress:(id)arg1 ;
-(id)scanInfoForName:(id)arg1 wifiType:(int)arg2 ;
-(long)joinNetworkWithNameAsync:(id)arg1 password:(id)arg2 rememberChoice:(int)arg3 ;
-(NSTimer *)_scanTimer;
-(void)set_scanTimer:(NSTimer *)arg1 ;
-(void)setUnmergedScanInfoDict:(id)arg1 ;
-(void)scanTimerCallback:(id)arg1 ;
-(long)closeWiFi;
-(void)triggerScan;
-(char)isScanInProgress;
-(void)setScanInProgress:(char)arg1 ;
-(char)isJoinInProgress;
-(void)setJoinInProgress:(char)arg1 ;
-(id)unmergedScanInfoDict;
-(void)joinNetworkWithScanInfoThread:(id)arg1 ;
-(void)joinNetworkWithNameThread:(id)arg1 ;
-(id)getCurrentAssociationScanInfo;
-(void)asyncWiFiScanThread:(id)arg1 ;
-(long)_asyncWiFiScan:(id)arg1 wifiType:(int)arg2 merge:(char)arg3 maxAge:(unsigned)arg4 isPeriodic:(char)arg5 ;
-(int)periodicScanType;
-(double)periodicScanInterval;
-(long)joinNetworkWithScanInfoSync:(id)arg1 password:(id)arg2 rememberChoice:(int)arg3 ;
-(void)mergeScanResults:(id)arg1 ;
-(void)setScanOnlyWhenAppActive:(char)arg1 ;
-(id)unconfiguredScanInfosOfType:(int)arg1 ;
-(id)resetScanInfosOfType:(int)arg1 ;
-(id)getCurrentAssociationInfoOrNil;
-(id)getIfList;
-(id)getLinkStatus;
-(long)openWiFi;
@end

