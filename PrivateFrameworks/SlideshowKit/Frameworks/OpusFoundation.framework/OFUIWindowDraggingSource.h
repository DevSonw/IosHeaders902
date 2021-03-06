/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OFUIWindowDraggingSource <NSObject>
@optional
-(CGPoint*)draggingSource:(id)arg1 badgeCenterForItem:(id)arg2;
-(CGRect*)draggingSource:(id)arg1 originalFrameForItem:(id)arg2;
-(void)draggingSource:(id)arg1 prepareItem:(id)arg2;
-(void)draggingSource:(id)arg1 cleanupItem:(id)arg2;
-(unsigned)draggingSourceWillBegin:(id)arg1;
-(void)draggingSourceDidBegin:(id)arg1;
-(char)draggingSource:(id)arg1 willAddItem:(id)arg2;
-(void)draggingSource:(id)arg1 didAddItem:(id)arg2;
-(void)draggingSourceDidMove:(id)arg1;
-(void)draggingSource:(id)arg1 updateItem:(id)arg2;
-(void)draggingSourceDidEnd:(id)arg1 cancelled:(char)arg2;

@end

