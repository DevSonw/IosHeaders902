/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OFUIGridViewDataSource <NSObject>
@optional
-(void)gridView:(id)arg1 willDisplayCell:(id)arg2 atIndex:(unsigned)arg3;
-(void)gridView:(id)arg1 didRecycleCell:(id)arg2 atIndex:(unsigned)arg3;

@required
-(int)numberOfCellsInGridView:(id)arg1;
-(id)gridView:(id)arg1 cellAtIndex:(unsigned)arg2;

@end
