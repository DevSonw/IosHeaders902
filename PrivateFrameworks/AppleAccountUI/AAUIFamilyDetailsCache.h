/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AAUIFamilyDetailsCache : NSObject {

	unsigned _pendingInviteCount;
	char _isValid;
	char _isValidating;

}

@property (nonatomic,readonly) unsigned pendingInviteCount; 
+(id)sharedCache;
-(void)invalidate;
-(void)_fetchPendingInviteCount;
-(unsigned)pendingInviteCount;
-(void)_setPendingInviteCount:(unsigned)arg1 ;
@end

