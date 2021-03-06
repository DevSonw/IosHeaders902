/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class DeviceManager, NSString;

@interface ICDeviceProperties : NSObject {

	id _delegate;
	DeviceManager* _deviceManager;
	NSString* _name;
	CGImageRef _icon;
	NSString* _productKind;
	NSString* _transportType;
	NSString* _UUIDString;
	int _usbLocationID;
	int _usbProductID;
	int _usbVendorID;
	char _hasOpenSession;
	char _autoOpenSession;
	char _openSessionPending;
	char _closeSessionPending;

}

@property (assign) id delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign) DeviceManager * deviceManager;              //@synthesize deviceManager=_deviceManager - In the implementation block
@property (retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (assign) CGImageRef icon; 
@property (retain) NSString * productKind;                     //@synthesize productKind=_productKind - In the implementation block
@property (retain) NSString * transportType;                   //@synthesize transportType=_transportType - In the implementation block
@property (retain) NSString * UUIDString;                      //@synthesize UUIDString=_UUIDString - In the implementation block
@property (assign) int usbLocationID;                          //@synthesize usbLocationID=_usbLocationID - In the implementation block
@property (assign) int usbProductID;                           //@synthesize usbProductID=_usbProductID - In the implementation block
@property (assign) int usbVendorID;                            //@synthesize usbVendorID=_usbVendorID - In the implementation block
@property (assign) char hasOpenSession;                        //@synthesize hasOpenSession=_hasOpenSession - In the implementation block
@property (assign) char autoOpenSession;                       //@synthesize autoOpenSession=_autoOpenSession - In the implementation block
@property (assign) char openSessionPending;                    //@synthesize openSessionPending=_openSessionPending - In the implementation block
@property (assign) char closeSessionPending;                   //@synthesize closeSessionPending=_closeSessionPending - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)UUIDString;
-(void)setIcon:(CGImageRef)arg1 ;
-(CGImageRef)icon;
-(void)setTransportType:(NSString *)arg1 ;
-(NSString *)transportType;
-(DeviceManager *)deviceManager;
-(void)setDeviceManager:(DeviceManager *)arg1 ;
-(void)setProductKind:(NSString *)arg1 ;
-(void)setUUIDString:(NSString *)arg1 ;
-(int)usbLocationID;
-(void)setUsbLocationID:(int)arg1 ;
-(int)usbProductID;
-(void)setUsbProductID:(int)arg1 ;
-(void)setUsbVendorID:(int)arg1 ;
-(char)hasOpenSession;
-(void)setHasOpenSession:(char)arg1 ;
-(char)autoOpenSession;
-(void)setAutoOpenSession:(char)arg1 ;
-(char)openSessionPending;
-(void)setOpenSessionPending:(char)arg1 ;
-(char)closeSessionPending;
-(void)setCloseSessionPending:(char)arg1 ;
-(void)finalize;
-(int)usbVendorID;
-(NSString *)productKind;
@end

