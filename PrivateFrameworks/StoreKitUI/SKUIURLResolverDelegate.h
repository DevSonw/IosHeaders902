/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUIURLResolverDelegate <NSObject>
@optional
-(char)URLResolver:(id)arg1 shouldPerformDefaultActionForURL:(id)arg2;
-(void)URLResolver:(id)arg1 didFinishWithResult:(char)arg2;

@required
-(id)presentationViewControllerForURLResolver:(id)arg1;
-(void)URLResolver:(id)arg1 showURL:(id)arg2 withTabIdentifier:(id)arg3;
-(void)URLResolver:(id)arg1 showTransientViewController:(id)arg2;

@end

