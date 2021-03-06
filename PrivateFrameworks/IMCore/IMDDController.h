/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <IMCore/IMCore-Structs.h>
@class NSObject;

@interface IMDDController : NSObject {

	NSObject*<OS_dispatch_queue> _scannerQueue;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)scanMessage:(id)arg1 waitUntilDone:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)scanMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(char)_scanMessageUsingScanner:(id)arg1 attributedString:(id)arg2 ;
-(DDScannerRef)sharedScanner;
-(id)scannerQueue;
@end

