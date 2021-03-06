/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@protocol SBCollectionViewCellDelegate;
@interface SBCollectionViewCell : UICollectionViewCell {

	id<SBCollectionViewCellDelegate> _delegate;
	char _performSetHighlighted;
	char _protectDelayedUnhighlights;

}

@property (assign,nonatomic) id<SBCollectionViewCellDelegate> delegate; 
@property (assign,nonatomic) char protectDelayedUnhighlights;                        //@synthesize protectDelayedUnhighlights=_protectDelayedUnhighlights - In the implementation block
-(void)setHighlighted:(char)arg1 afterDelay:(double)arg2 ;
-(void)_performSetHighlighted;
-(void)_didSetHighlighted:(char)arg1 ;
-(char)protectDelayedUnhighlights;
-(void)setProtectDelayedUnhighlights:(char)arg1 ;
-(void)setDelegate:(id<SBCollectionViewCellDelegate>)arg1 ;
-(id<SBCollectionViewCellDelegate>)delegate;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
@end

