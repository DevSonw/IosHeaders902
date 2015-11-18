/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface UIAccessibilityCustomAction : NSObject {

	NSString* _name;
	id _target;
	SEL _selector;

}

@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) id target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                  //@synthesize selector=_selector - In the implementation block
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)target;
-(SEL)selector;
@end
