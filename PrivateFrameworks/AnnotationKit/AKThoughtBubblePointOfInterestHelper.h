/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKEightPointRectangularPointOfInterestHelper.h>

@interface AKThoughtBubblePointOfInterestHelper : AKEightPointRectangularPointOfInterestHelper
+(void)_concretePointsOfInterest:(id*)arg1 withVisualStyle:(id*)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4 ;
+(unsigned)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3 ;
+(CGPoint)_concreteValidatePoint:(CGPoint)arg1 ofDraggableArea:(unsigned)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4 ;
+(float)minOutset;
+(float)maxOutset;
+(CGPoint)_constrainPointyPointToOutset:(CGPoint)arg1 forAnnotation:(id)arg2 outsetIsMin:(char)arg3 ;
@end

