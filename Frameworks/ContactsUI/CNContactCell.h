/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:44:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSArray, CNCardGroupItem;

@interface CNContactCell : UITableViewCell {

	NSArray* _constantConstraints;
	NSArray* _variableConstraints;
	char _hasBeenDisplayed;
	char _shouldUseExpandedContentStyle;
	CNCardGroupItem* _cardGroupItem;
	float _leftContentMargin;
	float _rightContentMargin;

}

@property (assign,nonatomic) char showSeparator; 
@property (nonatomic,retain) CNCardGroupItem * cardGroupItem;                 //@synthesize cardGroupItem=_cardGroupItem - In the implementation block
@property (assign,nonatomic) float leftContentMargin;                         //@synthesize leftContentMargin=_leftContentMargin - In the implementation block
@property (assign,nonatomic) float rightContentMargin;                        //@synthesize rightContentMargin=_rightContentMargin - In the implementation block
@property (assign,nonatomic) char hasBeenDisplayed;                           //@synthesize hasBeenDisplayed=_hasBeenDisplayed - In the implementation block
@property (assign,nonatomic) char shouldUseExpandedContentStyle;              //@synthesize shouldUseExpandedContentStyle=_shouldUseExpandedContentStyle - In the implementation block
-(void)performDefaultAction;
-(CNCardGroupItem *)cardGroupItem;
-(void)setCardGroupItem:(CNCardGroupItem *)arg1 ;
-(id)variableConstraints;
-(float)minCellHeight;
-(id)constantConstraints;
-(char)shouldPerformAccessoryAction;
-(void)performAccessoryAction;
-(float)leftContentMargin;
-(float)rightContentMargin;
-(char)hasBeenDisplayed;
-(void)setHasBeenDisplayed:(char)arg1 ;
-(char)shouldUseExpandedContentStyle;
-(void)setShouldUseExpandedContentStyle:(char)arg1 ;
-(void)setShowSeparator:(char)arg1 ;
-(char)showSeparator;
-(void)setRightContentMargin:(float)arg1 ;
-(void)setLeftContentMargin:(float)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(char)shouldPerformDefaultAction;
@end

