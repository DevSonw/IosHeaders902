/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSConditionLock;

@interface _SCRCThreadTask : NSObject {

	id _target;
	SEL _selector;
	unsigned long _count;
	NSConditionLock* _waitLock;
	unsigned long _mask;

}
+(id)newThreadTaskWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned long)arg3 count:(unsigned long)arg4 firstObject:(id)arg5 moreObjects:(void*)arg6 ;
-(void)fire;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned long)arg3 count:(unsigned long)arg4 firstObject:(id)arg5 moreObjects:(void*)arg6 ;
-(void)setWaitLock:(id)arg1 ;
@end
