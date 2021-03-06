/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/Support/com.apple.quicklook.ThumbnailsAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLThumbnailsInterface
@required
-(void)hasThumbnailForURL:(id)arg1 updateLastHitDate:(char)arg2 completion:(/*^block*/id)arg3;
-(void)requestWritingThumbnailOfMaximumSize:(CGSize)arg1 forDocumentAtURL:(id)arg2 toFileHandle:(id)arg3 atBackgroundPriority:(char)arg4 completionHandler:(/*^block*/id)arg5;
-(void)thumbnailsStoreURLForURL:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)removeThumbnailAdditionsOnURL:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)askThumbnailAdditionIndex:(/*^block*/id)arg1;

@end

