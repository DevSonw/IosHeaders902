/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface UIKBKeyDisplayContents : NSObject {

	char _fillPath;
	char _force1xImages;
	char _stringKeycapOverImage;
	char _flipImageHorizontally;
	NSString* _displayString;
	NSString* _displayStringImage;
	NSArray* _secondaryDisplayStrings;
	NSArray* _secondaryDisplayStringImages;
	NSArray* _variantDisplayContents;
	NSArray* _highlightedVariantsList;
	int _displayPathType;
	UIKBKeyDisplayContents* _fallbackContents;

}

@property (nonatomic,retain) NSString * displayString;                               //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,retain) NSString * displayStringImage;                          //@synthesize displayStringImage=_displayStringImage - In the implementation block
@property (nonatomic,retain) NSArray * secondaryDisplayStrings;                      //@synthesize secondaryDisplayStrings=_secondaryDisplayStrings - In the implementation block
@property (nonatomic,retain) NSArray * secondaryDisplayStringImages;                 //@synthesize secondaryDisplayStringImages=_secondaryDisplayStringImages - In the implementation block
@property (nonatomic,retain) NSArray * variantDisplayContents;                       //@synthesize variantDisplayContents=_variantDisplayContents - In the implementation block
@property (nonatomic,retain) NSArray * highlightedVariantsList;                      //@synthesize highlightedVariantsList=_highlightedVariantsList - In the implementation block
@property (assign,nonatomic) int displayPathType;                                    //@synthesize displayPathType=_displayPathType - In the implementation block
@property (assign,nonatomic) char fillPath;                                          //@synthesize fillPath=_fillPath - In the implementation block
@property (assign,nonatomic) char force1xImages;                                     //@synthesize force1xImages=_force1xImages - In the implementation block
@property (assign,nonatomic) char stringKeycapOverImage;                             //@synthesize stringKeycapOverImage=_stringKeycapOverImage - In the implementation block
@property (assign,nonatomic) char flipImageHorizontally;                             //@synthesize flipImageHorizontally=_flipImageHorizontally - In the implementation block
@property (nonatomic,retain) UIKBKeyDisplayContents * fallbackContents;              //@synthesize fallbackContents=_fallbackContents - In the implementation block
+(id)displayContents;
-(void)dealloc;
-(id)description;
-(void)setDisplayString:(NSString *)arg1 ;
-(NSString *)displayString;
-(void)setVariantDisplayContents:(NSArray *)arg1 ;
-(void)setSecondaryDisplayStrings:(NSArray *)arg1 ;
-(void)setHighlightedVariantsList:(NSArray *)arg1 ;
-(NSArray *)secondaryDisplayStrings;
-(void)setDisplayPathType:(int)arg1 ;
-(NSArray *)highlightedVariantsList;
-(NSString *)displayStringImage;
-(void)setForce1xImages:(char)arg1 ;
-(NSArray *)secondaryDisplayStringImages;
-(NSArray *)variantDisplayContents;
-(int)displayPathType;
-(char)fillPath;
-(char)force1xImages;
-(UIKBKeyDisplayContents *)fallbackContents;
-(char)stringKeycapOverImage;
-(char)flipImageHorizontally;
-(void)setDisplayStringImage:(NSString *)arg1 ;
-(void)setSecondaryDisplayStringImages:(NSArray *)arg1 ;
-(void)setFillPath:(char)arg1 ;
-(void)setFallbackContents:(UIKBKeyDisplayContents *)arg1 ;
-(void)setStringKeycapOverImage:(char)arg1 ;
-(void)setFlipImageHorizontally:(char)arg1 ;
@end
