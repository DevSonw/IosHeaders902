/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABLEStaticMapInclusiveDomainVectorRange;

@interface ABLEBONPostAdjust : NSObject {

	ABLEStaticMapInclusiveDomainVectorRange* _bonPostAdjustDoubleMap;

}

@property (retain) ABLEStaticMapInclusiveDomainVectorRange * bonPostAdjustDoubleMap;              //@synthesize bonPostAdjustDoubleMap=_bonPostAdjustDoubleMap - In the implementation block
+(id)bonPostAdjust;
+(id)bonPostAdjustWithJSONResource:(id)arg1 ;
+(id)bonPostAdjustWithArray:(id)arg1 ;
-(unsigned)adjustBON:(unsigned)arg1 forLevel:(float)arg2 ;
-(id)initBonPostAdjustWithDoubleMap:(id)arg1 ;
-(id)initBonPostAdjustWithJSONResource:(id)arg1 ;
-(ABLEStaticMapInclusiveDomainVectorRange *)bonPostAdjustDoubleMap;
-(id)initBonPostAdjustWithArray:(id)arg1 ;
-(void)setBonPostAdjustDoubleMap:(ABLEStaticMapInclusiveDomainVectorRange *)arg1 ;
@end

