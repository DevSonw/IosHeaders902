/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKViewVolume : NSObject {

	VKPoint _corners[8];

}

@property (nonatomic,readonly) const VKPoint* corners; 
-(const VKPoint*)corners;
-(void)updateWithFrustum:(SCD_Struct_VK7)arg1 matrix:(const SCD_Struct_VK6*)arg2 ;
-(VKPoint)lerpPoint:(float*)arg1 ;
@end

