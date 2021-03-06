/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface CKDPSubscriptionNotificationAlert : PBCodable <NSCopying> {

	NSString* _actionLocKey;
	NSString* _category;
	NSString* _launchImage;
	NSMutableArray* _localizedArguments;
	NSString* _localizedKey;
	NSString* _soundName;
	NSString* _text;

}

@property (nonatomic,readonly) char hasText; 
@property (nonatomic,retain) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) char hasLocalizedKey; 
@property (nonatomic,retain) NSString * localizedKey;                          //@synthesize localizedKey=_localizedKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedArguments;              //@synthesize localizedArguments=_localizedArguments - In the implementation block
@property (nonatomic,readonly) char hasActionLocKey; 
@property (nonatomic,retain) NSString * actionLocKey;                          //@synthesize actionLocKey=_actionLocKey - In the implementation block
@property (nonatomic,readonly) char hasLaunchImage; 
@property (nonatomic,retain) NSString * launchImage;                           //@synthesize launchImage=_launchImage - In the implementation block
@property (nonatomic,readonly) char hasSoundName; 
@property (nonatomic,retain) NSString * soundName;                             //@synthesize soundName=_soundName - In the implementation block
@property (nonatomic,readonly) char hasCategory; 
@property (nonatomic,retain) NSString * category;                              //@synthesize category=_category - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(char)hasText;
-(id)dictionaryRepresentation;
-(void)setSoundName:(NSString *)arg1 ;
-(NSString *)soundName;
-(void)addLocalizedArguments:(id)arg1 ;
-(void)setLocalizedKey:(NSString *)arg1 ;
-(unsigned)localizedArgumentsCount;
-(void)clearLocalizedArguments;
-(id)localizedArgumentsAtIndex:(unsigned)arg1 ;
-(void)setActionLocKey:(NSString *)arg1 ;
-(void)setLaunchImage:(NSString *)arg1 ;
-(char)hasLocalizedKey;
-(char)hasActionLocKey;
-(char)hasLaunchImage;
-(char)hasSoundName;
-(NSString *)localizedKey;
-(NSMutableArray *)localizedArguments;
-(void)setLocalizedArguments:(NSMutableArray *)arg1 ;
-(NSString *)actionLocKey;
-(NSString *)launchImage;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasCategory;
-(char)readFrom:(id)arg1 ;
@end

