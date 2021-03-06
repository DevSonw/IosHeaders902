/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOURLConnectionSession;

@interface GEOURLSessionConnection : NSObject {

	CFURLConnectionRef _cfConnection;
	id _delegate;
	GEOURLConnectionSession* _connectionSession;

}
-(void)cancel;
-(void)dealloc;
-(void)connectionDidTerminate;
-(void)connectionDidFailWithError:(id)arg1 ;
-(void)connectionDidFinishLoading;
-(id)initWithCFRequest:(CFURLRequestRef)arg1 delegate:(id)arg2 usingSession:(id)arg3 ;
-(void)connectionDidReceiveResponse:(CFURLResponseRef)arg1 ;
-(void)connectionDidReceiveData:(id)arg1 ;
@end

