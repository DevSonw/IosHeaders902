/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:32:47 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class NSMutableArray, NSString;

@interface MFMailPopoverManager : NSObject <UIAdaptivePresentationControllerDelegate> {

	NSMutableArray* _passThroughProviders;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)managerForWindow:(id)arg1 createIfNeeded:(char)arg2 ;
+(void)enumerateManagersUsingBlock:(/*^block*/id)arg1 ;
-(void)addPassthroughViewProvider:(id)arg1 ;
-(void)removePassthroughViewProvider:(id)arg1 ;
-(id)allPassThroughViews;
-(void)dealloc;
-(id)init;
-(id)_init;
@end

