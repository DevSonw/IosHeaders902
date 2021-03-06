/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASSearchTask.h>

@interface ASMailboxSearchTask : ASSearchTask
-(void)finishWithError:(id)arg1 ;
-(void)performTask;
-(id)requestBody;
-(char)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(char)processContext:(id)arg1 ;
-(char)requiresEASVersionInformaton;
-(void)_appendSearchQuery:(id)arg1 ;
-(void)_appendSearchOptions:(id)arg1 ;
-(id)replacementObjectForEmailItem:(id)arg1 ;
@end

