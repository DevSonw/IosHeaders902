/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:33 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, _AVViewSublayerAnimationDelegateProxy, NSArray;

@interface AVView : UIView {

	NSMutableArray* _sublayers;
	_AVViewSublayerAnimationDelegateProxy* _sublayerAnimationDelegateProxy;

}

@property (nonatomic,readonly) NSArray * sublayers; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)addSublayer:(id)arg1 ;
-(NSArray *)sublayers;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)removeSublayer:(id)arg1 ;
@end

