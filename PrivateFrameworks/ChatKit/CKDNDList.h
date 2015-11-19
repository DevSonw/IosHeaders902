/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NPSManager;

@interface CKDNDList : NSObject {

	NPSManager* _syncManager;

}

@property (nonatomic,retain) NPSManager * syncManager;              //@synthesize syncManager=_syncManager - In the implementation block
+(id)sharedList;
-(void)dealloc;
-(id)init;
-(void)performMigrationIfNecessary;
-(id)unmuteDateForChat:(id)arg1 ;
-(id)unmuteDateForIdentifier:(id)arg1 ;
-(id)globalIdentifierForChat:(id)arg1 ;
-(id)currentList;
-(NPSManager *)syncManager;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(void)muteChat:(id)arg1 untilDate:(id)arg2 ;
-(char)isMutedChat:(id)arg1 ;
-(char)isMutedChatIdentifier:(id)arg1 ;
-(void)_handleDNDListChanged;
@end
