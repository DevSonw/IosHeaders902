/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:47:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIImageProcessorOutput : NSObject {

	void* _priv;

}

@property (nonatomic,readonly) CGRect region; 
@property (nonatomic,readonly) unsigned long bytesPerRow; 
@property (nonatomic,readonly) int format; 
-(id)initWithSurface:(IOSurfaceRef)arg1 texture:(Texture*)arg2 bounds:(CGRect)arg3 context:(Context*)arg4 ;
-(void*)getBaseAddress;
-(id)metalCommandBuffer;
-(unsigned long)bytesPerRow;
-(int)format;
-(id)metalTexture;
-(void)dealloc;
-(CGRect)region;
-(IOSurfaceRef)surface;
@end

