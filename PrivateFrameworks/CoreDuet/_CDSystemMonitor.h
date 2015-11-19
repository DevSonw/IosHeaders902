/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableArray, CDContextStore, NSString;

@interface _CDSystemMonitor : NSObject {

	NSObject*<OS_dispatch_source> memPressureMonitor;
	NSMutableArray* registrations;
	NSObject*<OS_dispatch_queue> _queue;
	CDContextStore* _store;
	NSObject*<OS_dispatch_source> psChangeDispatch;
	char psChangeTimerDispatched;
	NSObject*<OS_dispatch_source> backlightChangeDispatch;
	char backlightTimerDispatched;
	int backlightMonitorToken;
	char _userInactive;
	char _inBatterySaverMode;
	unsigned _memState;
	unsigned _thermalState;
	unsigned _chargingState;
	NSString* _powerSource;

}

@property (assign,nonatomic) unsigned memState;                    //@synthesize memState=_memState - In the implementation block
@property (assign,nonatomic) unsigned thermalState;                //@synthesize thermalState=_thermalState - In the implementation block
@property (assign,nonatomic) unsigned chargingState;               //@synthesize chargingState=_chargingState - In the implementation block
@property (nonatomic,retain) NSString * powerSource;               //@synthesize powerSource=_powerSource - In the implementation block
@property (assign,nonatomic) char userInactive;                    //@synthesize userInactive=_userInactive - In the implementation block
@property (assign,nonatomic) char inBatterySaverMode;              //@synthesize inBatterySaverMode=_inBatterySaverMode - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)registerForNotifications;
-(id)registerHandler:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(NSString *)powerSource;
-(unsigned)chargingState;
-(unsigned)thermalState;
-(unsigned)memState;
-(char)userInactive;
-(char)inBatterySaverMode;
-(void)handleUserActivityNotification:(unsigned long long)arg1 ;
-(void)handleBacklightStateChange;
-(void)handleBatterySaverNotification:(unsigned long long)arg1 ;
-(void)checkMemoryState;
-(void)handleThermalNotification:(unsigned long long)arg1 ;
-(void)handlePowerSourceNotification;
-(void)setPowerSource:(NSString *)arg1 ;
-(void)notifyPsChange;
-(void)sendNotification:(unsigned)arg1 ;
-(char)deRegisterHandler:(id)arg1 ;
-(void)registerForPredicate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setMemState:(unsigned)arg1 ;
-(void)setThermalState:(unsigned)arg1 ;
-(void)setChargingState:(unsigned)arg1 ;
-(void)setUserInactive:(char)arg1 ;
-(void)setInBatterySaverMode:(char)arg1 ;
@end
