/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UITouchForceObservationMessageReading <NSObject>
@property (nonatomic,readonly) float touchForce; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) CGPoint centroid; 
@property (nonatomic,readonly) char shouldFilterDueToSystemGestures; 
@required
-(double)timestamp;
-(char)shouldFilterDueToSystemGestures;
-(float)touchForce;
-(CGPoint)centroid;

@end

