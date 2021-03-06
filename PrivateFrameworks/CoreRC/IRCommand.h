/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IRProtocol;

@interface IRCommand : NSObject <NSSecureCoding, NSCopying> {

	char _isRepeat;
	IRProtocol* _protocol;
	unsigned long long* _sequence;
	unsigned _sequenceCount;
	unsigned long long _payload;
	unsigned long long _timestamp;

}

@property (nonatomic,readonly) IRProtocol * protocol;                     //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) unsigned long long payload;                //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) char isRepeat;                             //@synthesize isRepeat=_isRepeat - In the implementation block
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long* sequence;              //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,readonly) unsigned sequenceCount;                    //@synthesize sequenceCount=_sequenceCount - In the implementation block
+(char)supportsSecureCoding;
-(unsigned long long*)sequence;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned long long)payload;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IRProtocol *)protocol;
-(char)isRepeat;
-(unsigned)sequenceCount;
-(id)initWithProtocol:(id)arg1 payload:(unsigned long long)arg2 repeat:(char)arg3 ;
-(char)setSequence:(unsigned long long*)arg1 withCount:(unsigned)arg2 ;
@end

