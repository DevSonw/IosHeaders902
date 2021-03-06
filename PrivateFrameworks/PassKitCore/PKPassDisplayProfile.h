/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKDisplayProfile.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKColor, NSData;

@interface PKPassDisplayProfile : PKDisplayProfile <NSSecureCoding, NSCopying> {

	char _tallCode;
	int _passStyle;
	PKColor* _backgroundColor;
	PKColor* _foregroundColor;
	PKColor* _labelColor;
	PKColor* _stripColor;
	NSData* _iconHash;
	NSData* _logoHash;
	NSData* _thumbnailHash;
	NSData* _backgroundHash;
	NSData* _stripHash;
	NSData* _paymentAssetsHash;

}

@property (assign,nonatomic) int passStyle;                            //@synthesize passStyle=_passStyle - In the implementation block
@property (nonatomic,retain) PKColor * backgroundColor;                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) PKColor * foregroundColor;                //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) PKColor * labelColor;                     //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,retain) PKColor * stripColor;                     //@synthesize stripColor=_stripColor - In the implementation block
@property (nonatomic,retain) NSData * iconHash;                        //@synthesize iconHash=_iconHash - In the implementation block
@property (nonatomic,retain) NSData * logoHash;                        //@synthesize logoHash=_logoHash - In the implementation block
@property (nonatomic,retain) NSData * thumbnailHash;                   //@synthesize thumbnailHash=_thumbnailHash - In the implementation block
@property (nonatomic,retain) NSData * backgroundHash;                  //@synthesize backgroundHash=_backgroundHash - In the implementation block
@property (nonatomic,retain) NSData * stripHash;                       //@synthesize stripHash=_stripHash - In the implementation block
@property (nonatomic,retain) NSData * paymentAssetsHash;               //@synthesize paymentAssetsHash=_paymentAssetsHash - In the implementation block
@property (assign,nonatomic) char tallCode;                            //@synthesize tallCode=_tallCode - In the implementation block
@property (nonatomic,readonly) char showsBackgroundImage; 
@property (nonatomic,readonly) char showsStripImage; 
@property (nonatomic,readonly) int layoutMode; 
+(char)supportsSecureCoding;
-(int)layoutMode;
-(int)passStyle;
-(char)showsStripImage;
-(char)showsBackgroundImage;
-(PKColor *)labelColor;
-(PKColor *)stripColor;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(void)setBackgroundColor:(PKColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(PKColor *)foregroundColor;
-(void)setForegroundColor:(PKColor *)arg1 ;
-(char)tallCode;
-(NSData *)backgroundHash;
-(NSData *)stripHash;
-(NSData *)logoHash;
-(NSData *)thumbnailHash;
-(NSData *)paymentAssetsHash;
-(NSData *)iconHash;
-(void)setPassStyle:(int)arg1 ;
-(void)setLabelColor:(PKColor *)arg1 ;
-(void)setStripColor:(PKColor *)arg1 ;
-(void)setTallCode:(char)arg1 ;
-(void)setIconHash:(NSData *)arg1 ;
-(void)setLogoHash:(NSData *)arg1 ;
-(void)setThumbnailHash:(NSData *)arg1 ;
-(void)setBackgroundHash:(NSData *)arg1 ;
-(void)setPaymentAssetsHash:(NSData *)arg1 ;
-(void)setStripHash:(NSData *)arg1 ;
@end

