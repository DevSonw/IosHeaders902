/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@class UIBezierPath, UIFont, NSString;

@interface SCNText : SCNGeometry {

	float _flatness;
	float _chamferRadius;
	float _extrusionDepth;
	float _discretizedStraightLineMaxLength;
	UIBezierPath* _chamferProfile;
	int _primitiveType;
	id _string;
	UIFont* _font;
	char _wrapped;
	long _alignmentMode;
	long _truncationMode;
	char _useCustomContainerFrame;
	CGRect _customContainerFrame;
	char __wantsSeparateGeometryElements;

}

@property (assign,nonatomic) float extrusionDepth; 
@property (nonatomic,copy) id string; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,getter=isWrapped,nonatomic) char wrapped; 
@property (assign,nonatomic) CGRect containerFrame; 
@property (nonatomic,copy) NSString * truncationMode; 
@property (nonatomic,copy) NSString * alignmentMode; 
@property (assign,nonatomic) float chamferRadius; 
@property (nonatomic,copy) UIBezierPath * chamferProfile; 
@property (assign,nonatomic) float flatness; 
+(id)text;
+(char)supportsSecureCoding;
+(id)textWithString:(id)arg1 extrusionDepth:(float)arg2 ;
-(int)primitiveType;
-(void)setPrimitiveType:(int)arg1 ;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(id)presentationGeometry;
-(char)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(float*)arg2 ;
-(_C3DGeometry*)__createCFObject;
-(void)_syncObjCModel:(_C3DTextGeometry*)arg1 ;
-(UIBezierPath *)chamferProfile;
-(void)setChamferProfile:(UIBezierPath *)arg1 ;
-(id)initPresentationTextGeometryWithTextGeometryRef:(_C3DTextGeometry*)arg1 ;
-(id)initWithTextGeometryRef:(_C3DTextGeometry*)arg1 ;
-(SCD_Struct_SC90*)params;
-(void)_customEncodingOfSCNText:(id)arg1 ;
-(void)_customDecodingOfSCNText:(id)arg1 ;
-(void)setDiscretizedStraightLineMaxLength:(float)arg1 ;
-(void)set_wantsSeparateGeometryElements:(char)arg1 ;
-(char)_wantsSeparateGeometryElements;
-(float)discretizedStraightLineMaxLength;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)flatness;
-(void)setFlatness:(float)arg1 ;
-(id)string;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setString:(id)arg1 ;
-(void)setAlignmentMode:(NSString *)arg1 ;
-(char)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(char)isWrapped;
-(void)setWrapped:(char)arg1 ;
-(NSString *)truncationMode;
-(void)setTruncationMode:(NSString *)arg1 ;
-(CGRect)containerFrame;
-(void)setContainerFrame:(CGRect)arg1 ;
-(NSString *)alignmentMode;
-(float)extrusionDepth;
-(void)setExtrusionDepth:(float)arg1 ;
-(float)chamferRadius;
-(void)setChamferRadius:(float)arg1 ;
@end
