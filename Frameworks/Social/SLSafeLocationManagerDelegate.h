/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:37 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol CLLocationManagerDelegate;
@class NSString;

@interface SLSafeLocationManagerDelegate : NSObject <CLLocationManagerDelegate> {

	id<CLLocationManagerDelegate> _delegate;

}

@property (__weak) id<CLLocationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(id<CLLocationManagerDelegate>)delegate;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end
