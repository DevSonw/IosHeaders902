/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _UIAsyncInvocationObserver : NSObject {

	NSObject*<OS_dispatch_queue> _postCompletionQueue;
	NSObject*<OS_dispatch_queue> _completionQueueManagementQueue;
	char _suspendedPostCompletionQueue;
	char _resumedPostCompletionQueue;

}
+(void)whenInvocationsCompleteForObservers:(id)arg1 do:(/*^block*/id)arg2 ;
-(id)init;
-(void)whenCompleteDo:(/*^block*/id)arg1 ;
-(void)_didCompleteInvocation;
@end
