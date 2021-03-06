/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSString, NSSet, NSNumber;

@interface PLRevGeoPlaceInfo : NSObject {

	NSMutableSet* _geoPlaceInfos;
	NSString* _placeName;

}

@property (nonatomic,copy,readonly) NSString * placeName;                  //@synthesize placeName=_placeName - In the implementation block
@property (nonatomic,retain,readonly) NSSet * geoPlaceInfos;               //@synthesize geoPlaceInfos=_geoPlaceInfos - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * minimumArea; 
-(void)dealloc;
-(NSString *)placeName;
-(NSNumber *)minimumArea;
-(NSSet *)geoPlaceInfos;
-(id)initWithPlaceName:(id)arg1 ;
-(void)addPlaceInfo:(id)arg1 ;
@end

