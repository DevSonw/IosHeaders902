/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:20:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AudioToolbox/AUParameterNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, _AUStaticParameterInfo, NSString;

@interface AUParameter : AUParameterNode <NSSecureCoding> {

	char __localValueStale;
	float _value;
	NSArray* _dependentParameters;
	_AUStaticParameterInfo* _info;
	int _numUIObservers;
	int _numRecordingObservers;
	unsigned long long _address;

}

@property (nonatomic,readonly) float minValue; 
@property (nonatomic,readonly) float maxValue; 
@property (nonatomic,readonly) unsigned long unit; 
@property (nonatomic,copy,readonly) NSString * unitName; 
@property (nonatomic,readonly) unsigned long flags; 
@property (assign,nonatomic) unsigned long long address;                        //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) NSArray * valueStrings; 
@property (nonatomic,copy,readonly) NSArray * dependentParameters;              //@synthesize dependentParameters=_dependentParameters - In the implementation block
@property (assign,nonatomic) float value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) _AUStaticParameterInfo * info;                     //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) char _localValueStale;                             //@synthesize _localValueStale=__localValueStale - In the implementation block
@property (assign,nonatomic) int numUIObservers;                                //@synthesize numUIObservers=_numUIObservers - In the implementation block
@property (assign,nonatomic) int numRecordingObservers;                         //@synthesize numRecordingObservers=_numRecordingObservers - In the implementation block
+(char)supportsSecureCoding;
-(void)setValue:(float)arg1 originator:(void*)arg2 atHostTime:(unsigned long long)arg3 ;
-(NSString *)unitName;
-(unsigned long)_clumpID;
-(NSArray *)valueStrings;
-(id)stringFromValue:(const float*)arg1 ;
-(float)valueFromString:(id)arg1 ;
-(void)_observersChanged:(char)arg1 deltaCount:(int)arg2 ;
-(id)copyNodeWithOffset:(unsigned long long)arg1 ;
-(void)setValue:(float)arg1 originator:(void*)arg2 ;
-(float)_internalValue;
-(NSArray *)dependentParameters;
-(void)set_localValueStale:(char)arg1 ;
-(id)initWithID:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned long)arg6 unitName:(id)arg7 flags:(unsigned long)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10 ;
-(void)set_clumpID:(unsigned long)arg1 ;
-(char)_localValueStale;
-(int)numUIObservers;
-(void)setNumUIObservers:(int)arg1 ;
-(int)numRecordingObservers;
-(void)setNumRecordingObservers:(int)arg1 ;
-(float)maxValue;
-(unsigned long long)address;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(float)value;
-(void)setValue:(float)arg1 ;
-(float)minValue;
-(_AUStaticParameterInfo *)info;
-(void)setInfo:(_AUStaticParameterInfo *)arg1 ;
-(void)setAddress:(unsigned long long)arg1 ;
-(unsigned long)unit;
-(unsigned long)flags;
@end
