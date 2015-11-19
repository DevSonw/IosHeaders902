/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAnimationPath.h>

@class NSString;

@interface MCAnimationPathExpression : MCAnimationPath {

	NSString* mExpression;

}

@property (copy) NSString * expression; 
+(id)animationPathWithKey:(id)arg1 andExpression:(id)arg2 ;
-(void)demolish;
-(id)initWithImprint:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(NSString *)expression;
-(id)imprint;
-(void)setExpression:(NSString *)arg1 ;
@end
