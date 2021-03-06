/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@interface AVMetadataFaceObjectInternal : NSObject {

	int _faceID;
	char _hasRollAngle;
	float _rollAngle;
	char _hasYawAngle;
	float _yawAngle;
	char _hasLeftEyeClosedConfidence;
	int _leftEyeClosedConfidence;
	char _hasRightEyeClosedConfidence;
	int _rightEyeClosedConfidence;
	char _hasSmileConfidence;
	int _smileConfidence;
	char _hasLeftEyeBounds;
	CGRect _leftEyeBounds;
	char _hasRightEyeBounds;
	CGRect _rightEyeBounds;

}

@property (assign,nonatomic) int faceID;                                    //@synthesize faceID=_faceID - In the implementation block
@property (assign,nonatomic) char hasRollAngle;                             //@synthesize hasRollAngle=_hasRollAngle - In the implementation block
@property (assign,nonatomic) float rollAngle;                               //@synthesize rollAngle=_rollAngle - In the implementation block
@property (assign,nonatomic) char hasYawAngle;                              //@synthesize hasYawAngle=_hasYawAngle - In the implementation block
@property (assign,nonatomic) float yawAngle;                                //@synthesize yawAngle=_yawAngle - In the implementation block
@property (assign,nonatomic) char hasLeftEyeClosedConfidence;               //@synthesize hasLeftEyeClosedConfidence=_hasLeftEyeClosedConfidence - In the implementation block
@property (assign,nonatomic) int leftEyeClosedConfidence;                   //@synthesize leftEyeClosedConfidence=_leftEyeClosedConfidence - In the implementation block
@property (assign,nonatomic) char hasRightEyeClosedConfidence;              //@synthesize hasRightEyeClosedConfidence=_hasRightEyeClosedConfidence - In the implementation block
@property (assign,nonatomic) int rightEyeClosedConfidence;                  //@synthesize rightEyeClosedConfidence=_rightEyeClosedConfidence - In the implementation block
@property (assign,nonatomic) char hasSmileConfidence;                       //@synthesize hasSmileConfidence=_hasSmileConfidence - In the implementation block
@property (assign,nonatomic) int smileConfidence;                           //@synthesize smileConfidence=_smileConfidence - In the implementation block
@property (assign,nonatomic) char hasLeftEyeBounds;                         //@synthesize hasLeftEyeBounds=_hasLeftEyeBounds - In the implementation block
@property (assign,nonatomic) CGRect leftEyeBounds;                          //@synthesize leftEyeBounds=_leftEyeBounds - In the implementation block
@property (assign,nonatomic) char hasRightEyeBounds;                        //@synthesize hasRightEyeBounds=_hasRightEyeBounds - In the implementation block
@property (assign,nonatomic) CGRect rightEyeBounds;                         //@synthesize rightEyeBounds=_rightEyeBounds - In the implementation block
-(void)setFaceID:(int)arg1 ;
-(void)setHasRollAngle:(char)arg1 ;
-(void)setRollAngle:(float)arg1 ;
-(void)setHasYawAngle:(char)arg1 ;
-(void)setYawAngle:(float)arg1 ;
-(void)setHasLeftEyeClosedConfidence:(char)arg1 ;
-(void)setLeftEyeClosedConfidence:(int)arg1 ;
-(void)setHasRightEyeClosedConfidence:(char)arg1 ;
-(void)setRightEyeClosedConfidence:(int)arg1 ;
-(void)setHasSmileConfidence:(char)arg1 ;
-(void)setSmileConfidence:(int)arg1 ;
-(void)setHasLeftEyeBounds:(char)arg1 ;
-(void)setLeftEyeBounds:(CGRect)arg1 ;
-(void)setHasRightEyeBounds:(char)arg1 ;
-(void)setRightEyeBounds:(CGRect)arg1 ;
-(int)faceID;
-(char)hasRollAngle;
-(float)rollAngle;
-(char)hasYawAngle;
-(float)yawAngle;
-(char)hasLeftEyeBounds;
-(CGRect)leftEyeBounds;
-(char)hasLeftEyeClosedConfidence;
-(int)leftEyeClosedConfidence;
-(char)hasRightEyeBounds;
-(CGRect)rightEyeBounds;
-(char)hasRightEyeClosedConfidence;
-(int)rightEyeClosedConfidence;
-(char)hasSmileConfidence;
-(int)smileConfidence;
@end

