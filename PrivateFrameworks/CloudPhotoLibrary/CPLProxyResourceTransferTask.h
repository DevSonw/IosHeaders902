/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@class CPLProxyLibraryManager;

@interface CPLProxyResourceTransferTask : CPLResourceTransferTask {

	CPLProxyLibraryManager* _proxyLibraryManager;

}

@property (nonatomic,retain) CPLProxyLibraryManager * proxyLibraryManager;              //@synthesize proxyLibraryManager=_proxyLibraryManager - In the implementation block
-(void)setProxyLibraryManager:(CPLProxyLibraryManager *)arg1 ;
-(CPLProxyLibraryManager *)proxyLibraryManager;
-(void)cancelTask;
@end
