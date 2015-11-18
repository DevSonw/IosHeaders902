/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:45:51 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLRemotePreviewContentControllerProtocol <QLPreviewContentControllerProtocol>
@required
-(void)_willTransitionToSize:(CGSize)arg1;
-(void)_setNavigationBarVerticalOffset:(float)arg1;
-(void)_setNumberOfPreviewItems:(int)arg1;
-(void)_dismissTransitionIsReadyToFinish;
-(void)_setTransitioning:(char)arg1;
-(void)_getNumberOfPagesForSize:(CGSize)arg1 withHandler:(/*^block*/id)arg2;
-(void)_prepareForDrawingPages:(NSRange)arg1 withSize:(CGSize)arg2;
-(void)_getPDFPageAtIndex:(int)arg1 handler:(/*^block*/id)arg2;

@end
