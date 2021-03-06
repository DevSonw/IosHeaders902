/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:47:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIDroste : CIFilter {

	CIImage* inputImage;
	CIVector* inputInsetPoint0;
	CIVector* inputInsetPoint1;
	NSNumber* inputStrands;
	NSNumber* inputPeriodicity;
	NSNumber* inputRotation;
	NSNumber* inputZoom;

}
+(id)customAttributes;
-(id)_CIDroste;
-(id)outputImage;
@end

