/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:06 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, FTMessageDelivery;

@interface FTRegionSupport : NSObject {

	NSArray* _regions;
	FTMessageDelivery* _delivery;

}

@property (readonly) char isLoaded; 
@property (readonly) char isLoading; 
@property (readonly) NSArray * regions; 
@property (retain) FTMessageDelivery * _delivery;              //@synthesize delivery=_delivery - In the implementation block
@property (retain) NSArray * _regions;                         //@synthesize regions=_regions - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(char)isLoading;
-(char)isLoaded;
-(id)regionForID:(id)arg1 ;
-(void)_buildMessageDeliveryIfNeeded;
-(void)flushRegions;
-(NSArray *)_regions;
-(void)set_regions:(NSArray *)arg1 ;
-(FTMessageDelivery *)_delivery;
-(void)set_delivery:(FTMessageDelivery *)arg1 ;
-(NSArray *)regions;
-(void)startLoading;
@end

