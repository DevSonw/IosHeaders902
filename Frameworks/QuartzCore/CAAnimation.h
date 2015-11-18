/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:45:34 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/CAPropertyInfo.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CAMediaTiming.h>
#import <libobjc.A.dylib/CAAction.h>

@class NSString, CAStateControllerTransition, CAMediaTimingFunction;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction> {

	void* _attr;
	unsigned _flags;

}

@property (__weak) CAStateControllerTransition * CAStateControllerTransition; 
@property (getter=isEnabled) char enabled; 
@property (copy) NSString * beginTimeMode; 
@property (assign) double frameInterval; 
@property (retain) CAMediaTimingFunction * timingFunction; 
@property (retain) id delegate; 
@property (getter=isRemovedOnCompletion) char removedOnCompletion; 
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) char autoreverses; 
@property (copy) NSString * fillMode; 
+(char)resolveInstanceMethod:(SEL)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(char)CA_encodesPropertyConditionally:(unsigned)arg1 type:(int)arg2 ;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(id)animation;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)properties;
-(char)autoreverses;
-(NSString *)fillMode;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(char)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(char)shouldArchiveValueForKey:(id)arg1 ;
-(char)removedOnCompletion;
-(NSString *)beginTimeMode;
-(char)isRemovedOnCompletion;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(id)delegate;
-(void)setSpeed:(float)arg1 ;
-(double)duration;
-(CAMediaTimingFunction *)timingFunction;
-(void)setDuration:(double)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)speed;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3 ;
-(float)repeatCount;
-(void)setFrameInterval:(double)arg1 ;
-(void)setFillMode:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setBeginTime:(double)arg1 ;
-(void)setBeginTimeMode:(NSString *)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)setAutoreverses:(char)arg1 ;
-(double)beginTime;
-(void)setRemovedOnCompletion:(char)arg1 ;
-(double)frameInterval;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(double)repeatDuration;
-(void)setRepeatDuration:(double)arg1 ;
-(void)setDefaultDuration:(double)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end
