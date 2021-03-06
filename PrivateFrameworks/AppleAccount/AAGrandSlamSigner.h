/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACAccount, ACAccountStore, NSString;

@interface AAGrandSlamSigner : NSObject {

	ACAccount* _appleAccount;
	ACAccount* _grandSlamAccount;
	ACAccountStore* _store;
	NSString* _appTokenID;
	char _useAltDSID;

}

@property (nonatomic,readonly) ACAccount * appleAccount;                   //@synthesize appleAccount=_appleAccount - In the implementation block
@property (nonatomic,readonly) ACAccount * grandSlamAccount;               //@synthesize grandSlamAccount=_grandSlamAccount - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) char useAltDSID;                              //@synthesize useAltDSID=_useAltDSID - In the implementation block
-(ACAccountStore *)accountStore;
-(char)signURLRequest:(id)arg1 ;
-(ACAccount *)grandSlamAccount;
-(char)useAltDSID;
-(void)setUseAltDSID:(char)arg1 ;
-(id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 appTokenID:(id)arg4 ;
-(char)signURLRequest:(id)arg1 isUserInitiated:(char)arg2 ;
-(ACAccount *)appleAccount;
@end

