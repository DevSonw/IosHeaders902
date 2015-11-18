/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:24:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface HMDelegateCaller : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)invokeBlock:(/*^block*/id)arg1 ;
-(id)_localizedError:(id)arg1 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 obj:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 obj:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 value:(char)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 errorString:(id)arg2 ;
-(void)callCompletion:(/*^block*/id)arg1 errorString:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 dictionary:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 isUsingHomeKit:(char)arg2 isUsingCloudServices:(char)arg3 error:(id)arg4 ;
-(void)callCompletion:(/*^block*/id)arg1 home:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 room:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 zone:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 serviceGroup:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 actionSet:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 array:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 invitations:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 user:(id)arg2 error:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 ;
@end
