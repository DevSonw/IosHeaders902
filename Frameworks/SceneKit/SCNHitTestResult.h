/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNNode;

@interface SCNHitTestResult : NSObject {

	C3DHitTestResultRef _result;

}

@property (nonatomic,readonly) SCNNode * node; 
@property (nonatomic,readonly) int geometryIndex; 
@property (nonatomic,readonly) int faceIndex; 
@property (nonatomic,readonly) SCNVector3 localCoordinates; 
@property (nonatomic,readonly) SCNVector3 worldCoordinates; 
@property (nonatomic,readonly) SCNVector3 localNormal; 
@property (nonatomic,readonly) SCNVector3 worldNormal; 
@property (nonatomic,readonly) SCNMatrix4 modelTransform; 
+(id)hitTestResultsFromHitTestResultRef:(CFArrayRef)arg1 ;
-(id)initWithResult:(C3DHitTestResultRef)arg1 ;
-(CGPoint)textureCoordinatesWithMappingChannel:(int)arg1 ;
-(int)geometryIndex;
-(int)faceIndex;
-(SCNVector3)localCoordinates;
-(SCNVector3)worldCoordinates;
-(SCNVector3)localNormal;
-(SCNVector3)worldNormal;
-(CGPoint)textureCoordinate;
-(SCNMatrix4)modelTransform;
-(void)dealloc;
-(id)description;
-(SCNNode *)node;
@end
