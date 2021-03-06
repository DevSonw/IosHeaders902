/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface CKAttachmentSaver : NSObject {

	unsigned _errorCount;
	NSMutableArray* _attachments;

}
-(void)dealloc;
-(void)_saveNextAttachment;
-(void)_done;
-(void)_saveCompletionForVideoWithPath:(id)arg1 error:(id)arg2 context:(void*)arg3 ;
-(void)_saveCompletionForImage:(id)arg1 error:(id)arg2 context:(void*)arg3 ;
-(void)_pop;
-(void)_saveCompletion:(id)arg1 ;
-(id)initWithAttachments:(id)arg1 ;
-(void)runToCompletion;
@end

