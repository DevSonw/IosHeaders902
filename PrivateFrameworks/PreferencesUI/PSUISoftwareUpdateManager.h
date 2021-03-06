/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SUManagerClientDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@protocol PSUISoftwareUpdateManagerDelegate;
@class SUAutoInstallOperation, RemoteUIController, UIViewController, SUManagerClient, SUDescriptor, SUDownload, SUMutableDownloadMetadata, NSString;

@interface PSUISoftwareUpdateManager : UIView <SUManagerClientDelegate, RemoteUIControllerDelegate> {

	char _manuallyStartedScan;
	char _anyScanInProgress;
	char _forceTermsModal;
	SUAutoInstallOperation* _autoInstallOperation;
	RemoteUIController* _termsRemoteUI;
	/*^block*/id _termsCompletion;
	UIViewController* _termsHostController;
	SUManagerClient* _SUManager;
	int _state;
	id<PSUISoftwareUpdateManagerDelegate> _delegate;
	SUDescriptor* _update;
	SUDownload* _download;
	SUMutableDownloadMetadata* _downloadMetadata;

}

@property (setter=UManager,nonatomic,readonly) SUManagerClient * SUManager;                      //@synthesize SUManager=_SUManager - In the implementation block
@property (assign,nonatomic) int state;                                                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<PSUISoftwareUpdateManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SUDescriptor * update;                                              //@synthesize update=_update - In the implementation block
@property (nonatomic,retain) SUDownload * download;                                              //@synthesize download=_download - In the implementation block
@property (nonatomic,retain) SUMutableDownloadMetadata * downloadMetadata;                       //@synthesize downloadMetadata=_downloadMetadata - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SUDownload *)download;
-(void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(char)arg3 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(int*)arg3 ;
-(void)setDelegate:(id<PSUISoftwareUpdateManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PSUISoftwareUpdateManagerDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(SUDescriptor *)update;
-(void)refreshState;
-(void)checkAutoInstall;
-(SUManagerClient *)SUManager;
-(void)presentTermsIfNececssaryOverViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startDownload;
-(void)cancelAutoInstall;
-(void)scanForUpdateCompletion:(/*^block*/id)arg1 ;
-(char)_SUDownloadPhaseIsQueued:(id)arg1 ;
-(Class)managerClientClass;
-(void)_setState:(int)arg1 error:(id)arg2 ;
-(void)setDownload:(SUDownload *)arg1 ;
-(void)setUpdate:(SUDescriptor *)arg1 ;
-(void)updateStateFromDownload:(id)arg1 ;
-(void)_loadRemoteUITermsWithCloudAtURL:(id)arg1 ;
-(void)_loadTermsRemoteUIFailureWithError:(id)arg1 ;
-(void)_loadTermsFromUpdateAsset;
-(void)_finishTermsWithAcceptance:(char)arg1 error:(id)arg2 ;
-(void)_termsDisagree;
-(void)_termsAgree;
-(void)_handleAgreeFromObjectModel:(id)arg1 ;
-(void)scanFinishedWithUpdate:(id)arg1 error:(id)arg2 ;
-(void)client:(id)arg1 scanRequestDidStartForOptions:(id)arg2 ;
-(void)client:(id)arg1 scanDidCompleteWithNewUpdateAvailable:(id)arg2 error:(id)arg3 ;
-(void)client:(id)arg1 downloadWasInvalidatedForNewUpdateAvailable:(id)arg2 ;
-(void)client:(id)arg1 downloadDidStart:(id)arg2 ;
-(void)client:(id)arg1 downloadProgressDidChange:(id)arg2 ;
-(void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3 ;
-(void)client:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3 ;
-(SUMutableDownloadMetadata *)downloadMetadata;
-(void)setDownloadMetadata:(SUMutableDownloadMetadata *)arg1 ;
@end

