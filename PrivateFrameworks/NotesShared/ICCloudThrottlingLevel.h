/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ICCloudThrottlingLevel : NSObject {

	unsigned _numberOfBatches;
	double _batchInterval;

}

@property (assign,nonatomic) double batchInterval;                  //@synthesize batchInterval=_batchInterval - In the implementation block
@property (assign,nonatomic) unsigned numberOfBatches;              //@synthesize numberOfBatches=_numberOfBatches - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)initWithBatchInterval:(double)arg1 numberOfBatches:(unsigned)arg2 ;
-(unsigned)numberOfBatches;
-(double)batchInterval;
-(void)setBatchInterval:(double)arg1 ;
-(void)setNumberOfBatches:(unsigned)arg1 ;
@end

