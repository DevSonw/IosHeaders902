/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SKUIClientContext, NSOperationQueue, SSVLoadURLOperation, NSURL;

@interface SKUIGiftValidator : NSObject {

	SKUIClientContext* _clientContext;
	NSOperationQueue* _operationQueue;
	int _validationCount;
	SSVLoadURLOperation* _validationOperation;
	NSURL* _validationURL;

}

@property (getter=isValidating,nonatomic,readonly) char validating; 
@property (nonatomic,retain) NSOperationQueue * operationQueue;                  //@synthesize operationQueue=_operationQueue - In the implementation block
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(char)isValidating;
-(id)initWithValidationURL:(id)arg1 clientContext:(id)arg2 ;
-(void)validateGift:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)cancelValidation;
-(void)_validateWithBodyDictionary:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_finishValidationWithResponse:(id)arg1 error:(id)arg2 attemptNumber:(int)arg3 block:(/*^block*/id)arg4 ;
-(void)validateDonation:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end
