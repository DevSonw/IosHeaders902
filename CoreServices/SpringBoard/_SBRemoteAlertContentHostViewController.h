/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SBSUIRemoteAlertItemContentHostInterface.h>

@class NSString;

@interface _SBRemoteAlertContentHostViewController : _UIRemoteViewController <SBSUIRemoteAlertItemContentHostInterface> {

	id _delegate;
	NSString* _serviceClassName;
	char _serviceHasSetPreferredContentSize;

}

@property (assign,nonatomic) id delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * serviceClassName;              //@synthesize serviceClassName=_serviceClassName - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(NSString *)serviceClassName;
-(void)_getPreferredContentSizeWithReplyBlock:(/*^block*/id)arg1 ;
-(void)setServiceClassName:(NSString *)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end
