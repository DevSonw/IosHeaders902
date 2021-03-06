/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSUUID;

@interface _HDHealthDeviceConnectionInfo : NSObject {

	unsigned _sessionIdentifier;
	/*^block*/id _sessionHandler;
	/*^block*/id _transitoryHandler;
	/*^block*/id _characteristicsHandler;
	NSUUID* _peripheralUUID;
	int _connectionState;

}

@property (assign,nonatomic) unsigned sessionIdentifier;               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) id sessionHandler;                      //@synthesize sessionHandler=_sessionHandler - In the implementation block
@property (nonatomic,readonly) id transitoryHandler;                   //@synthesize transitoryHandler=_transitoryHandler - In the implementation block
@property (nonatomic,readonly) id characteristicsHandler;              //@synthesize characteristicsHandler=_characteristicsHandler - In the implementation block
@property (nonatomic,readonly) NSUUID * peripheralUUID;                //@synthesize peripheralUUID=_peripheralUUID - In the implementation block
@property (assign,nonatomic) int connectionState;                      //@synthesize connectionState=_connectionState - In the implementation block
-(int)connectionState;
-(unsigned)sessionIdentifier;
-(void)setSessionIdentifier:(unsigned)arg1 ;
-(NSUUID *)peripheralUUID;
-(id)characteristicsHandler;
-(id)initWithSessionHandler:(/*^block*/id)arg1 transitoryHandler:(/*^block*/id)arg2 characteristicsHandler:(/*^block*/id)arg3 peripheralUUID:(id)arg4 ;
-(void)setConnectionState:(int)arg1 ;
-(id)sessionHandler;
-(id)transitoryHandler;
@end

