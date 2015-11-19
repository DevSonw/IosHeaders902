/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
@class PAStackshotTask;

@interface PAStackshotThread : NSObject {

	thread_snapshot* thread_snap;
	PAStackshotTask* _task;
	const void* _kernelFrames;
	const void* _userFrames;
	unsigned long _kernelFrameSize;
	unsigned long _userFrameSize;
	unsigned long _bytesUsed;

}

@property (readonly) char isFromMicrostackshot; 
-(id)initWithTask:(id)arg1 ;
-(char)hasDispatchQueue;
-(char)isFromMicrostackshot;
-(const void*)firstFrame;
-(void)_calculateOffsets;
-(id)frameIterator;
-(unsigned long)_frameSize:(char)arg1 ;
-(char)isDarwinBG;
-(unsigned)powerstatsFlags;
-(unsigned long)kernelFrameSize;
-(unsigned long)userFrameSize;
-(char)hasKernelContinuation;
-(unsigned long long)dispatchQueueId;
-(unsigned long)kernelFramesOffsetFromHeaderStart;
-(unsigned long)userFramesOffsetFromHeaderStart;
-(char)setBufferPosition:(const char*)arg1 withRemainingBytes:(unsigned long)arg2 ;
-(void)iterateFrames:(/*^block*/id)arg1 ;
-(unsigned long)bytesUsedInBuffer;
@end
