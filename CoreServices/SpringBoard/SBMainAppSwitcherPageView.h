/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAppSwitcherPageView.h>

@interface SBMainAppSwitcherPageView : SBAppSwitcherPageView {

	int _orientation;

}

@property (assign,nonatomic) int orientation;                                             //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) UIView*<SBMainAppSwitcherPageContentView> view; 
+(CGSize)sizeForOrientation:(int)arg1 ;
+(float)_horizontalEdgeBorderForOrientation:(int)arg1 ;
-(CGPoint)_centerForSubviewLayout;
-(CGAffineTransform)_scaleTransform;
-(void)setView:(id)arg1 animated:(char)arg2 ;
-(CGAffineTransform)_overlayRotationTransform;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(CGRect)_viewFrame;
@end

