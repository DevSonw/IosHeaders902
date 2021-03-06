/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIImage, UIView, UIColor, CALayer;

@interface _UISwitchInfo : NSObject {

	int imageState;
	UIImage* images[8];
	UIView* rightEdgeView;
	UIView* leftEdgeView;
	float position;
	UIColor* onButtonColor;
	CALayer* maskLayer;
	struct {
		unsigned on : 1;
		unsigned pressed : 1;
		unsigned useAlternateColors : 1;
		unsigned skipValueChangedAction : 1;
	}  _switchFlags;

}
-(void)setMinimumTrackImage:(id)arg1 forStates:(unsigned)arg2 ;
@end

