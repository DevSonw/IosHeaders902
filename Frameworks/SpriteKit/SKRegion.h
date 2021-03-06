/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:53 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class PKRegion;

@interface SKRegion : NSObject <NSCopying, NSCoding> {

	PKRegion* _region;

}

@property (nonatomic,readonly) const CGPathRef path; 
+(id)infiniteRegion;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(const CGPathRef)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)containsPoint:(CGPoint)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(id)initWithRadius:(float)arg1 ;
-(id)initWithPath:(CGPathRef)arg1 ;
-(id)inverseRegion;
-(id)regionByUnionWithRegion:(id)arg1 ;
-(id)regionByDifferenceFromRegion:(id)arg1 ;
-(id)regionByIntersectionWithRegion:(id)arg1 ;
-(void)containsPoints:(const float*)arg1 locationStride:(int)arg2 results:(char*)arg3 resultsStride:(int)arg4 count:(int)arg5 ;
@end

