/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class ACAccount, NSMutableDictionary, NSString, NSDictionary;

@interface MFAccount : NSObject {

	ACAccount* _persistentAccount;
	int _persistentAccountLock;
	NSMutableDictionary* _unsavedAccountProperties;
	NSString* _sourceApplicationBundleIdentifier;

}

@property (readonly) ACAccount * persistentAccount; 
@property (readonly) ACAccount * parentAccount; 
@property (readonly) NSString * parentAccountIdentifier; 
@property (readonly) NSDictionary * properties; 
@property (readonly) NSString * uniqueId; 
@property (readonly) NSString * identifier; 
@property (readonly) NSString * syncStoreIdentifier; 
@property (readonly) NSString * managedTag; 
@property (readonly) NSString * type; 
@property (nonatomic,retain) NSString * username; 
@property (nonatomic,retain) NSString * hostname; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;              //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (readonly) ACAccount * accountForRenewingCredentials; 
+(char)shouldHealAccounts;
+(id)accountWithProperties:(id)arg1 ;
+(id)_accountClass;
+(id)_newPersistentAccount;
+(id)accountTypeIdentifier;
+(id)_basicPropertyForKey:(id)arg1 persistentAccount:(id)arg2 ;
+(char)_setBasicProperty:(id)arg1 forKey:(id)arg2 persistentAccount:(id)arg3 ;
+(id)accountTypeString;
+(id)displayedAccountTypeString;
+(id)excludedAccountPropertyKeys;
+(char)usesSSL;
+(unsigned)defaultSecurePortNumber;
+(unsigned)defaultPortNumber;
+(id)predefinedValueForKey:(id)arg1 ;
+(void)setShouldHealAccounts:(char)arg1 ;
+(id)newAccountWithDictionary:(id)arg1 ;
+(id)authSchemesForAccountClass;
+(id)accountWithPersistentAccount:(id)arg1 ;
+(id)existingAccountForUniqueID:(id)arg1 ;
+(char)isPredefinedAccountType;
+(id)propertiesWhichRequireValidation;
+(id)displayedShortAccountTypeString;
+(void*)legacyKeychainProtocol;
+(id)accountPropertiesValueForKey:(id)arg1 value:(id)arg2 ;
+(char)isCommonPortNumber:(unsigned)arg1 ;
+(char)isSSLEditable;
+(id)saslProfileName;
+(id)supportedDataclasses;
+(id)hostname;
-(id)accountPropertyForKey:(id)arg1 ;
-(id)password;
-(void)setPassword:(id)arg1 ;
-(id)serviceName;
-(char)requiresAuthentication;
-(void)setDomain:(id)arg1 ;
-(char)supportsMailDrop;
-(char)isManaged;
-(char)isEnabledForDataclass:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isActive;
-(NSString *)identifier;
-(NSString *)type;
-(id)domain;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActive:(char)arg1 ;
-(NSString *)uniqueId;
-(id)initWithProperties:(id)arg1 ;
-(NSString *)displayName;
-(NSDictionary *)properties;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(ACAccount *)parentAccount;
-(NSString *)syncStoreIdentifier;
-(id)initWithPersistentAccount:(id)arg1 ;
-(void)_setAccountProperties:(id)arg1 ;
-(void)setPersistentAccount:(ACAccount *)arg1 ;
-(void)releaseAllConnections;
-(void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2 ;
-(ACAccount *)persistentAccount;
-(NSString *)parentAccountIdentifier;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(void)accountInfoDidChange;
-(char)setOAuth2Token:(id)arg1 refreshToken:(id)arg2 error:(id*)arg3 ;
-(void)_queueAccountInfoDidChange;
-(void)removeAccountPropertyForKey:(id)arg1 ;
-(char)usesSSL;
-(char)_boolForAccountInfoKey:(id)arg1 defaultValue:(char)arg2 ;
-(id)_credentialCreateIfNecessary:(char)arg1 ;
-(id)_credentialCreateIfNecessary:(char)arg1 error:(id*)arg2 ;
-(id)_password;
-(id)_passwordWithError:(id*)arg1 ;
-(id)preferredAuthScheme;
-(id)credentialItemForKey:(id)arg1 error:(id*)arg2 ;
-(id)credentialItemForKey:(id)arg1 ;
-(char)setCredentialItem:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)setCredentialItem:(id)arg1 forKey:(id)arg2 ;
-(ACAccount *)accountForRenewingCredentials;
-(char)_renewCredentialsWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned)defaultSecurePortNumber;
-(unsigned)defaultPortNumber;
-(unsigned)portNumber;
-(char)_shouldTryDirectSSLConnectionOnPort:(unsigned)arg1 ;
-(Class)connectionClass;
-(id)_newConnection;
-(char)_connectAndAuthenticate:(id)arg1 ;
-(void)setUsesSSL:(char)arg1 ;
-(void)setPortNumber:(unsigned)arg1 ;
-(id)certUIService;
-(id)clientCertificates;
-(void)setClientCertificates:(id)arg1 ;
-(void)setTryDirectSSL:(char)arg1 ;
-(id)secureServiceName;
-(CFStringRef)connectionServiceType;
-(char)allowsTrustPrompt;
-(id)defaultConnectionSettings;
-(unsigned)credentialAccessibility;
-(id)customDescriptionForError:(id)arg1 authScheme:(id)arg2 defaultDescription:(id)arg3 ;
-(void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2 ;
-(id)enabledDataclasses;
-(char)shouldFetchACEDBInfoForError:(id)arg1 ;
-(void)savePersistentAccount;
-(void)removePersistentAccount;
-(id)accountClass;
-(void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2 ;
-(void)removeValueInAccountPropertiesForKey:(id)arg1 ;
-(id)valueInAccountPropertiesForKey:(id)arg1 ;
-(id)_objectForAccountInfoKey:(id)arg1 ;
-(char)canGoOffline;
-(id)_credential;
-(id)oauth2Token;
-(char)renewCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(char)promptUserForPasswordWithTitle:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)promptUserForWebLoginWithURL:(id)arg1 shouldConfirm:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)managedTag;
-(char)fetchTokensIfNecessary:(id*)arg1 ;
-(void)releaseAllForcedConnections;
-(void)validateConnections;
-(void)setPreferredAuthScheme:(id)arg1 ;
-(id)authenticatedConnection;
-(void)applySettingsAsDefault:(id)arg1 ;
-(id)alternateConnectionSettings;
-(id)insecureConnectionSettings;
-(id)secureConnectionSettings;
-(id)nameForMailboxUid:(id)arg1 ;
-(char)shouldEnableAfterError:(id)arg1 ;
-(char)enableAccount;
-(char)shouldDisplayHostnameInErrorMessages;
-(id)missingPasswordErrorWithTitle:(id)arg1 ;
-(id)inaccessiblePasswordErrorWithTitle:(id)arg1 ;
-(id)loginDisabledErrorWithTitle:(id)arg1 ;
-(id)copyDiagnosticInformation;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)setHostname:(NSString *)arg1 ;
-(NSString *)hostname;
@end
