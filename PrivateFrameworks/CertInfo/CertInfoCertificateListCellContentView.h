/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface CertInfoCertificateListCellContentView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _expirationLabel;

}
-(void)setExpiration:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(void)_setupLabel:(id)arg1 isSubtitle:(char)arg2 ;
-(void)_setText:(id)arg1 forLabel:(id)arg2 withRedColor:(char)arg3 ;
@end
