/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDServerEnvironmentURLRequest : CKDURLRequest {

	int _environment;

}

@property (assign,nonatomic) int environment;              //@synthesize environment=_environment - In the implementation block
-(id)url;
-(int)environment;
-(void)setEnvironment:(int)arg1 ;
-(char)requiresConfiguration;
-(char)requiresDeviceID;
-(char)requiresSignature;
-(char)allowsAnonymousAccount;
-(char)allowsAuthedAccount;
-(int)serverType;
-(int)partitionType;
-(char)hasRequestBody;
-(void)requestDidParseJSONObject:(id)arg1 ;
@end

