/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCDownload.h>

@class BRCServerZone, NSIndexSet;

@interface BRCDownloadContent : BRCDownload {

	unsigned long long _liveFileID;
	unsigned _liveDocumentID;
	char _liveItemIsPackage;
	BRCServerZone* _zone;
	char _requiresSecondPhase;
	NSIndexSet* _desiredIndices;

}

@property (nonatomic,readonly) char requiresSecondPhase;                   //@synthesize requiresSecondPhase=_requiresSecondPhase - In the implementation block
@property (nonatomic,readonly) char liveItemIsPackage;                     //@synthesize liveItemIsPackage=_liveItemIsPackage - In the implementation block
@property (nonatomic,readonly) unsigned liveDocumentID;                    //@synthesize liveDocumentID=_liveDocumentID - In the implementation block
@property (nonatomic,readonly) unsigned long long liveFileID;              //@synthesize liveFileID=_liveFileID - In the implementation block
@property (nonatomic,readonly) NSIndexSet * desiredIndices;                //@synthesize desiredIndices=_desiredIndices - In the implementation block
-(id)description;
-(int)kind;
-(char)requiresSecondPhase;
-(id)initWithDocument:(id)arg1 stageID:(id)arg2 ;
-(char)_stageWithSession:(id)arg1 error:(id*)arg2 ;
-(char)_prepareSecondStageWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 error:(id*)arg4 ;
-(char)_stageWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 error:(id*)arg4 ;
-(char)liveItemIsPackage;
-(unsigned)liveDocumentID;
-(NSIndexSet *)desiredIndices;
-(unsigned long long)liveFileID;
@end
