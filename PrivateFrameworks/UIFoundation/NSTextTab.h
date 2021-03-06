/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary;

@interface NSTextTab : NSObject <NSSecureCoding, NSCopying, NSCoding> {

	struct {
		unsigned alignment : 4;
		unsigned refCount : 24;
		unsigned unused : 4;
	}  _flags;
	float _location;
	id _reserved;

}

@property (nonatomic,readonly) int alignment; 
@property (nonatomic,readonly) float location; 
@property (nonatomic,readonly) NSDictionary * options; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
+(void)initialize;
+(id)columnTerminatorsForLocale:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(oneway void)release;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)alignment;
-(float)location;
-(NSDictionary *)options;
-(id)initWithTextAlignment:(int)arg1 location:(float)arg2 options:(id)arg3 ;
-(id)initWithType:(unsigned)arg1 location:(float)arg2 ;
-(unsigned)tabStopType;
@end

