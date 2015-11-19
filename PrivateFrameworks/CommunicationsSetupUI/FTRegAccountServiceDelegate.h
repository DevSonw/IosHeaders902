/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AASetupAssistantDelegateService.h>
#import <libobjc.A.dylib/AAAppleIDLoginPlugin.h>

@class CNFRegController, NSDictionary, IDSAccountController, NSString;

@interface FTRegAccountServiceDelegate : NSObject <AASetupAssistantDelegateService, AAAppleIDLoginPlugin> {

	CNFRegController* _regController;
	NSDictionary* _responseDictionary;
	/*^block*/id _completionHandler;
	IDSAccountController* _accountController;

}

@property (nonatomic,retain) CNFRegController * regController;                      //@synthesize regController=_regController - In the implementation block
@property (nonatomic,retain) IDSAccountController * accountController;              //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSDictionary * responseDictionary;                       //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serviceIdentifier;
-(id)init;
-(id)name;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_cleanup;
-(id)displayName;
-(CNFRegController *)regController;
-(void)setRegController:(CNFRegController *)arg1 ;
-(id)initWithRegController:(id)arg1 ;
-(id)_logName;
-(void)_handleSuccess:(char)arg1 error:(id)arg2 ;
-(char)_account:(id)arg1 matchesSetupParameters:(id)arg2 ;
-(id)_existingOperationalAccount;
-(char)serviceIsAvailable;
-(char)_hasAccount;
-(char)_hasOperationalAccount;
-(id)_defaultSetupRequestParameters;
-(void)_handleFailureWithErrorCode:(int)arg1 ;
-(char)_shouldSkipAccountSetup:(id)arg1 ;
-(IDSAccountController *)accountController;
-(id)parametersForLoginRequest;
-(void)handleLoginResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setupOperationFailed;
-(id)parametersForIdentityEstablishmentRequest;
-(id)_existingAccountForSetupParameters:(id)arg1 ;
-(void)setAccountController:(IDSAccountController *)arg1 ;
-(int)serviceType;
-(NSDictionary *)responseDictionary;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
@end
