/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface PGChevronView : UIView {

	int _state;
	UIView* _topView;
	UIView* _bottomView;

}

@property (assign,nonatomic) int state; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setState:(int)arg1 animated:(char)arg2 ;
@end
