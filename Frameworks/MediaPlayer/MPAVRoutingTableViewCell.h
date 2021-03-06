/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:43 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol MPAVRoutingTableViewCellDelegate;
@class UILabel, UISwitch, UIView, MPAVRoute;

@interface MPAVRoutingTableViewCell : UITableViewCell {

	UILabel* _mirroringLabel;
	UISwitch* _mirroringSwitch;
	UIView* _mirroringSeparatorView;
	char _mirroringSwitchVisible;
	char _debugCell;
	id<MPAVRoutingTableViewCellDelegate> _delegate;
	MPAVRoute* _route;

}

@property (assign,nonatomic,__weak) id<MPAVRoutingTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPAVRoute * route;                                                 //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) char mirroringSwitchVisible;                                       //@synthesize mirroringSwitchVisible=_mirroringSwitchVisible - In the implementation block
@property (assign,getter=isDebugCell,nonatomic) char debugCell;                                 //@synthesize debugCell=_debugCell - In the implementation block
-(void)_configureLabel:(id)arg1 ;
-(char)_shouldShowMirroringAsEnabledForRoute:(id)arg1 ;
-(void)setMirroringSwitchVisible:(char)arg1 animated:(char)arg2 ;
-(void)_mirroringSwitchValueDidChange:(id)arg1 ;
-(void)setMirroringSwitchVisible:(char)arg1 ;
-(void)setDebugCell:(char)arg1 ;
-(char)mirroringSwitchVisible;
-(char)isDebugCell;
-(void)setDelegate:(id<MPAVRoutingTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MPAVRoutingTableViewCellDelegate>)delegate;
-(MPAVRoute *)route;
-(void)setRoute:(MPAVRoute *)arg1 ;
@end

