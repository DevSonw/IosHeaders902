/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:34:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSUnaryImageKernel.h>

@interface MPSImageAreaMax : MPSUnaryImageKernel {

	unsigned _kernelWidth;
	unsigned _kernelHeight;
	const MaxFilterInfo* info;
	const MaxFilterInfo* info_half;
	MPSKey_data* keys;
	MPSKey_data* keys_half;

}

@property (nonatomic,readonly) unsigned kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (nonatomic,readonly) unsigned kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned)arg2 kernelHeight:(unsigned)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(SCD_Struct_MP4)sourceRegionForDestinationSize:(SCD_Struct_MP8)arg1 ;
-(long)encodeWithComputeEncoder:(id)arg1 commandBuffer:(id)arg2 sourceTexture:(id)arg3 destinationTexture:(id)arg4 callInfo:(const SCD_Struct_MP10*)arg5 ;
-(unsigned)kernelHeight;
-(unsigned)kernelWidth;
-(id)debugDescription;
-(id)initWithDevice:(id)arg1 ;
@end
