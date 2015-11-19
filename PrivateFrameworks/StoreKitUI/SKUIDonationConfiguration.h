/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary, SKUIClientContext, NSURL, NSHashTable, NSOperationQueue;

@interface SKUIDonationConfiguration : NSObject {

	NSArray* _charities;
	NSMutableDictionary* _charityImages;
	SKUIClientContext* _clientContext;
	NSURL* _donationPurchaseURL;
	NSURL* _donationValidationURL;
	NSHashTable* _observers;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) NSArray * allCharities;                         //@synthesize charities=_charities - In the implementation block
@property (nonatomic,readonly) NSURL * donationPurchaseURL;                    //@synthesize donationPurchaseURL=_donationPurchaseURL - In the implementation block
@property (nonatomic,readonly) NSURL * donationValidationURL;                  //@synthesize donationValidationURL=_donationValidationURL - In the implementation block
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2 ;
-(void)loadConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_finishLoadWithResponse:(id)arg1 error:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_setLogoImage:(id)arg1 forCharity:(id)arg2 ;
-(id)charityForIdentifier:(id)arg1 ;
-(void)loadLogoForCharity:(id)arg1 ;
-(id)logoImageForCharity:(id)arg1 ;
-(NSArray *)allCharities;
-(NSURL *)donationValidationURL;
-(NSURL *)donationPurchaseURL;
@end
