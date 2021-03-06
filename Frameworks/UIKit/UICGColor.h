/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIColor.h>

@interface UICGColor : UIColor {

	CGColorRef cachedColor;

}
-(CGColorRef)CGColor;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)colorWithAlphaComponent:(float)arg1 ;
-(char)getWhite:(float*)arg1 alpha:(float*)arg2 ;
-(void)set;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4 ;
-(void)setFill;
-(float)alphaComponent;
-(void)setStroke;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)colorSpaceName;
-(char)isPatternColor;
@end

