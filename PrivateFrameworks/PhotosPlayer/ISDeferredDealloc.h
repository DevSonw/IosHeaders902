/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ISDeferredDealloc : NSObject {

	NSObject*<OS_dispatch_queue> _deferredDeallocQueue;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_performDeferredDealloc:(id)arg1 ;
@end
