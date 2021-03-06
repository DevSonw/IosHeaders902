/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:08 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPaymentServiceDelegate <NSObject>
@optional
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(char)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
-(void)paymentServiceReceivedInterruption;
-(void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
-(void)paymentDeviceDidExitField;
-(void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
-(void)contactlessInterfaceDidPresentFromSource:(int)arg1;
-(void)contactlessInterfaceDidDismissFromSource:(int)arg1;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(char)arg2;
-(void)passWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2;
-(void)contactlessInterfaceDidDismissForPassesWithUniqueIdentifiers:(id)arg1 fromSource:(int)arg2;

@end

