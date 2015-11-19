/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFContinuityScanManagerObserver.h>

@protocol SFActivityScannerDelegate;
@class NSUUID, NSString;

@interface SFActivityScanner : NSObject <SFContinuityScanManagerObserver> {

	char _receiving;
	id<SFActivityScannerDelegate> _delegate;
	NSUUID* _identifier;

}

@property (assign) id<SFActivityScannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) char receiving;                                      //@synthesize receiving=_receiving - In the implementation block
@property (retain) NSUUID * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SFActivityScannerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SFActivityScannerDelegate>)delegate;
-(NSUUID *)identifier;
-(void)stop;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)start;
-(void)setForceScanningEnabled:(char)arg1 ;
-(void)scanManager:(id)arg1 receivedAdvertisement:(id)arg2 ;
-(void)scanManager:(id)arg1 foundDeviceWithDevice:(id)arg2 ;
-(void)scanManager:(id)arg1 lostDeviceWithDevice:(id)arg2 ;
-(void)activityPayloadFromDevice:(id)arg1 forAdvertisementPayload:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)receiving;
-(void)setReceiving:(char)arg1 ;
@end
