/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKUIResourceRequest : NSObject <NSCopying> {

	id _cacheKey;
	unsigned _requestID;

}

@property (nonatomic,readonly) char cachesInMemory; 
@property (nonatomic,retain) id cacheKey;                             //@synthesize cacheKey=_cacheKey - In the implementation block
@property (assign,nonatomic) unsigned requestIdentifier;              //@synthesize requestID=_requestID - In the implementation block
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cacheKey;
-(void)setCacheKey:(id)arg1 ;
-(unsigned)requestIdentifier;
-(char)cachesInMemory;
-(void)finishWithResource:(id)arg1 ;
-(id)newLoadOperation;
-(id)_initSKUIResourceRequest;
-(void)setRequestIdentifier:(unsigned)arg1 ;
@end

