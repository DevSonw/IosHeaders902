/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AAUIAccountRepairRemoteUIDelegate.h>
#import <libobjc.A.dylib/AAUIGenericTermsRemoteUIDelegate.h>

@class ACAccountStore, ACAccountType, AAUIGenericTermsRemoteUI, AAUIAccountRepairRemoteUI, NSMutableDictionary, NSLock, UIViewController, NSString;

@interface AAUISignInFlowController : NSObject <AAUIAccountRepairRemoteUIDelegate, AAUIGenericTermsRemoteUIDelegate> {

	ACAccountStore* _accountStore;
	ACAccountType* _appleAccountType;
	AAUIGenericTermsRemoteUI* _genericTermsRemoteUI;
	AAUIAccountRepairRemoteUI* _accountRepairRemoteUI;
	/*^block*/id _pendingCompletion;
	NSMutableDictionary* _cdpContextsByAccountID;
	NSLock* _cdpContextsByAccountIDLock;
	char _shouldAutomaticallySaveSignInResults;
	UIViewController* _presentingViewController;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic) char shouldAutomaticallySaveSignInResults;                       //@synthesize shouldAutomaticallySaveSignInResults=_shouldAutomaticallySaveSignInResults - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(char)arg2 ;
-(id)init;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(id)_titleForError:(id)arg1 account:(id)arg2 ;
-(void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(char)arg3 ;
-(id)_appleAccountType;
-(void)_presentExistingAccountAlert:(id)arg1 ;
-(void)_verifyLoginResponseForiCloudAccount:(id)arg1 withSuccess:(char)arg2 response:(id)arg3 error:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_showGenericTermsUIforAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_showSecondFactorUIForAccount:(id)arg1 loginResponse:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentValidationErrorAlert:(id)arg1 forAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_saveAccount:(id)arg1 withAllDataclassesEnabledIfPossibleWithCompletion:(/*^block*/id)arg2 ;
-(void)_validateCDPStateForAccount:(id)arg1 withCDPContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentUnableToSaveAccountAlert;
-(void)_loadAccountRepairRemoteUIWithAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signInWithIDMSAuthenticationResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)shouldAutomaticallySaveSignInResults;
-(void)setShouldAutomaticallySaveSignInResults:(char)arg1 ;
@end

