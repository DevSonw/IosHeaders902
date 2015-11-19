/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TIKeyboardTouchEvent : NSObject <NSSecureCoding> {

	float _radius;
	int _pathIndex;
	int _stage;
	int _forcedKeyCode;
	CGPoint _location;
	double _timestamp;

}

@property (nonatomic,readonly) int stage;                      //@synthesize stage=_stage - In the implementation block
@property (nonatomic,readonly) CGPoint location;               //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) float radius;                   //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) double timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) int pathIndex;                  //@synthesize pathIndex=_pathIndex - In the implementation block
@property (nonatomic,readonly) int forcedKeyCode;              //@synthesize forcedKeyCode=_forcedKeyCode - In the implementation block
+(char)supportsSecureCoding;
+(id)touchEventWithStage:(int)arg1 location:(CGPoint)arg2 radius:(float)arg3 timestamp:(double)arg4 pathIndex:(int)arg5 forcedKeyCode:(int)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)timestamp;
-(int)pathIndex;
-(CGPoint)location;
-(int)stage;
-(float)radius;
-(id)initWithStage:(int)arg1 location:(CGPoint)arg2 radius:(float)arg3 timestamp:(double)arg4 pathIndex:(int)arg5 forcedKeyCode:(int)arg6 ;
-(int)forcedKeyCode;
@end
