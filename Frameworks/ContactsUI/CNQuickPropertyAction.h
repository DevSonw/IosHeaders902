/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:44:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNQuickContactAction.h>

@class CNPropertyAction;

@interface CNQuickPropertyAction : CNQuickContactAction

@property (nonatomic,readonly) CNPropertyAction * propertyAction; 
-(CNPropertyAction *)propertyAction;
-(id)propertyItem;
-(id)initWithPropertyAction:(id)arg1 ;
-(id)_coreDuetValue;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)titleForContext:(int)arg1 ;
-(id)subtitleForContext:(int)arg1 ;
-(unsigned)score;
-(char)enabled;
-(id)identifier;
@end
