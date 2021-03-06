/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:51:38 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WebGeolocationCoreLocationUpdateListener.h>

@interface WKGeolocationProviderIOS : NSObject <WebGeolocationCoreLocationUpdateListener> {

	RefPtr<WebKit::WebGeolocationManagerProxy>* _geolocationManager;
	RetainPtr<WebGeolocationCoreLocationProvider>* _coreLocationProvider;
	char _isWebCoreGeolocationActive;
	RefPtr<WebKit::WebGeolocationPosition>* _lastActivePosition;
	Vector<GeolocationRequestData, 0, WTF::CrashOnOverflow, 16>* _requestsWaitingForCoreLocationAuthorization;

}
-(id)init;
-(void)decidePolicyForGeolocationRequestFromOrigin:(SecurityOrigin*)arg1 frame:(WebFrameProxy*)arg2 request:(GeolocationPermissionRequestProxy*)arg3 view:(id)arg4 ;
-(void)_setEnableHighAccuracy:(char)arg1 ;
-(id)initWithProcessPool:(WebProcessPool*)arg1 ;
-(void)_stopUpdating;
-(void)_startUpdating;
-(void)resetGeolocation;
-(void)geolocationAuthorizationGranted;
-(void)geolocationAuthorizationDenied;
-(void)positionChanged:(GeolocationPosition*)arg1 ;
-(void)errorOccurred:(id)arg1 ;
@end

