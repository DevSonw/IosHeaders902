/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iaptransportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iaptransportd/iaptransportd-Structs.h>
@class NSThread;

@interface USBHostHelper : NSObject {

	NSThread* _runLoopThread;
	CIapPortUSBHost* _usbHostPort;

}

@property (assign,nonatomic) CIapPortUSBHost* usbHostPort;              //@synthesize usbHostPort=_usbHostPort - In the implementation block
-(CIapPortUSBHost*)usbHostPort;
-(void)setUsbHostPort:(CIapPortUSBHost*)arg1 ;
-(void)_run;
-(void)start;
@end
