/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RUIElement.h>

@protocol RUIAlertViewDelegate;
@class UIAlertController, RUIObjectModel, NSString;

@interface RUIAlertView : RUIElement {

	UIAlertController* _alertController;
	RUIObjectModel*<RUIAlertViewDelegate> _objectModel;
	NSString* _title;
	NSString* _message;
	int _buttonIndex;
	/*^block*/id _completion;

}

@property (assign,nonatomic,__weak) RUIObjectModel*<RUIAlertViewDelegate> objectModel;              //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,retain) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                                                    //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) int buttonIndex;                                                     //@synthesize buttonIndex=_buttonIndex - In the implementation block
@property (nonatomic,copy) id completion;                                                           //@synthesize completion=_completion - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)alertController;
-(RUIObjectModel*<RUIAlertViewDelegate>)objectModel;
-(void)setObjectModel:(RUIObjectModel*<RUIAlertViewDelegate>)arg1 ;
-(void)runAlertInController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addButtonWithTitle:(id)arg1 URL:(id)arg2 destructive:(char)arg3 attributes:(id)arg4 ;
-(void)setCancelButtonTitle:(id)arg1 ;
-(int)buttonIndex;
@end

