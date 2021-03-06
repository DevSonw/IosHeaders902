/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:44 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDFairPlaySAPSessionDelegate.h>
#import <libobjc.A.dylib/HAPTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDFairPlaySAPSession, HAPTimer, NSURLSession, NSOperationQueue, NSString;

@interface HMDRelayActivationSession : NSObject <HMDFairPlaySAPSessionDelegate, HAPTimerDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	unsigned _state;
	HMDFairPlaySAPSession* _fairPlaySAPSession;
	HAPTimer* _fairPlaySessionTimer;
	NSURLSession* _urlSession;
	NSOperationQueue* _requestOperationQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) unsigned state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) HMDFairPlaySAPSession * fairPlaySAPSession;              //@synthesize fairPlaySAPSession=_fairPlaySAPSession - In the implementation block
@property (nonatomic,retain) HAPTimer * fairPlaySessionTimer;                         //@synthesize fairPlaySessionTimer=_fairPlaySessionTimer - In the implementation block
@property (nonatomic,readonly) NSURLSession * urlSession;                             //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * requestOperationQueue;              //@synthesize requestOperationQueue=_requestOperationQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSession;
-(id)init;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)requestChallengeWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestCertificateWithCertificateRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSURLSession *)urlSession;
-(void)timerDidFire:(id)arg1 ;
-(void)session:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)session:(id)arg1 didReceiveServerCertificateRequestWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)session:(id)arg1 didReceiveClientExchangeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setupFairPlaySession;
-(NSOperationQueue *)requestOperationQueue;
-(void)_teardownFairPlaySession;
-(void)setFairPlaySAPSession:(HMDFairPlaySAPSession *)arg1 ;
-(HMDFairPlaySAPSession *)fairPlaySAPSession;
-(void)_cancelAllPendingRequestOperations;
-(HAPTimer *)fairPlaySessionTimer;
-(void)_resumeRequestOperations;
-(void)_suspendRequestOperations;
-(void)setFairPlaySessionTimer:(HAPTimer *)arg1 ;
-(void)_handleFairPlayCertificateResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleFairPlaySetupExchangeResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleChallengeResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 fairPlaySession:(id)arg4 completionQueue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_addRequestOperation:(id)arg1 ;
-(void)_verifyURLResponse:(id)arg1 responseData:(id)arg2 fairPlaySession:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleCertificateResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 fairPlaySession:(id)arg4 completionQueue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_requestFairPlayCertificateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_requestFairPlaySetupExchangeWithExchangeData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

