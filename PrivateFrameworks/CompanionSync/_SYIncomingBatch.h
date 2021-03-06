/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SYBatchSyncChunk;

@interface _SYIncomingBatch : NSObject {

	SYBatchSyncChunk* _batch;
	/*^block*/id _completion;

}

@property (nonatomic,retain) SYBatchSyncChunk * batch;              //@synthesize batch=_batch - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(SYBatchSyncChunk *)batch;
-(void)setBatch:(SYBatchSyncChunk *)arg1 ;
@end

