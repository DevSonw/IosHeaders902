/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ondemandd/ODRAppReviewProtocol.h>

@class NSString;

@interface ODRAppReviewClient : NSObject <ODRAppReviewProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerManifest:(id)arg1 forBundleID:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(id)interface;
-(id)initWithConnection:(id)arg1 ;
@end
