/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface SKUIMediaSocialPhotoUpload : NSObject <NSCopying> {

	char _hasAlpha;
	unsigned _height;
	unsigned _length;
	NSString* _MD5;
	NSString* _token;
	NSString* _tokenType;
	NSString* _type;
	NSNumber* _uniqueIdentifier;
	unsigned _width;

}

@property (assign,nonatomic) char hasAlpha;                          //@synthesize hasAlpha=_hasAlpha - In the implementation block
@property (assign,nonatomic) unsigned height;                        //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned length;                        //@synthesize length=_length - In the implementation block
@property (nonatomic,copy) NSString * MD5;                           //@synthesize MD5=_MD5 - In the implementation block
@property (nonatomic,copy) NSString * token;                         //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * tokenType;                     //@synthesize tokenType=_tokenType - In the implementation block
@property (nonatomic,copy) NSString * type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSNumber * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) unsigned width;                         //@synthesize width=_width - In the implementation block
-(unsigned)length;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)width;
-(unsigned)height;
-(void)setLength:(unsigned)arg1 ;
-(NSNumber *)uniqueIdentifier;
-(void)setWidth:(unsigned)arg1 ;
-(void)setUniqueIdentifier:(NSNumber *)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(void)setHasAlpha:(char)arg1 ;
-(void)setMD5:(NSString *)arg1 ;
-(void)setTokenType:(NSString *)arg1 ;
-(id)initWithUploadDictionary:(id)arg1 ;
-(char)hasAlpha;
-(NSString *)MD5;
-(NSString *)tokenType;
@end

