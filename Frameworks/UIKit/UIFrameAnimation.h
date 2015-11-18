/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAnimation.h>

@interface UIFrameAnimation : UIAnimation {

	CGRect _startFrame;
	CGRect _endFrame;
	int _fieldsToChange;

}
-(void)setProgress:(float)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(void)setStartFrame:(CGRect)arg1 ;
-(void)setEndFrame:(CGRect)arg1 ;
-(CGRect)endFrame;
-(void)setSignificantRectFields:(int)arg1 ;
@end
