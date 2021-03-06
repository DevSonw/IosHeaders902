/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface DADStatusReportAggregator : NSObject {

	int _numOutstandingReports;
	/*^block*/id _completionBlock;
	NSMutableDictionary* _persistentUUIDToStatusReport;
	char _finished;

}
-(id)initWithStatusReports:(id)arg1 numOutstandingReports:(int)arg2 timeout:(double)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)noteAdditionalReportDicts:(id)arg1 ;
-(void)_coalesceAndReport;
@end

