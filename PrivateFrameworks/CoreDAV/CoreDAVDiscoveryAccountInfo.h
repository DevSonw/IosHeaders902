/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAV-Structs.h>
#import <CoreDAV/CoreDAVAccountInfoProvider.h>

@protocol CoreDAVAccountInfoProvider;
@class NSString, NSData, NSURL, NSDictionary, NSSet, NSError;

@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider> {

	NSString* _scheme;
	NSString* _host;
	NSString* _serverRoot;
	int _port;
	NSString* _user;
	NSString* _password;
	NSData* _identityPersist;
	NSURL* _principalURL;
	NSString* _accountID;
	NSDictionary* _serverHeaders;
	NSSet* _serverComplianceClasses;
	NSString* _userAgentHeader;
	char _shouldFailAllTasks;
	char _started;
	char _success;
	NSError* _error;
	id<CoreDAVAccountInfoProvider> _backingAccountInfoProvider;

}

@property (nonatomic,retain) NSString * host;                                                        //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSString * serverRoot;                                                  //@synthesize serverRoot=_serverRoot - In the implementation block
@property (nonatomic,retain) NSString * password;                                                    //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * user;                                                        //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) int port;                                                               //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSData * identityPersist;                                               //@synthesize identityPersist=_identityPersist - In the implementation block
@property (nonatomic,retain) NSString * scheme;                                                      //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,retain) NSURL * principalURL;                                                   //@synthesize principalURL=_principalURL - In the implementation block
@property (nonatomic,retain) NSString * accountID;                                                   //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) NSDictionary * serverHeaders;                                           //@synthesize serverHeaders=_serverHeaders - In the implementation block
@property (nonatomic,retain) NSSet * serverComplianceClasses;                                        //@synthesize serverComplianceClasses=_serverComplianceClasses - In the implementation block
@property (nonatomic,retain) NSString * userAgentHeader;                                             //@synthesize userAgentHeader=_userAgentHeader - In the implementation block
@property (assign,nonatomic) char shouldFailAllTasks;                                                //@synthesize shouldFailAllTasks=_shouldFailAllTasks - In the implementation block
@property (assign,nonatomic) char started;                                                           //@synthesize started=_started - In the implementation block
@property (assign,nonatomic) char success;                                                           //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSError * error;                                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id<CoreDAVAccountInfoProvider> backingAccountInfoProvider;              //@synthesize backingAccountInfoProvider=_backingAccountInfoProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPort:(int)arg1 ;
-(NSString *)user;
-(NSString *)password;
-(void)setUser:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(NSError *)error;
-(void)dealloc;
-(NSString *)description;
-(id)url;
-(NSString *)scheme;
-(NSString *)host;
-(int)port;
-(void)setScheme:(NSString *)arg1 ;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(void)setStarted:(char)arg1 ;
-(char)shouldFailAllTasks;
-(id)additionalHeaderValues;
-(NSString *)accountID;
-(NSString *)serverRoot;
-(void)setServerRoot:(NSString *)arg1 ;
-(NSString *)userAgentHeader;
-(void)setUserAgentHeader:(NSString *)arg1 ;
-(void)setBackingAccountInfoProvider:(id<CoreDAVAccountInfoProvider>)arg1 ;
-(NSDictionary *)serverHeaders;
-(NSSet *)serverComplianceClasses;
-(void)setShouldFailAllTasks:(char)arg1 ;
-(void)clientTokenRequestedByServer;
-(id)clientCertificateInfoProvider;
-(id)oauthInfoProvider;
-(char)handleTrustChallenge:(id)arg1 withConnection:(id)arg2 ;
-(char)handleCertificateError:(id)arg1 ;
-(char)shouldRetryUnauthorizedConnection:(id)arg1 ;
-(char)handleAuthenticateAgainstProtectionSpace:(id)arg1 ;
-(char)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2 ;
-(char)handleShouldUseCredentialStorage;
-(char)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(char)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)shouldTurnModalOnBadPassword;
-(id)initWithAccountInfoProvider:(id)arg1 ;
-(void)setIdentityPersist:(NSData *)arg1 ;
-(id<CoreDAVAccountInfoProvider>)backingAccountInfoProvider;
-(void)setServerHeaders:(NSDictionary *)arg1 ;
-(void)setServerComplianceClasses:(NSSet *)arg1 ;
-(NSData *)identityPersist;
-(CFURLStorageSessionRef)copyStorageSession;
-(char)shouldUseOpportunisticSockets;
-(char)handleTrustChallenge:(id)arg1 ;
-(char)started;
-(void)setHost:(NSString *)arg1 ;
-(void)setAccountID:(NSString *)arg1 ;
-(NSURL *)principalURL;
-(id)clientToken;
-(void)setError:(NSError *)arg1 ;
-(char)success;
-(void)setSuccess:(char)arg1 ;
@end

