/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconListView.h>

@interface SBStarkRootIconListView : SBIconListView {

	UIEdgeInsets _insets;

}

@property (assign,nonatomic) UIEdgeInsets insets;              //@synthesize insets=_insets - In the implementation block
+(unsigned)iconColumnsForInterfaceOrientation:(int)arg1 ;
+(unsigned)maxVisibleIconRowsInterfaceOrientation:(int)arg1 ;
-(float)bottomIconInset;
-(float)sideIconInset;
-(float)topIconInset;
-(Class)baseIconViewClass;
-(int)iconLocation;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
@end

