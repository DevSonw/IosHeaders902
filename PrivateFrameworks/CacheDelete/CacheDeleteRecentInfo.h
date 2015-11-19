/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface CacheDeleteRecentInfo : NSObject <NSSecureCoding> {

	NSMutableDictionary* _volumes;

}

@property (nonatomic,retain) NSMutableDictionary * volumes;              //@synthesize volumes=_volumes - In the implementation block
+(char)supportsSecureCoding;
+(id)cacheDeleteRecentInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)validate:(double)arg1 threshold:(id)arg2 ;
-(id)initWithVolumes:(id)arg1 ;
-(NSMutableDictionary *)volumes;
-(void)setVolumes:(NSMutableDictionary *)arg1 ;
@end
