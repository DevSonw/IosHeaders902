/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterHelper.h>
#import <AVFoundation/AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, AVAssetWriterFigAssetWriterNotificationHandler, NSString;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {

	OpaqueFigAssetWriterRef _figAssetWriter;
	NSObject*<OS_dispatch_queue> _figAssetWriterAccessQueue;
	char _startSessionCalled;
	AVAssetWriterFigAssetWriterNotificationHandler* _notificationHandler;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)prepareInputsOperationsWithInputs:(id)arg1 ;
+(id)finalStepWorkaroundOperationWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 ;
-(void)endSessionAtSourceTime:(SCD_Struct_CM5)arg1 ;
-(void)finishWriting;
-(id)initWithConfigurationState:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 error:(id*)arg2 ;
-(void)didReceiveFigAssetWriterNotificationWithSuccess:(char)arg1 error:(id)arg2 ;
-(id)figTrackReferences;
-(OpaqueFigAssetWriterRef)_retainedFigAssetWriter;
-(id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)arg1 ;
-(id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)arg1 ;
-(void)dealloc;
-(int)status;
-(void)startSessionAtSourceTime:(SCD_Struct_CM5)arg1 ;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelWriting;
-(void)finalize;
@end

