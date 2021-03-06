/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PTPStartDataPacket : NSObject {

	unsigned long _transactionID;
	unsigned long long _totalDataSize;

}
-(id)description;
-(void)setTransactionID:(unsigned long)arg1 ;
-(unsigned long)transactionID;
-(id)contentForTCP;
-(id)initWithTransactionID:(unsigned long)arg1 totalDataSize:(unsigned long long)arg2 ;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(unsigned long long)totalDataSize;
-(void)setTotalDataSize:(unsigned long long)arg1 ;
@end

