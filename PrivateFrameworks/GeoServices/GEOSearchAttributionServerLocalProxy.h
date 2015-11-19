/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOSearchAttributionServerProxy.h>

@class NSMapTable, NSMutableArray, GEOSearchAttributionManifest, NSLock, NSString;

@interface GEOSearchAttributionServerLocalProxy : NSObject <GEOSearchAttributionServerProxy> {

	NSMapTable* _listeners;
	char _updatingManifest;
	NSMutableArray* _updateManifestCompletionHandlers;
	NSMutableArray* _updateManifestErrorHandlers;
	GEOSearchAttributionManifest* _attributionManifest;
	NSLock* _attributionManifestLock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)_sendInfo:(id)arg1 updatedManifest:(char)arg2 toListener:(id)arg3 ;
-(void)_loadAttributionInfoForListener:(id)arg1 hasUpdatedManifest:(char)arg2 ;
-(void)_sendError:(id)arg1 toListener:(id)arg2 ;
-(void)_updateManifestWithCompletionHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_pruneOldAttributionLogos;
-(id)_attributionManifest;
@end
