/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFRangedDataFilter : MFBaseFilterDataConsumer {

	NSRange _range;
	unsigned _consumedLength;

}

@property (assign,nonatomic) NSRange range;              //@synthesize range=_range - In the implementation block
+(id)rangedFilterWithConsumers:(id)arg1 range:(NSRange)arg2 ;
+(id)rangedFilterWithConsumer:(id)arg1 range:(NSRange)arg2 ;
-(NSRange)range;
-(int)appendData:(id)arg1 ;
-(void)setRange:(NSRange)arg1 ;
@end

