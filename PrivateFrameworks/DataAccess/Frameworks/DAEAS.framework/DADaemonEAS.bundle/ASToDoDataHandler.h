/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonEAS/ASEventDataHandler.h>

@interface ASToDoDataHandler : ASEventDataHandler
-(int)getIdFromLocalObject:(void*)arg1 ;
-(void*)copyLocalObjectFromId:(int)arg1 ;
-(id)copyOfAllLocalObjectsInContainer;
-(char)wipeServerIds;
-(id)getDAObjectWithLocalItem:(void*)arg1 serverId:(id)arg2 account:(id)arg3 ;
-(char)_containerHasItems;
-(int)_newCalendarEntityType;
-(int)dataclass;
@end

