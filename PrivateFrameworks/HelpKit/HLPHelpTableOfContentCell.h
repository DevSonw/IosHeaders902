/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class HLPURLSession, NSLayoutConstraint, HLPHelpItem, UILabel, UIImageView;

@interface HLPHelpTableOfContentCell : UITableViewCell {

	HLPURLSession* _sectionImageURLSession;
	NSLayoutConstraint* _arrowImageViewLeadingConstraint;
	NSLayoutConstraint* _arrowImageViewWidthConstraint;
	NSLayoutConstraint* _sectionImageWidthConstraint;
	NSLayoutConstraint* _sectionImageLeadingConstraint;
	NSLayoutConstraint* _nameLabelMinHeightConstraint;
	char _showFirstLevelIcon;
	char _closed;
	char _RTL;
	float _minNameLabelHeight;
	HLPHelpItem* _helpItem;
	UILabel* _nameLabel;
	UIImageView* _arrowImageView;
	UIImageView* _sectionImageView;

}

@property (assign,nonatomic) char showFirstLevelIcon;                     //@synthesize showFirstLevelIcon=_showFirstLevelIcon - In the implementation block
@property (assign,nonatomic) char closed;                                 //@synthesize closed=_closed - In the implementation block
@property (assign,nonatomic) float minNameLabelHeight;                    //@synthesize minNameLabelHeight=_minNameLabelHeight - In the implementation block
@property (nonatomic,retain) HLPHelpItem * helpItem;                      //@synthesize helpItem=_helpItem - In the implementation block
@property (assign,nonatomic) char RTL;                                    //@synthesize RTL=_RTL - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                         //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UIImageView * arrowImageView;                //@synthesize arrowImageView=_arrowImageView - In the implementation block
@property (nonatomic,retain) UIImageView * sectionImageView;              //@synthesize sectionImageView=_sectionImageView - In the implementation block
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)accessibilityLabel;
-(void)prepareForReuse;
-(void)updateConstraints;
-(void)setClosed:(char)arg1 ;
-(char)closed;
-(void)setShowFirstLevelIcon:(char)arg1 ;
-(void)setHelpItem:(HLPHelpItem *)arg1 ;
-(void)setMinNameLabelHeight:(float)arg1 ;
-(void)updateToggleImageAnimated:(char)arg1 ;
-(UIImageView *)arrowImageView;
-(char)showFirstLevelIcon;
-(float)minNameLabelHeight;
-(HLPHelpItem *)helpItem;
-(char)RTL;
-(void)setRTL:(char)arg1 ;
-(void)setArrowImageView:(UIImageView *)arg1 ;
-(UIImageView *)sectionImageView;
-(void)setSectionImageView:(UIImageView *)arg1 ;
-(void)toggle;
-(void)updateFonts;
@end

