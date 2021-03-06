/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/OKActionMotionExports.h>

@interface OKActionMotion : OKAction <NSSecureCoding, OKActionMotionExports> {

	float _rotationX;
	float _rotationY;
	float _rotationZ;

}

@property (nonatomic,readonly) float rotationX;              //@synthesize rotationX=_rotationX - In the implementation block
@property (nonatomic,readonly) float rotationY;              //@synthesize rotationY=_rotationY - In the implementation block
@property (nonatomic,readonly) float rotationZ;              //@synthesize rotationZ=_rotationZ - In the implementation block
+(char)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)motionActionWithState:(unsigned)arg1 rotationX:(float)arg2 rotationY:(float)arg3 rotationZ:(float)arg4 context:(id)arg5 ;
+(id)motionActionWithState:(unsigned)arg1 location:(CGPoint)arg2 touchCount:(unsigned)arg3 rotationX:(float)arg4 rotationY:(float)arg5 rotationZ:(float)arg6 context:(id)arg7 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(float)rotationX;
-(float)rotationY;
-(float)rotationZ;
@end

