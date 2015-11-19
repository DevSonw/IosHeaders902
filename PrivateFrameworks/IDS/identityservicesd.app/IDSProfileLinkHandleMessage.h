/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSProfileMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSNumber;

@interface IDSProfileLinkHandleMessage : IDSProfileMessage <NSCopying> {

	NSString* _uri;
	NSDictionary* _authenticationData;
	NSNumber* _responseVettingStatus;

}

@property (setter=setURI:,copy) NSString * URI;                  //@synthesize uri=_uri - In the implementation block
@property (copy) NSDictionary * authenticationData;              //@synthesize authenticationData=_authenticationData - In the implementation block
@property (copy) NSNumber * responseVettingStatus;               //@synthesize responseVettingStatus=_responseVettingStatus - In the implementation block
-(NSNumber *)responseVettingStatus;
-(void)setResponseVettingStatus:(NSNumber *)arg1 ;
-(NSDictionary *)authenticationData;
-(void)setAuthenticationData:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bagKey;
-(double)anisetteHeadersTimeout;
-(char)wantsSignature;
-(char)wantsBodySignature;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(NSString *)URI;
-(void)setURI:(NSString *)arg1 ;
-(id)requiredKeys;
-(id)messageBody;
@end
