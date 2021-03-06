/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOLogAdaptor.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface GEOBaseLogAdaptor : NSObject <GEOLogAdaptor> {

	NSMutableArray* _supportedLogMessageTypes;
	NSMutableArray* _supportedLogMessageSubTypes;
	NSObject*<OS_dispatch_queue> _adaptorQueue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)queueLogMessage:(id)arg1 ;
-(void)flushLogs;
-(id)adaptorQueue;
-(void)addSupportForLogMessageType:(int)arg1 subType:(int)arg2 ;
-(char)acceptsLogMessageOfType:(int)arg1 subType:(int)arg2 ;
-(void)removeSupportForLogMessageType:(int)arg1 subType:(int)arg2 ;
@end

