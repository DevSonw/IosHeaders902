/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface OACredential : NSObject {

	NSString* _consumerKey;
	NSString* _consumerSecret;
	NSString* _oauthToken;
	NSString* _oauthTokenSecret;

}

@property (nonatomic,copy) NSString * consumerKey;                   //@synthesize consumerKey=_consumerKey - In the implementation block
@property (nonatomic,copy) NSString * consumerSecret;                //@synthesize consumerSecret=_consumerSecret - In the implementation block
@property (nonatomic,copy) NSString * oauthToken;                    //@synthesize oauthToken=_oauthToken - In the implementation block
@property (nonatomic,copy) NSString * oauthTokenSecret;              //@synthesize oauthTokenSecret=_oauthTokenSecret - In the implementation block
-(void)setOauthTokenSecret:(NSString *)arg1 ;
-(NSString *)oauthTokenSecret;
-(void)setConsumerKey:(NSString *)arg1 ;
-(void)setOauthToken:(NSString *)arg1 ;
-(void)setConsumerSecret:(NSString *)arg1 ;
-(NSString *)oauthToken;
-(void)dealloc;
-(id)signingKey;
-(NSString *)consumerKey;
-(NSString *)consumerSecret;
@end
