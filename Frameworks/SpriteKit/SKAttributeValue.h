/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:53 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SKAttributeValue : NSObject {

	int _type;
	float floatValues[4];
	unsigned short halfFloatValues[4];

}

@property (assign,nonatomic) float floatValue; 
@property (assign,nonatomic)  vectorFloat2Value; 
@property (assign,nonatomic)  vectorFloat3Value; 
@property (assign,nonatomic)  vectorFloat4Value; 
@property (nonatomic,readonly) int type;                      //@synthesize type=_type - In the implementation block
+(id)valueWithFloat:(float)arg1 ;
+(id)valueWithVectorFloat2:;
+(id)valueWithVectorFloat3:;
+(id)valueWithVectorFloat4:;
-(char)copyValueTo:(void*)arg1 type:(int)arg2 count:(unsigned)arg3 ;
-(void)setFloatValue:(float)arg1 ;
-(void)setVectorFloat2Value:;
-(void)setVectorFloat3Value:;
-(void)setVectorFloat4Value:;
-()vectorFloat2Value;
-()vectorFloat3Value;
-()vectorFloat4Value;
-(id)init;
-(int)type;
-(float)floatValue;
@end
