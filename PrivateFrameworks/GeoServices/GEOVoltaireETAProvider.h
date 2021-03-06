/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOETAProvider.h>
#import <libobjc.A.dylib/PBRequesterDelegate.h>

@class GEORequester, NSString;

@interface GEOVoltaireETAProvider : GEOETAProvider <PBRequesterDelegate> {

	GEORequester* _requester;
	/*^block*/id _errorHandler;
	/*^block*/id _finishedHandler;
	/*^block*/id _willSendRequestHandler;
	/*^block*/id _simpleETARequestFinishedHandler;
	char _cancelled;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)cancelRequest;
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterWillSendRequestForEstablishedConnection:(id)arg1 ;
-(void)updateRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)startSimpleETARequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)startRequest:(id)arg1 connectionProperties:(const SCD_Struct_GE130*)arg2 willSendRequest:(/*^block*/id)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
@end

