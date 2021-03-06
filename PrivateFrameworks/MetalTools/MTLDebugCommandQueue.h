/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MetalTools/MTLToolsCommandQueue.h>

@interface MTLDebugCommandQueue : MTLToolsCommandQueue {

	unsigned _maxCommandBufferCount;

}

@property (nonatomic,readonly) unsigned maxCommandBufferCount;              //@synthesize maxCommandBufferCount=_maxCommandBufferCount - In the implementation block
-(id)commandBufferWithUnretainedReferences;
-(id)commandBuffer;
-(id)initWithCommandQueue:(id)arg1 device:(id)arg2 maxBufferCount:(unsigned)arg3 ;
-(unsigned)maxCommandBufferCount;
@end

