/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AFSpeechServiceDelegateADLocalSpeechRecognizerDelegate;
@class NSObject, NSXPCConnection;

@interface ADLocalSpeechRecognizer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _esConnection;
	id<AFSpeechServiceDelegate><ADLocalSpeechRecognizerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<AFSpeechServiceDelegate><ADLocalSpeechRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)serviceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)init;
-(id<AFSpeechServiceDelegate><ADLocalSpeechRecognizerDelegate>)delegate;
-(void)invalidate;
-(void)suspend;
-(void)resume;
-(id)_connection;
-(id)service;
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 ;
-(void)kill;
@end
