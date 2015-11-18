/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIMotionEffect.h>

@class NSString;

@interface UIInterpolatingMotionEffect : UIMotionEffect {

	float _horizontalAccelerationBoostFactor;
	float _verticalAccelerationBoostFactor;
	NSString* _keyPath;
	int _type;
	id _minimumRelativeValue;
	id _maximumRelativeValue;

}

@property (nonatomic,readonly) NSString * keyPath;                 //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) int type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id minimumRelativeValue;              //@synthesize minimumRelativeValue=_minimumRelativeValue - In the implementation block
@property (nonatomic,retain) id maximumRelativeValue;              //@synthesize maximumRelativeValue=_maximumRelativeValue - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(int)type;
-(void)_setType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)keyPath;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(void)setMinimumRelativeValue:(id)arg1 ;
-(void)setMaximumRelativeValue:(id)arg1 ;
-(id)initWithKeyPath:(id)arg1 type:(int)arg2 ;
-(void)_setHorizontalAccelerationBoostFactor:(float)arg1 ;
-(float)_horizontalAccelerationBoostFactor;
-(void)_setVerticalAccelerationBoostFactor:(float)arg1 ;
-(float)_verticalAccelerationBoostFactor;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg1 ;
-(void)_setKeyPath:(id)arg1 ;
-(id)minimumRelativeValue;
-(id)maximumRelativeValue;
@end
