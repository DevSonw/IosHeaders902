/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTrafficDevice/AirTrafficDevice-Structs.h>
#import <ATFoundation/ATSocket.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface ATLockdownSocket : ATSocket {

	void* _lockdownInfo;
	lockdown_connectionRef _connection;
	NSObject*<OS_dispatch_source> _recvSource;
	NSObject*<OS_dispatch_queue> _socketRWQueue;
	char _readBuffer[65536];

}

@property (nonatomic,readonly) char isWifi; 
-(void)dealloc;
-(void)close;
-(id)initWithLockdownInfo:(void*)arg1 ;
-(void)_readLength:(unsigned)arg1 ;
-(int)send:(const char*)arg1 offset:(unsigned)arg2 len:(unsigned)arg3 error:(id*)arg4 ;
-(void)writeData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(int)recv:(char*)arg1 offset:(unsigned)arg2 len:(unsigned)arg3 error:(id*)arg4 ;
-(char)open;
-(char)isWifi;
-(char)isOpen;
@end

