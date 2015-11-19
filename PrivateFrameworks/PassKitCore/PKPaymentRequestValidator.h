/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentValidating.h>

@class PKPaymentRequest, NSString;

@interface PKPaymentRequestValidator : NSObject <PKPaymentValidating> {

	PKPaymentRequest* _request;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)validatorWithObject:(id)arg1 ;
+(Class)validatedClass;
-(id)initWithPaymentRequest:(id)arg1 ;
-(char)isValidWithError:(id*)arg1 ;
-(void)dealloc;
-(char)_checkTotal:(id)arg1 error:(id*)arg2 ;
@end
