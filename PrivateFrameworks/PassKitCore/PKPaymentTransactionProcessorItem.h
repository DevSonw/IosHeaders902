/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PKPaymentTransaction, PKPaymentApplication, NSString;

@interface PKPaymentTransactionProcessorItem : NSObject {

	PKPaymentTransaction* _paymentTransaction;
	PKPaymentApplication* _paymentApplication;
	NSString* _passUniqueIdentifier;

}

@property (nonatomic,retain) PKPaymentTransaction * paymentTransaction;              //@synthesize paymentTransaction=_paymentTransaction - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * paymentApplication;              //@synthesize paymentApplication=_paymentApplication - In the implementation block
@property (nonatomic,retain) NSString * passUniqueIdentifier;                        //@synthesize passUniqueIdentifier=_passUniqueIdentifier - In the implementation block
-(PKPaymentApplication *)paymentApplication;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(void)dealloc;
-(PKPaymentTransaction *)paymentTransaction;
-(void)setPaymentTransaction:(PKPaymentTransaction *)arg1 ;
-(NSString *)passUniqueIdentifier;
-(void)setPassUniqueIdentifier:(NSString *)arg1 ;
@end
