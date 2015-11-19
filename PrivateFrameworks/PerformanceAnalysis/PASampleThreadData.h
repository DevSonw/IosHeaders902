/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PASerializable.h>

@class PASampleFrame, NSString;

@interface PASampleThreadData : NSObject <PASerializable> {

	PASampleFrame* leafFrame;
	unsigned long long dispatchQueueId;
	unsigned long long waitEvent;
	unsigned long long continuation;
	unsigned long long userTimeInNs;
	unsigned long long systemTimeInNs;
	unsigned long long threadId;
	int state;
	int staticPriority;
	int currentScheduledPriority;
	int schedulerFlags;
	char threadQos;
	char threadRequestedQos;
	char threadRequestedQosOverride;
	unsigned char ioTier;
	char ioPassive;
	char isSuspended;
	char ss_flags;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) char hasDispatchQueue; 
@property (readonly) char isWaiting; 
@property (readonly) char isStopped; 
@property (readonly) char isRunning; 
@property (readonly) char isWaitingUninterruptibly; 
@property (readonly) char isHaltedAtTermination; 
@property (readonly) char isAbortingInterruptibleWaits; 
@property (readonly) char isAbortingInterruptibleWaitsAtSafePoints; 
@property (readonly) char isProcessorIdleThread; 
@property (readonly) char hasDispatchSerial; 
@property (readonly) char stackTracesHaveNoFramePointers; 
@property (readonly) char isDarwinBG; 
@property (readonly) char hasValidPowerstatsFlags; 
@property (readonly) unsigned powerstatsFlags; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(id)stack;
-(char)isStopped;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(char)isRunning;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(char)hasDispatchQueue;
-(char)isDarwinBG;
-(unsigned)powerstatsFlags;
-(char)isProcessorIdleThread;
-(char)isStackEqualTo:(id)arg1 ;
-(char)hasValidPowerstatsFlags;
-(char)isWaiting;
-(char)isWaitingUninterruptibly;
-(char)isHaltedAtTermination;
-(char)isAbortingInterruptibleWaits;
-(char)isAbortingInterruptibleWaitsAtSafePoints;
-(char)hasDispatchSerial;
-(char)stackTracesHaveNoFramePointers;
-(id)initWithStackshotThread:(id)arg1 andLeafFrame:(id)arg2 ;
@end
