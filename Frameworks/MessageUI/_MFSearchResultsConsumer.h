/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:32:47 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _MFSearchResultsConsumer <NSObject>
@required
-(char)_isResetting;
-(void)_addResults:(id)arg1 ofType:(unsigned)arg2;
-(char)_shouldProcessResultsAfterFinishingType:(unsigned)arg1;
-(char)_didFinishSearchForType:(unsigned)arg1;
-(void)_enumerateSearchResultTypesInSortOrderUsingBlock:(/*^block*/id)arg1;
-(void)_appendSortedResultsOfType:(unsigned)arg1 excluding:(id)arg2 toResults:(id)arg3;

@end

