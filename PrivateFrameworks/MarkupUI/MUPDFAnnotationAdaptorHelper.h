/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:06 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MarkupUI/MarkupUI-Structs.h>
@interface MUPDFAnnotationAdaptorHelper : NSObject
+(id)newAKAnnotationFromAnnotationDictionary:(CGPDFDictionaryRef)arg1 ;
+(void)migrateAKStrokedAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(CGPDFDictionaryRef)arg2 ofPDFPage:(CGPDFPageRef)arg3 ;
+(void)migrateAKTextAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(CGPDFDictionaryRef)arg2 ofPDFPage:(CGPDFPageRef)arg3 ;
+(void)addBoundsOfAnnotation:(id)arg1 toDictionary:(id)arg2 ;
+(void)addModificationDateOfAnnotation:(id)arg1 toDictionary:(id)arg2 ;
+(void)addFlagsOfAnnotation:(id)arg1 toDictionary:(id)arg2 ;
+(void)addContentsStringOfAnnotation:(id)arg1 toDictionary:(id)arg2 ;
+(void)addBorderStyleOfAnnotation:(id)arg1 toDictionary:(id)arg2 ;
+(void)addRGBColor:(id)arg1 forKey:(id)arg2 toDictionary:(id)arg3 ;
+(void)addTextLabelOfAnnotation:(id)arg1 toDictionary:(id)arg2 ;
+(void)addPopupOfAnnotation:(id)arg1 toDictionary:(id)arg2 ;
+(void)addAppearanceStreamOfAnnotation:(id)arg1 toDictionary:(id)arg2 ;
+(void)addAKAnnotation:(id)arg1 toAnnotationDictionary:(CFDictionaryRef)arg2 ;
+(id)_colorFromPDFArray:(CGPDFArrayRef)arg1 ;
+(id)getFontFromAppearanceString:(CGPDFStringRef)arg1 ofPDFPage:(CGPDFPageRef)arg2 ;
+(id)getColorFromAppearanceString:(CGPDFStringRef)arg1 ;
+(char)_shouldUseAKAnnotation:(id)arg1 toRepresentPDFAnnotationDictionary:(CGPDFDictionaryRef)arg2 ;
+(id)tokenizeAppearanceString:(id)arg1 ;
+(float)pointSizeFromAppearanceTokens:(id)arg1 ;
+(id)fontNameFromAppearanceTokens:(id)arg1 ;
+(id)colorFromAppearanceTokens:(id)arg1 ;
+(void)migrateAKFilledAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(CGPDFDictionaryRef)arg2 ofPDFPage:(CGPDFPageRef)arg3 ;
+(void)migrateAKRectangularShapeAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(CGPDFDictionaryRef)arg2 ofPDFPage:(CGPDFPageRef)arg3 ;
+(void)addDefaultAppearanceStreamOfAnnotation:(id)arg1 toDictionary:(id)arg2 ;
+(void)addQuaddingOfAnnotation:(id)arg1 toDictionary:(id)arg2 ;
@end

