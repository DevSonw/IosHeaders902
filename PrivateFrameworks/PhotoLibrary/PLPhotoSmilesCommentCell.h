/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIButton, NSOrderedSet, UIView;

@interface PLPhotoSmilesCommentCell : UITableViewCell {

	char _showUserLikes;
	char _isVideo;
	char _showsSmileButton;
	char _usesCompactSeparators;
	UILabel* _smileContentLabel;
	UIButton* _smileImageButton;
	NSOrderedSet* _userLikes;
	UIView* _styledSeparatorView;

}

@property (nonatomic,retain,readonly) UIButton * smileImageButton;               //@synthesize smileImageButton=_smileImageButton - In the implementation block
@property (assign,nonatomic) char showUserLikes;                                 //@synthesize showUserLikes=_showUserLikes - In the implementation block
@property (nonatomic,copy) NSOrderedSet * userLikes;                             //@synthesize userLikes=_userLikes - In the implementation block
@property (assign,nonatomic) char isVideo;                                       //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) char showsSmileButton;                              //@synthesize showsSmileButton=_showsSmileButton - In the implementation block
@property (assign,nonatomic) char usesCompactSeparators;                         //@synthesize usesCompactSeparators=_usesCompactSeparators - In the implementation block
@property (nonatomic,retain,readonly) UILabel * smileContentLabel;               //@synthesize smileContentLabel=_smileContentLabel - In the implementation block
@property (nonatomic,retain,readonly) UIView * styledSeparatorView;              //@synthesize styledSeparatorView=_styledSeparatorView - In the implementation block
+(float)heightOfSmileCellWithComments:(id)arg1 forWidth:(float)arg2 isVideo:(char)arg3 forInterfaceOrientation:(int)arg4 ;
+(id)_smileStringForComments:(id)arg1 ;
+(id)_attributedStringForComments:(id)arg1 color:(id)arg2 isVideo:(char)arg3 ;
-(void)setShowsSmileButton:(char)arg1 ;
-(void)setShowUserLikes:(char)arg1 ;
-(void)setUserLikes:(NSOrderedSet *)arg1 ;
-(void)setIsVideo:(char)arg1 ;
-(void)setUsesCompactSeparators:(char)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(char)isVideo;
-(UIButton *)smileImageButton;
-(void)_updateContent;
-(char)usesCompactSeparators;
-(UILabel *)smileContentLabel;
-(char)showUserLikes;
-(NSOrderedSet *)userLikes;
-(char)showsSmileButton;
-(UIView *)styledSeparatorView;
@end

