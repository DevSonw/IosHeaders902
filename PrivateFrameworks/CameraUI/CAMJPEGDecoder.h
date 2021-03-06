/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CameraUI/CameraUI-Structs.h>
@class NSObject;

@interface CAMJPEGDecoder : NSObject {

	NSObject*<OS_dispatch_queue> __decodeQueue;
	OpaqueFigJPEGDecodeSessionRef __decodeSession;
	NSObject*<OS_dispatch_source> __memoryWarningSource;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _decodeQueue;                       //@synthesize _decodeQueue=__decodeQueue - In the implementation block
@property (nonatomic,readonly) OpaqueFigJPEGDecodeSessionRef _decodeSession;                    //@synthesize _decodeSession=__decodeSession - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> _memoryWarningSource;              //@synthesize _memoryWarningSource=__memoryWarningSource - In the implementation block
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_source>)_memoryWarningSource;
-(NSObject*<OS_dispatch_queue>)_decodeQueue;
-(OpaqueFigJPEGDecodeSessionRef)_decodeSession;
-(void)decodeJPEGData:(id)arg1 withPixelBufferCompletionHandler:(/*^block*/id)arg2 ;
@end

