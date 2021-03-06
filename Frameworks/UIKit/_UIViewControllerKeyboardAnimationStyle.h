/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInputViewAnimationStyleDirectional.h>

@class _UIViewControllerTransitionContext, _UIViewControllerKeyboardAnimationStyleInfo;

@interface _UIViewControllerKeyboardAnimationStyle : UIInputViewAnimationStyleDirectional {

	char _disableAlongsideView;
	char _allowCustomTransition;
	_UIViewControllerTransitionContext* _context;
	_UIViewControllerKeyboardAnimationStyleInfo* _info;

}

@property (nonatomic,readonly) _UIViewControllerTransitionContext * context;                    //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) char disableAlongsideView;                                         //@synthesize disableAlongsideView=_disableAlongsideView - In the implementation block
@property (nonatomic,readonly) _UIViewControllerKeyboardAnimationStyleInfo * info;              //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) char allowCustomTransition;                                        //@synthesize allowCustomTransition=_allowCustomTransition - In the implementation block
+(id)animationStyleWithContext:(id)arg1 useCustomTransition:(char)arg2 ;
+(id)animationStyleWithContext:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UIViewControllerTransitionContext *)context;
-(void)setDisableAlongsideView:(char)arg1 ;
-(_UIViewControllerKeyboardAnimationStyleInfo *)info;
-(id)initWithContext:(id)arg1 ;
-(void)setAllowCustomTransition:(char)arg1 ;
-(char)disableAlongsideView;
-(void)launchAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 forHost:(id)arg4 fromCurrentPosition:(char)arg5 ;
-(char)allowCustomTransition;
-(id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2 ;
-(char)isAnimationCompleted;
-(char)canDismissWithScrollView;
@end

