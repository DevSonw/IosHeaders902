/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <Sharing/Sharing-Structs.h>
@class NSObject;

@interface SFWirelessSettingsController : NSObject {

	id _delegate;
	char _wifiEnabled;
	char _bluetoothEnabled;
	char _deviceSupportsWAPI;
	char _firstCallbackCompleted;
	char _wirelessCarPlayEnabled;
	char _wirelessAccessPointEnabled;
	SFOperationRef _information;
	NSObject*<OS_dispatch_queue> _informationQueue;
	NSObject*<OS_dispatch_semaphore> _firstCallBackSemaphore;

}

@property (__weak) id<SFWirelessSettingsControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (getter=isBluetoothEnabled) char bluetoothEnabled; 
@property (getter=isWifiEnabled) char wifiEnabled; 
@property (getter=isWirelessAccessPointEnabled,readonly) char wirelessAccessPointEnabled; 
@property (getter=isWirelessCarPlayEnabled,readonly) char wirelessCarPlayEnabled; 
@property (readonly) char deviceSupportsWAPI; 
-(char)isWifiEnabled;
-(void)setDelegate:(id<SFWirelessSettingsControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SFWirelessSettingsControllerDelegate>)delegate;
-(void)setWifiEnabled:(char)arg1 ;
-(char)isWirelessCarPlayEnabled;
-(char)deviceSupportsWAPI;
-(char)isBluetoothEnabled;
-(void)handleOperationCallback:(SFOperationRef)arg1 event:(long)arg2 withResults:(id)arg3 ;
-(void)setBluetoothEnabled:(char)arg1 ;
-(void)repairAppleID;
-(char)isWirelessAccessPointEnabled;
@end
