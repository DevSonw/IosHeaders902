/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, CIImage;

@interface BLImage : NSObject <NSCopying> {

	UIImage* _UIImage;
	CGImageRef _CGImage;
	CIImage* _CIImage;
	int _storageType;
	CGSize _size;
	char _isPlaceholder;
	int _askedImageType;
	int _obtainedImageType;

}

@property (nonatomic,readonly) int storageType;                   //@synthesize storageType=_storageType - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) int imageOrientation; 
@property (nonatomic,readonly) float scale; 
@property (assign,nonatomic) int askedImageType;                  //@synthesize askedImageType=_askedImageType - In the implementation block
@property (assign,nonatomic) int obtainedImageType;               //@synthesize obtainedImageType=_obtainedImageType - In the implementation block
@property (assign,nonatomic) char isPlaceholder;                  //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (nonatomic,readonly) unsigned memoryUsage; 
+(id)imageWithImage:(id)arg1 ;
+(id)descriptionWithImageType:(int)arg1 ;
+(id)abbreviatedDescriptionWithImageType:(int)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(id)init;
-(id)description;
-(float)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)CGImage;
-(int)imageOrientation;
-(id)CIImage;
-(id)UIImage;
-(void)setIsPlaceholder:(char)arg1 ;
-(id)initWithFileAtURL:(id)arg1 ;
-(unsigned)memoryUsage;
-(int)storageType;
-(int)askedImageType;
-(void)setAskedImageType:(int)arg1 ;
-(int)obtainedImageType;
-(void)setObtainedImageType:(int)arg1 ;
-(char)isPlaceholder;
@end

