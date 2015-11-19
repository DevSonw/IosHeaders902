/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PUConnection, NSSManager, PKPaymentWebService, NSDate;

@interface NPKPaymentPreflighter : NSObject {

	char _checkedWatchPasscodeAndUnlockedStatus;
	char _checkedCompanioniCloudStatus;
	char _checkedWatchiCloudStatus;
	char _checkedWristDetectionStatus;
	char _authRandomSetIfNecessary;
	char _needsPasscode;
	char _needsUnlock;
	char _watchConnected;
	char _needsCompanioniCloudAccount;
	char _needsWatchiCloudAccount;
	char _needsWristDetection;
	char _preflighting;
	PUConnection* _passcodeConnection;
	NSSManager* _systemSettingsManager;
	/*^block*/id _preflightCompletionHandler;
	PKPaymentWebService* _webService;
	NSDate* _watchPasscodeAndUnlockedQueryDate;

}

@property (nonatomic,retain) PUConnection * passcodeConnection;                       //@synthesize passcodeConnection=_passcodeConnection - In the implementation block
@property (nonatomic,retain) NSSManager * systemSettingsManager;                      //@synthesize systemSettingsManager=_systemSettingsManager - In the implementation block
@property (assign,nonatomic) char checkedWatchPasscodeAndUnlockedStatus;              //@synthesize checkedWatchPasscodeAndUnlockedStatus=_checkedWatchPasscodeAndUnlockedStatus - In the implementation block
@property (assign,nonatomic) char checkedCompanioniCloudStatus;                       //@synthesize checkedCompanioniCloudStatus=_checkedCompanioniCloudStatus - In the implementation block
@property (assign,nonatomic) char checkedWatchiCloudStatus;                           //@synthesize checkedWatchiCloudStatus=_checkedWatchiCloudStatus - In the implementation block
@property (assign,nonatomic) char checkedWristDetectionStatus;                        //@synthesize checkedWristDetectionStatus=_checkedWristDetectionStatus - In the implementation block
@property (assign,nonatomic) char authRandomSetIfNecessary;                           //@synthesize authRandomSetIfNecessary=_authRandomSetIfNecessary - In the implementation block
@property (assign,nonatomic) char needsPasscode;                                      //@synthesize needsPasscode=_needsPasscode - In the implementation block
@property (assign,nonatomic) char needsUnlock;                                        //@synthesize needsUnlock=_needsUnlock - In the implementation block
@property (assign,nonatomic) char watchConnected;                                     //@synthesize watchConnected=_watchConnected - In the implementation block
@property (assign,nonatomic) char needsCompanioniCloudAccount;                        //@synthesize needsCompanioniCloudAccount=_needsCompanioniCloudAccount - In the implementation block
@property (assign,nonatomic) char needsWatchiCloudAccount;                            //@synthesize needsWatchiCloudAccount=_needsWatchiCloudAccount - In the implementation block
@property (assign,nonatomic) char needsWristDetection;                                //@synthesize needsWristDetection=_needsWristDetection - In the implementation block
@property (nonatomic,copy) id preflightCompletionHandler;                             //@synthesize preflightCompletionHandler=_preflightCompletionHandler - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * webService;                        //@synthesize webService=_webService - In the implementation block
@property (assign,getter=isPreflighting,nonatomic) char preflighting;                 //@synthesize preflighting=_preflighting - In the implementation block
@property (nonatomic,retain) NSDate * watchPasscodeAndUnlockedQueryDate;              //@synthesize watchPasscodeAndUnlockedQueryDate=_watchPasscodeAndUnlockedQueryDate - In the implementation block
-(id)initWithWebService:(id)arg1 ;
-(PKPaymentWebService *)webService;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)setWebService:(PKPaymentWebService *)arg1 ;
-(void)setPasscodeConnection:(PUConnection *)arg1 ;
-(void)setSystemSettingsManager:(NSSManager *)arg1 ;
-(void)setPreflighting:(char)arg1 ;
-(void)setPreflightCompletionHandler:(id)arg1 ;
-(void)_checkWatchConnected;
-(void)_checkCompanioniCloudAccount;
-(void)_checkWatchiCloudAccount;
-(void)_checkPasscodeEnabledAndUnlockedState;
-(void)_checkWristDetectEnabledState;
-(void)_finishPresentingSetupControllerIfReadyWithSuccess:(char)arg1 error:(id)arg2 ;
-(void)setWatchConnected:(char)arg1 ;
-(id)_errorForConnectionIssue;
-(void)setNeedsCompanioniCloudAccount:(char)arg1 ;
-(void)setCheckedCompanioniCloudStatus:(char)arg1 ;
-(id)_errorForCompanionAccountNeeded;
-(char)_currentlyPairing;
-(void)setCheckedWatchiCloudStatus:(char)arg1 ;
-(void)setNeedsWatchiCloudAccount:(char)arg1 ;
-(NSSManager *)systemSettingsManager;
-(char)checkedWatchiCloudStatus;
-(void)setCheckedWatchPasscodeAndUnlockedStatus:(char)arg1 ;
-(void)setNeedsPasscode:(char)arg1 ;
-(void)setNeedsUnlock:(char)arg1 ;
-(void)setAuthRandomSetIfNecessary:(char)arg1 ;
-(void)setWatchPasscodeAndUnlockedQueryDate:(NSDate *)arg1 ;
-(PUConnection *)passcodeConnection;
-(char)checkedWatchPasscodeAndUnlockedStatus;
-(char)needsPasscode;
-(char)needsUnlock;
-(void)_setAuthRandomIfNecessary;
-(NSDate *)watchPasscodeAndUnlockedQueryDate;
-(void)setNeedsWristDetection:(char)arg1 ;
-(void)setCheckedWristDetectionStatus:(char)arg1 ;
-(id)_errorForGenericIssue;
-(char)isPreflighting;
-(char)checkedCompanioniCloudStatus;
-(char)checkedWristDetectionStatus;
-(char)needsWatchiCloudAccount;
-(char)needsWristDetection;
-(char)watchConnected;
-(char)authRandomSetIfNecessary;
-(id)_errorForWristDetectNeeded;
-(char)needsCompanioniCloudAccount;
-(id)_errorForGizmoAccountNeeded;
-(id)_errorForPasscodeNeeded;
-(id)_errorForUnlockNeeded;
-(id)preflightCompletionHandler;
@end
