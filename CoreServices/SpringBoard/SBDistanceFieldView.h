/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class NSString;

@interface SBDistanceFieldView : UIView

@property (nonatomic,copy) NSString * renderMode; 
@property (assign) char invertsShape; 
@property (assign) CGColorRef foregroundColor; 
@property (assign) float offset; 
@property (assign) float sharpness; 
@property (assign) float lineWidth; 
+(Class)layerClass;
-(void)setRenderMode:(NSString *)arg1 ;
-(float)sharpness;
-(char)invertsShape;
-(void)setInvertsShape:(char)arg1 ;
-(void)setSharpness:(float)arg1 ;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setOffset:(float)arg1 ;
-(float)offset;
-(CGColorRef)foregroundColor;
-(void)setForegroundColor:(CGColorRef)arg1 ;
-(NSString *)renderMode;
@end

