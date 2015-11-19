/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSObject;

@interface BLTObjectCacheItem : NSObject {

	NSObject* _object;
	double _lastAccessedDate;

}

@property (nonatomic,readonly) NSObject * object;                    //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) double lastAccessedDate;              //@synthesize lastAccessedDate=_lastAccessedDate - In the implementation block
+(id)cacheItemWithObject:(id)arg1 ;
-(id)description;
-(NSObject *)object;
-(void)touch;
-(id)initWithObject:(id)arg1 ;
-(double)lastAccessedDate;
@end
