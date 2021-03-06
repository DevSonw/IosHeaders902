/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSString;

@interface AAAvailabilityResponse : AAResponse {

	NSString* _status;
	NSString* _eta;
	NSString* _feature;

}

@property (nonatomic,readonly) NSString * status;               //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSString * eta;                  //@synthesize eta=_eta - In the implementation block
@property (nonatomic,readonly) NSString * feature;              //@synthesize feature=_feature - In the implementation block
-(NSString *)status;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)eta;
-(NSString *)feature;
@end

