/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDevice.h>
@class NSString, NSNumber;


@protocol IKJSDevice <JSExport>
@property (nonatomic,readonly) NSString * vendorIdentifier; 
@property (nonatomic,readonly) NSString * advertisingIdentifier; 
@property (nonatomic,readonly) char isAdvertisingTrackingEnabled; 
@property (nonatomic,readonly) NSString * appVersion; 
@property (nonatomic,readonly) NSString * appIdentifier; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * productType; 
@property (nonatomic,readonly) char isInRetailDemoMode; 
@property (nonatomic,readonly) NSString * vendorID; 
@property (nonatomic,readonly) NSNumber * pixelRatio; 
@required
-(NSString *)systemVersion;
-(NSString *)model;
-(NSString *)appIdentifier;
-(NSString *)productType;
-(NSString *)advertisingIdentifier;
-(char)isAdvertisingTrackingEnabled;
-(id)capacity:(id)arg1;
-(char)isInRetailDemoMode;
-(NSString *)vendorID;
-(NSString *)appVersion;
-(NSString *)vendorIdentifier;
-(NSNumber *)pixelRatio;

@end

#import <libobjc.A.dylib/JSExport.h>

@protocol IKAppDeviceConfig;
@class NSString, NSNumber;

@interface IKJSDevice : IKJSObject <IKJSDevice, JSExport> {

	id _isNetworkTypeChangedToken;
	id<IKAppDeviceConfig> _deviceConfig;

}

@property (assign,nonatomic,__weak) id<IKAppDeviceConfig> deviceConfig;              //@synthesize deviceConfig=_deviceConfig - In the implementation block
@property (nonatomic,readonly) NSString * vendorIdentifier; 
@property (nonatomic,readonly) NSString * advertisingIdentifier; 
@property (nonatomic,readonly) char isAdvertisingTrackingEnabled; 
@property (nonatomic,readonly) NSString * appVersion; 
@property (nonatomic,readonly) NSString * appIdentifier; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * productType; 
@property (nonatomic,readonly) char isInRetailDemoMode; 
@property (nonatomic,readonly) NSString * vendorID; 
@property (nonatomic,readonly) NSNumber * pixelRatio; 
+(id)getMobileGestaltString:(CFStringRef)arg1 ;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(NSString *)systemVersion;
-(NSString *)model;
-(id<IKAppDeviceConfig>)deviceConfig;
-(void)setDeviceConfig:(id<IKAppDeviceConfig>)arg1 ;
-(NSString *)appIdentifier;
-(NSString *)productType;
-(id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2 ;
-(NSString *)advertisingIdentifier;
-(char)isAdvertisingTrackingEnabled;
-(id)capacity:(id)arg1 ;
-(char)isInRetailDemoMode;
-(NSString *)vendorID;
-(NSString *)appVersion;
-(NSString *)vendorIdentifier;
-(NSNumber *)pixelRatio;
@end
