/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FMCore/FMCore-Structs.h>
@class NSDate, NSError;

@interface FMLocationShifterItem : NSObject {

	char _shifted;
	NSDate* _timestamp;
	id _context;
	NSError* _error;
	double _accuracy;
	SCD_Struct_FM0 _coordinate;

}

@property (assign,nonatomic) SCD_Struct_FM0 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double accuracy;                        //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) id context;                           //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) char shifted;                           //@synthesize shifted=_shifted - In the implementation block
@property (nonatomic,retain) NSError * error;                        //@synthesize error=_error - In the implementation block
-(void)setAccuracy:(double)arg1 ;
-(NSError *)error;
-(void)setCoordinate:(SCD_Struct_FM0)arg1 ;
-(SCD_Struct_FM0)coordinate;
-(id)init;
-(id)description;
-(NSDate *)timestamp;
-(id)context;
-(char)shifted;
-(id)initWithCoordinate:(SCD_Struct_FM0)arg1 accuracy:(double)arg2 timestamp:(id)arg3 context:(id)arg4 ;
-(void)setShifted:(char)arg1 ;
-(double)accuracy;
-(void)setError:(NSError *)arg1 ;
@end
