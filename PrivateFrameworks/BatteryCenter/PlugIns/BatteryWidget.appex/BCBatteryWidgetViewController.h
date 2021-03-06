/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenter.framework/PlugIns/BatteryWidget.appex/BatteryWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BatteryWidget/BatteryWidget-Structs.h>
#import <UIKit/UITableViewController.h>
#import <BatteryWidget/NCWidgetProviding.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSMutableArray, NSObject, NSValue, NSDictionary, NSArray, NSString;

@interface BCBatteryWidgetViewController : UITableViewController <NCWidgetProviding> {

	NSMutableArray* _pendingAnimatedUpdates;
	NSObject*<OS_dispatch_queue> _codingQueue;
	NSObject*<OS_dispatch_semaphore> _decodeDeviceStateSemaphore;
	NSValue* _deviceChangeHandlerIdentifier;
	NSDictionary* _devicesByIdentifier;
	NSArray* _orderedDeviceIDs;

}

@property (setter=_setDevicesByIdentifier:,getter=_devicesByIdentifier,nonatomic,retain) NSDictionary * devicesByIdentifier;              //@synthesize devicesByIdentifier=_devicesByIdentifier - In the implementation block
@property (setter=_setOrderedDeviceIDs:,getter=_orderedDeviceIDs,nonatomic,retain) NSArray * orderedDeviceIDs;                            //@synthesize orderedDeviceIDs=_orderedDeviceIDs - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_lazyCodingQueue;
-(char)_updateConnectedDevices:(id)arg1 withLiveDevices:(char)arg2 animated:(char)arg3 ;
-(void)_decodeDeviceStateWithCompletion:(/*^block*/id)arg1 ;
-(void)connectedDevicesDidChange:(id)arg1 ;
-(id)_orderedDeviceIDs;
-(void)_updateCell:(id)arg1 withDevice:(id)arg2 animated:(char)arg3 ;
-(void)_encodeDevices:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_setDevicesByIdentifier:(id)arg1 ;
-(void)_setOrderedDeviceIDs:(id)arg1 ;
-(unsigned)_lowChargeForDevice:(id)arg1 ;
-(id)_deviceForRowAtIndexPath:(id)arg1 ;
-(id)_deviceStateArchivingPathEnsuringExists:(char)arg1 ;
-(id)_devicesByIdentifier;
-(void)widgetPerformUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
@end

