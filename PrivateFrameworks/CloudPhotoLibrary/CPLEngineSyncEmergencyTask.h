/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>
#import <libobjc.A.dylib/NSCoding.h>

@class CPLEngineLibrary, NSString;

@interface CPLEngineSyncEmergencyTask : CPLEngineSyncTask <NSCoding> {

	CPLEngineLibrary* _readwriteEngineLibrary;
	NSString* _taskIdentifier;

}

@property (nonatomic,retain) CPLEngineLibrary * engineLibrary; 
@property (nonatomic,readonly) unsigned priority; 
@property (retain) id<CPLEngineSyncEmergencyTaskDelegate> delegate; 
+(char)shouldCoalesceTasks;
+(id)taskWithEngineLibrary:(id)arg1 ;
+(id)taskIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(unsigned)priority;
-(CPLEngineLibrary *)engineLibrary;
-(void)setEngineLibrary:(CPLEngineLibrary *)arg1 ;
-(char)shouldDiscardOnError;
-(char)shouldStopSyncSession;
-(id)taskIdentifier;
@end

