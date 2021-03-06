/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SearchUI/SearchUIVibrantView.h>

@protocol SearchUIResult;
@class NSURL, SearchUITableViewCell;

@interface SearchUIPunchoutActionButton : SearchUIVibrantView {

	NSURL* _punchoutURL;
	SearchUITableViewCell* _cell;
	id<SearchUIResult> _result;

}

@property (nonatomic,retain) NSURL * punchoutURL;                              //@synthesize punchoutURL=_punchoutURL - In the implementation block
@property (assign,nonatomic,__weak) SearchUITableViewCell * cell;              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) id<SearchUIResult> result;                        //@synthesize result=_result - In the implementation block
-(NSURL *)punchoutURL;
-(SearchUITableViewCell *)cell;
-(void)setCell:(SearchUITableViewCell *)arg1 ;
-(id<SearchUIResult>)result;
-(void)setPunchoutURL:(NSURL *)arg1 ;
-(void)_buttonPressed;
-(id)initWithActionButtonItem:(id)arg1 style:(unsigned)arg2 image:(id)arg3 cell:(id)arg4 result:(id)arg5 ;
-(char)updateActionButtonWithResult:(id)arg1 style:(unsigned)arg2 cell:(id)arg3 result:(id)arg4 ;
-(void)setResult:(id<SearchUIResult>)arg1 ;
@end

