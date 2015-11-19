/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, OADBlip;

@interface OADBlipRef : NSObject <NSCopying> {

	long mIndex;
	NSString* mName;
	NSMutableArray* mEffects;
	OADBlip* mBlip;

}
+(id)blipRefWithIndex:(long)arg1 name:(id)arg2 blip:(id)arg3 ;
+(int)blipTypeForContentType:(id)arg1 ;
+(id)blipRefWithIndex:(long)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4 ;
+(int)blipTypeForExtension:(id)arg1 ;
+(int)blipTypeForImageData:(id)arg1 ;
+(id)inflatedExtensionForGzippedExtension:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long)index;
-(void)setIndex:(long)arg1 ;
-(id)blip;
-(id)effects;
-(void)addEffect:(id)arg1 ;
-(unsigned)effectCount;
-(id)effectAtIndex:(unsigned)arg1 ;
-(void)setEffects:(id)arg1 ;
-(id)initWithIndex:(long)arg1 name:(id)arg2 blip:(id)arg3 ;
-(id)initWithIndex:(long)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4 ;
-(void)setBlip:(id)arg1 ;
-(void)removeEffectAtIndex:(unsigned)arg1 ;
-(char)isNull;
@end
