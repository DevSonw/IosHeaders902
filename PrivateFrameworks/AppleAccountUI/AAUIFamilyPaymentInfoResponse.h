/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class AAUIFamilyCreditCard;

@interface AAUIFamilyPaymentInfoResponse : AAResponse {

	AAUIFamilyCreditCard* _creditCard;

}

@property (nonatomic,retain) AAUIFamilyCreditCard * creditCard;              //@synthesize creditCard=_creditCard - In the implementation block
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(id)_parsedDateForServerMonth:(int)arg1 year:(int)arg2 ;
-(AAUIFamilyCreditCard *)creditCard;
-(void)setCreditCard:(AAUIFamilyCreditCard *)arg1 ;
@end

