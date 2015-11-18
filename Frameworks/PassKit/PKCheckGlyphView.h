/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:08 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKMicaView.h>

@class CAShapeLayer, CAGradientLayer, UIColor;

@interface PKCheckGlyphView : PKMicaView {

	CAShapeLayer* _shapeLayer;
	CAGradientLayer* _maskLayer;
	char _covered;
	CATransform3D _uncoveredTransform;
	CATransform3D _coveredTransform;
	char _revealed;
	UIColor* _primaryColor;

}

@property (nonatomic,copy) UIColor * primaryColor;              //@synthesize primaryColor=_primaryColor - In the implementation block
@property (assign,nonatomic) char revealed;                     //@synthesize revealed=_revealed - In the implementation block
+(id)defaultActions;
-(id)initWithFrame:(CGRect)arg1 package:(id)arg2 ;
-(void)_createMask;
-(double)_updateCovered:(char)arg1 ;
-(void)setPrimaryColor:(id)arg1 animated:(char)arg2 ;
-(double)setRevealed:(char)arg1 animated:(char)arg2 ;
-(double)setCovered:(char)arg1 animated:(char)arg2 ;
-(void)setRevealed:(char)arg1 ;
-(char)revealed;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UIColor *)primaryColor;
-(void)setPrimaryColor:(UIColor *)arg1 ;
@end
