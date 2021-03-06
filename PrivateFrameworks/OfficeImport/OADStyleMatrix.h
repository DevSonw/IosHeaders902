/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface OADStyleMatrix : NSObject {

	NSString* mName;
	NSMutableArray* mFills;
	NSMutableArray* mStrokes;
	NSMutableArray* mEffects;
	NSMutableArray* mBgFills;

}

@property (nonatomic,copy) NSString * name; 
+(id)objectInArray:(id)arg1 withPossiblyOutOfRangeIndex:(unsigned)arg2 defaultValue:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)isEmpty;
-(id)bgFillAtIndex:(unsigned)arg1 ;
-(void)addFill:(id)arg1 ;
-(void)addStroke:(id)arg1 ;
-(void)addEffects:(id)arg1 ;
-(void)addBgFill:(id)arg1 ;
-(id)strokeAtIndex:(unsigned)arg1 ;
-(id)fillAtIndex:(unsigned)arg1 ;
-(id)effectsAtIndex:(unsigned)arg1 ;
-(void)validateStyleMatrix;
-(void)padArray:(id)arg1 withContentsOfArray:(id)arg2 ;
-(unsigned)fillCount;
-(id)fillAtIndex:(unsigned)arg1 color:(id)arg2 ;
-(unsigned)strokeCount;
-(id)strokeAtIndex:(unsigned)arg1 color:(id)arg2 ;
-(unsigned)effectsCount;
-(id)effectsAtIndex:(unsigned)arg1 color:(id)arg2 ;
-(unsigned)bgFillCount;
@end

