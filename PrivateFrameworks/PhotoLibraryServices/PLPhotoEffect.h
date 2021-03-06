/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PLPhotoEffect : NSObject {

	NSString* _filterIdentifier;
	NSString* _displayName;
	NSString* _CIFilterName;

}

@property (nonatomic,copy,readonly) NSString * filterIdentifier;              //@synthesize filterIdentifier=_filterIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * CIFilterName;                  //@synthesize CIFilterName=_CIFilterName - In the implementation block
@property (nonatomic,readonly) int latestVersion; 
+(char)isEffectWithIdentifier:(id)arg1 equalToEffectWithIdentifier:(id)arg2 ;
+(char)isEffectNoneForIdentifier:(id)arg1 ;
+(id)effectWithIdentifier:(id)arg1 ;
+(id)allEffects;
+(unsigned)indexOfEffectWithIdentifier:(id)arg1 ;
+(id)effectWithCIFilterName:(id)arg1 ;
+(id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3 ;
-(id)newEffectFilter;
-(NSString *)filterIdentifier;
-(int)latestVersion;
-(id)description;
-(NSString *)displayName;
-(NSString *)CIFilterName;
@end

