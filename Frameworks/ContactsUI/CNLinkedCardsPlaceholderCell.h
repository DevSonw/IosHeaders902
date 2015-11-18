/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:44:03 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyPlaceholderCell.h>

@protocol CNPropertyCellDelegate;
@interface CNLinkedCardsPlaceholderCell : CNPropertyPlaceholderCell {

	id<CNPropertyCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)performDefaultAction;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(id<CNPropertyCellDelegate>)delegate;
@end
