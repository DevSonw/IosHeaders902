/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/PKAuthenticatorDelegate.h>
#import <libobjc.A.dylib/PKPaymentOptionsViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationServiceProtocol.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationPresentationObserver.h>

@protocol PKPaymentAuthorizationHostProtocol;
@class PKPaymentAuthorizationLayout, PKPaymentAuthorizationNavigationBar, UIView, UITableView, PKPaymentAuthorizationSummaryItemsView, PKPaymentAuthorizationTotalView, PKPaymentAuthorizationFooterView, NSLayoutConstraint, PKPaymentOptionsViewController, NSMutableArray, PKPaymentAuthorizationDataModel, PKPaymentService, PKPaymentWebService, PKAuthenticator, NSString;

@interface PKPaymentAuthorizationServiceViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, PKAuthenticatorDelegate, PKPaymentOptionsViewControllerDelegate, PKPaymentAuthorizationServiceProtocol, PKPaymentAuthorizationPresentationObserver> {

	PKPaymentAuthorizationLayout* _layout;
	PKPaymentAuthorizationNavigationBar* _navBar;
	UIView* _contentView;
	UITableView* _detailTableView;
	PKPaymentAuthorizationSummaryItemsView* _summaryItemsView;
	PKPaymentAuthorizationTotalView* _totalView;
	PKPaymentAuthorizationFooterView* _footerView;
	UIView* _passphraseSeparatorView;
	NSLayoutConstraint* _contentViewTopConstraint;
	NSLayoutConstraint* _contentViewRightConstraint;
	PKPaymentOptionsViewController* _paymentCardOptionsController;
	PKPaymentOptionsViewController* _shippingAddressOptionsController;
	PKPaymentOptionsViewController* _shippingMethodOptionsController;
	PKPaymentOptionsViewController* _shippingContactOptionsController;
	NSMutableArray* _clientCallbackBlocks;
	char _awaitingClientCallbackReply;
	char _hostApplicationResignedActive;
	char _hostApplicationEnteredBackground;
	char _treatingHostAsBackgrounded;
	unsigned _state;
	PKPaymentAuthorizationDataModel* _model;
	PKPaymentService* _paymentService;
	PKPaymentWebService* _paymentWebService;
	PKAuthenticator* _authenticator;
	id<PKPaymentAuthorizationHostProtocol> _delegate;

}

@property (assign,nonatomic) unsigned state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) PKPaymentAuthorizationDataModel * model;                      //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) PKPaymentService * paymentService;                            //@synthesize paymentService=_paymentService - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * paymentWebService;                      //@synthesize paymentWebService=_paymentWebService - In the implementation block
@property (nonatomic,retain) PKAuthenticator * authenticator;                              //@synthesize authenticator=_authenticator - In the implementation block
@property (assign,nonatomic) id<PKPaymentAuthorizationHostProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_createSubviews;
-(void)handleHostApplicationWillResignActive:(char)arg1 ;
-(void)handleHostApplicationDidBecomeActive;
-(void)authorizationDidAuthorizePaymentCompleteWithStatus:(int)arg1 ;
-(void)authorizationDidSelectShippingMethodCompleteWithStatus:(int)arg1 paymentSummaryItems:(id)arg2 ;
-(void)authorizationDidSelectShippingAddressCompleteWithStatus:(int)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1 ;
-(void)handleHostApplicationDidCancel;
-(id)initWithLayout:(id)arg1 ;
-(void)setState:(unsigned)arg1 param:(id)arg2 ;
-(void)cancelPressed:(id)arg1 ;
-(void)_payWithPassbookPressed:(id)arg1 ;
-(void)_setupWithPaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 andApplicationIdentifier:(id)arg3 ;
-(void)_didSelectShippingAddress:(id)arg1 ;
-(void)_didSelectPaymentPass:(id)arg1 ;
-(void)_resumeWithNextState;
-(void)_invalidPaymentDataWithParam:(id)arg1 ;
-(void)_resumeAuthenticationWithPreviousError:(id)arg1 ;
-(void)_suspendAuthentication;
-(void)_selectOptionsForDataItem:(id)arg1 ;
-(void)_trackClientCallbackProgress;
-(void)_nonce:(id)arg1 ;
-(void)_authorizePayment:(id)arg1 ;
-(void)_rewrapPayment:(id)arg1 ;
-(void)_processPaymentWithToken:(id)arg1 ;
-(void)_didCancelWithParam:(id)arg1 ;
-(void)_didFailWithError:(id)arg1 ;
-(void)_didFailWithFatalError:(id)arg1 ;
-(void)_didSucceed;
-(int)_authenticatorPolicy;
-(void)_startEvaluation;
-(id)_evaluationRequest;
-(void)_didAuthorizePaymentWithToken:(id)arg1 ;
-(void)_updateBackgroundedState:(char)arg1 ;
-(void)_processNextClientCallbackBlock;
-(void)_didSelectShippingMethod:(id)arg1 ;
-(void)_enqueueClientCallbackBlock:(/*^block*/id)arg1 ;
-(id)_paymentWithToken:(id)arg1 ;
-(id)_transactionWithPaymentToken:(id)arg1 ;
-(void)_addPassphraseViewControllerToHierarchy:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_removePassphraseViewFromHierarchy;
-(Class)_tableViewClassForDataItem:(id)arg1 ;
-(Class)_viewPresenterClassForDataItem:(id)arg1 ;
-(void)_handleModelUpdate;
-(void)_updatePreferredContentSize:(CGSize)arg1 ;
-(int)_totalViewStyle;
-(id)_paymentAuthorizationPresentationController;
-(void)authenticatorDidEncounterFingerOn:(id)arg1 ;
-(void)authenticatorDidEncounterFingerOff:(id)arg1 ;
-(void)authenticatorDidEncounterMatchMiss:(id)arg1 ;
-(void)presentPasscodeViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dismissPasscodeRemoteViewController;
-(void)presentPassphraseViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dismissPassphraseRemoteViewController;
-(void)paymentOptionsViewControllerDidFinish:(id)arg1 ;
-(id)handlePaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 andApplicationIdentifier:(id)arg3 ;
-(void)_simulatePayment;
-(PKPaymentService *)paymentService;
-(void)setPaymentService:(PKPaymentService *)arg1 ;
-(PKPaymentWebService *)paymentWebService;
-(void)setPaymentWebService:(PKPaymentWebService *)arg1 ;
-(PKAuthenticator *)authenticator;
-(void)setAuthenticator:(PKAuthenticator *)arg1 ;
-(void)setDelegate:(id<PKPaymentAuthorizationHostProtocol>)arg1 ;
-(void)dealloc;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<PKPaymentAuthorizationHostProtocol>)delegate;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)viewDidLayoutSubviews;
-(PKPaymentAuthorizationDataModel *)model;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)_updatePreferredContentSize;
-(void)setModel:(PKPaymentAuthorizationDataModel *)arg1 ;
-(void)_hostApplicationDidEnterBackground;
-(void)_hostApplicationWillEnterForeground;
@end

