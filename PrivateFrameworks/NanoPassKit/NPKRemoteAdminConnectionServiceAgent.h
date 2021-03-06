/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NPKCompanionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NPKCompanionAgent/NFRemoteAdminConnectionAvailabilityListener.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <NPKCompanionAgent/NPKPaymentWebServiceTargetDeviceDelegate.h>
#import <NPKCompanionAgent/PKPaymentWebServiceBackgroundDelegate.h>
#import <NPKCompanionAgent/PKSecureElementConsistencyCheckerDelegate.h>

@protocol OS_dispatch_queue;
@class NSArray, IDSService, PKPaymentWebService, NPKPaymentWebServiceTargetDevice, NSObject, NPDCompanionPaymentPassDatabase, NSString;

@interface NPKRemoteAdminConnectionServiceAgent : NSObject <NFRemoteAdminConnectionAvailabilityListener, IDSServiceDelegate, NPKPaymentWebServiceTargetDeviceDelegate, PKPaymentWebServiceBackgroundDelegate, PKSecureElementConsistencyCheckerDelegate> {

	NSArray* _secureElementApplets;
	IDSService* _remoteAdminService;
	Class _pluginConnectionClass;
	PKPaymentWebService* _webService;
	NPKPaymentWebServiceTargetDevice* _targetDevice;
	NSObject*<OS_dispatch_queue> _remoteAdminQueue;
	NPDCompanionPaymentPassDatabase* _companionPaymentPassDatabase;
	NSString* _pendingAvailabilityChangeMessageID;
	NSObject*<OS_dispatch_queue> _secureElementAppletsQueue;

}

@property (nonatomic,retain) IDSService * remoteAdminService;                                     //@synthesize remoteAdminService=_remoteAdminService - In the implementation block
@property (nonatomic,retain) Class pluginConnectionClass;                                         //@synthesize pluginConnectionClass=_pluginConnectionClass - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * webService;                                    //@synthesize webService=_webService - In the implementation block
@property (nonatomic,retain) NPKPaymentWebServiceTargetDevice * targetDevice;                     //@synthesize targetDevice=_targetDevice - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> remoteAdminQueue;                       //@synthesize remoteAdminQueue=_remoteAdminQueue - In the implementation block
@property (retain) NPDCompanionPaymentPassDatabase * companionPaymentPassDatabase;                //@synthesize companionPaymentPassDatabase=_companionPaymentPassDatabase - In the implementation block
@property (nonatomic,retain) NSString * pendingAvailabilityChangeMessageID;                       //@synthesize pendingAvailabilityChangeMessageID=_pendingAvailabilityChangeMessageID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> secureElementAppletsQueue;              //@synthesize secureElementAppletsQueue=_secureElementAppletsQueue - In the implementation block
@property (nonatomic,retain) NSArray * secureElementApplets;                                      //@synthesize secureElementApplets=_secureElementApplets - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleCompanionPaymentPassDatabaseChanged:(id)arg1 ;
-(void)setCompanionPaymentPassDatabase:(NPDCompanionPaymentPassDatabase *)arg1 ;
-(NPDCompanionPaymentPassDatabase *)companionPaymentPassDatabase;
-(id)initWithCompanionPaymentPassDatabase:(id)arg1 ;
-(void)dumpRemoteLogsWithCompletion:(/*^block*/id)arg1 ;
-(void)deprovisionPass:(id)arg1 ;
-(void)handleDeletionForPaymentPassWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleUpdatedSharedPaymentWebServiceContext:(id)arg1 ;
-(void)setPluginConnectionClass:(Class)arg1 ;
-(Class)pluginConnectionClass;
-(void)_setupBackgroundWebService;
-(void)setRemoteAdminQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)remoteAdminQueue;
-(void)remoteAdminPerformRequest:(id)arg1 ;
-(void)remoteAdminAvailabilityRequest:(id)arg1 ;
-(void)setRemoteAdminService:(IDSService *)arg1 ;
-(IDSService *)remoteAdminService;
-(void)_unregisterWebServiceWithCompletion:(/*^block*/id)arg1 ;
-(void)_savePaymentWebServiceContext;
-(void)_updatePassWithTypeIdentifier:(id)arg1 ;
-(void)_savePaymentWebServiceBackgroundContext;
-(void)setPendingAvailabilityChangeMessageID:(NSString *)arg1 ;
-(NSString *)pendingAvailabilityChangeMessageID;
-(void)performConsistencyCheckWithCompletion:(/*^block*/id)arg1 ;
-(void)setSecureElementApplets:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)secureElementAppletsQueue;
-(void)remoteAdminConnectionAvailabilityDidChange:(char)arg1 ;
-(id)secureElementCards;
-(void)setSecureElementAppletsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NPKPaymentWebServiceTargetDevice *)targetDevice;
-(id)paymentApplications;
-(PKPaymentWebService *)webService;
-(id)paymentPasses;
-(void)updateRegionSupportIfNecessary;
-(void)setWebService:(PKPaymentWebService *)arg1 ;
-(void)dealloc;
-(void)connect;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(void)handlePreconditionNotMetWithUniqueIDs:(id)arg1 shouldUnregister:(char)arg2 ;
-(void)handlePushToken:(id)arg1 ;
-(void)handleUpdatePaymentPassWithTypeIdentifier:(id)arg1 ;
-(void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2 ;
-(void)shouldArchiveWebServiceContext:(id)arg1 ;
-(void)shouldArchiveWebServiceBackgroundContext:(id)arg1 ;
-(void)shouldSetNewAuthRandom:(/*^block*/id)arg1 ;
-(void)redownloadAllPaymentPassesWithCompletion:(/*^block*/id)arg1 ;
-(void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)initiateConsistencyCheckWithCompletion:(/*^block*/id)arg1 ;
-(void)handlePendingUnpairingWithCompletion:(/*^block*/id)arg1 ;
-(void)handlePendingiCloudSignoutWithCompletion:(/*^block*/id)arg1 ;
-(id)sharedPaymentWebServiceContext;
-(void)setTargetDevice:(NPKPaymentWebServiceTargetDevice *)arg1 ;
-(void)paymentWebService:(id)arg1 didDownloadPassRemoteAssets:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentWebServiceBackgroundSessionDidBecomeInvalid:(id)arg1 ;
-(void)paymentWebService:(id)arg1 didDownloadSerialNumbersForInstalledPasses:(id)arg2 inRegion:(id)arg3 ;
-(void)paymentWebService:(id)arg1 didDownloadPass:(id)arg2 ;
-(NSArray *)secureElementApplets;
-(void)scheduleConsistencyCheck:(id)arg1 pluggedIn:(char)arg2 ;
-(void)deleteCardsWithAIDs:(id)arg1 ;
-(char)synchronizeWithTSM;
-(void)didDownloadPaymentPass:(id)arg1 ;
@end

