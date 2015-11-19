/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CertUI/CertUI-Structs.h>
@class NSString;

@interface CertUITrustManager : NSObject {

	NSString* _access;

}
+(void)_migrateVersionZeroFromAccessGroup:(id)arg1 toGroup:(id)arg2 ;
+(void)migrateFromVersionZero;
+(void)migrateFromVersionOne;
+(id)defaultTrustManager;
-(id)init;
-(int)_actionForTrust:(SecTrustRef)arg1 exceptions:(id)arg2 ;
-(void)removeSSLTrust:(SecTrustRef)arg1 hostname:(id)arg2 service:(id)arg3 ;
-(void)removeAllTrusts;
-(void)clearSavedTrustSettingsForTrust:(SecTrustRef)arg1 host:(id)arg2 service:(id)arg3 ;
-(int)actionForSMIMETrust:(SecTrustRef)arg1 sender:(id)arg2 ;
-(id)initWithAccessGroup:(id)arg1 ;
-(void)addSMIMETrust:(SecTrustRef)arg1 sender:(id)arg2 ;
-(void)removeSMIMETrust:(SecTrustRef)arg1 sender:(id)arg2 ;
-(char)_hasExceptionsForSMIMETrust:(SecTrustRef)arg1 sender:(id)arg2 ;
-(int)actionForTrust:(SecTrustRef)arg1 forHost:(id)arg2 andService:(id)arg3 ;
-(void)allowTrust:(SecTrustRef)arg1 forHost:(id)arg2 service:(id)arg3 ;
-(void)addSSLTrust:(SecTrustRef)arg1 hostname:(id)arg2 service:(id)arg3 ;
-(int)actionForSSLTrust:(SecTrustRef)arg1 hostname:(id)arg2 service:(id)arg3 ;
@end
