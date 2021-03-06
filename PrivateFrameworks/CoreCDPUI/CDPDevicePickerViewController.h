/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreCDPUI/CDPTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol CDPDevicePickerDelegate;
@class NSArray, UIButton, UILabel, NSString;

@interface CDPDevicePickerViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate> {

	NSArray* _devices;
	id<CDPDevicePickerDelegate> _delegate;
	UIButton* _remoteApprovalButton;
	UILabel* _encryptedLabel;
	char _shouldOfferRemoteApproval;

}

@property (assign,nonatomic) char shouldOfferRemoteApproval;              //@synthesize shouldOfferRemoteApproval=_shouldOfferRemoteApproval - In the implementation block
@property (nonatomic,copy) NSArray * devices;                             //@synthesize devices=_devices - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDevices:(NSArray *)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(id)initWithDevices:(id)arg1 delegate:(id)arg2 ;
-(void)setShouldOfferRemoteApproval:(char)arg1 ;
-(void)approveFromAnotherDeviceTapped:(id)arg1 ;
-(char)shouldOfferRemoteApproval;
-(NSArray *)devices;
@end

