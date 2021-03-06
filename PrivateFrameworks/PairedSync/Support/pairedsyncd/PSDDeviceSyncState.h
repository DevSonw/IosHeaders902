/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSUUID;

@interface PSDDeviceSyncState : NSObject <NSCoding> {

	NSUUID* _pairingID;
	unsigned _syncState;

}

@property (nonatomic,readonly) NSUUID * pairingID;              //@synthesize pairingID=_pairingID - In the implementation block
@property (nonatomic,readonly) unsigned syncState;              //@synthesize syncState=_syncState - In the implementation block
-(id)initWithPairingID:(id)arg1 syncState:(unsigned)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned)syncState;
-(NSUUID *)pairingID;
@end

