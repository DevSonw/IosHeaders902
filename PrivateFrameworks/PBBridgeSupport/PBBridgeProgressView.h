/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface PBBridgeProgressView : UIView {

	float _currentProgress;
	UIImageView* _appleLogo;
	unsigned _style;
	unsigned _version;

}

@property (assign,nonatomic) float currentProgress;                //@synthesize currentProgress=_currentProgress - In the implementation block
@property (nonatomic,retain) UIImageView * appleLogo;              //@synthesize appleLogo=_appleLogo - In the implementation block
@property (assign,nonatomic) unsigned style;                       //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned version;                     //@synthesize version=_version - In the implementation block
-(void)setCurrentProgress:(float)arg1 ;
-(float)currentProgress;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(unsigned)arg1 ;
-(unsigned)style;
-(void)setStyle:(unsigned)arg1 ;
-(CGSize)_size;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(id)initWithStyle:(unsigned)arg1 andVersion:(unsigned)arg2 ;
-(float)_tickLength;
-(UIImageView *)appleLogo;
-(void)setAppleLogo:(UIImageView *)arg1 ;
@end
