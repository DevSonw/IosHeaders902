/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/askpermissiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface KeychainHelper : NSObject
+(id)dataValueForTouchIDKeychainItemWithServiceName:(id)arg1 returningError:(id*)arg2 ;
+(char)setTouchIDKeychainDataValue:(id)arg1 forServiceName:(id)arg2 deleteExistingFirst:(char)arg3 suppressUI:(char)arg4 returningError:(id*)arg5 ;
+(char)deleteTouchIDKeychainItemWithServiceName:(id)arg1 returningError:(id*)arg2 ;
@end
