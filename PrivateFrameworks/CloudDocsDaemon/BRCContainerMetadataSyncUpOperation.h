/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class NSString;

@interface BRCContainerMetadataSyncUpOperation : _BRCOperation <BRCOperationSubclass> {

	char _shouldPerformAnotherBatch;

}

@property (nonatomic,readonly) char shouldPerformAnotherBatch;              //@synthesize shouldPerformAnotherBatch=_shouldPerformAnotherBatch - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 ;
-(void)main;
-(char)shouldRetryForError:(id)arg1 ;
-(char)shouldPerformAnotherBatch;
-(void)performAfterSavingRecords:(/*^block*/id)arg1 ;
-(unsigned long long)startActivity;
@end
