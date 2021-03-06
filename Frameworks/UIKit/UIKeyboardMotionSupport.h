/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIScreenBasedObject.h>

@protocol UISplitKeyboardSource;
@class UIScreen, NSDictionary, NSString;

@interface UIKeyboardMotionSupport : NSObject <_UIScreenBasedObject> {

	UIScreen* _screen;
	id<UISplitKeyboardSource> _controller;

}

@property (assign,nonatomic) id<UISplitKeyboardSource> masterController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) NSDictionary * _options; 
+(id)supportForScreen:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)_options;
-(void)_disconnectingController:(id)arg1 ;
-(void)_connectController:(id)arg1 ;
-(id)_initWithScreen:(id)arg1 options:(id)arg2 ;
-(char)_matchingOptions:(id)arg1 ;
-(UIScreen *)_intendedScreen;
-(id<UISplitKeyboardSource>)masterController;
-(void)setMasterController:(id<UISplitKeyboardSource>)arg1 ;
@end

