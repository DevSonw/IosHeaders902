/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HelpKit/HelpKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate, NSString;

@interface HLPURLDataCache : NSObject <NSCopying, NSCoding> {

	unsigned _cacheType;
	int _maxAge;
	unsigned _fileSize;
	NSDate* _updatedDate;
	NSString* _identifier;
	NSString* _lastModified;
	NSString* _locale;

}

@property (nonatomic,readonly) char expired; 
@property (assign,nonatomic) unsigned cacheType;                   //@synthesize cacheType=_cacheType - In the implementation block
@property (assign,nonatomic) int maxAge;                           //@synthesize maxAge=_maxAge - In the implementation block
@property (assign,nonatomic) unsigned fileSize;                    //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSDate * updatedDate;                 //@synthesize updatedDate=_updatedDate - In the implementation block
@property (nonatomic,retain) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * lastModified;              //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,retain) NSString * locale;                    //@synthesize locale=_locale - In the implementation block
-(void)setLastModified:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(unsigned)cacheType;
-(void)setCacheType:(unsigned)arg1 ;
-(void)setUpdatedDate:(NSDate *)arg1 ;
-(NSDate *)updatedDate;
-(char)expired;
-(unsigned)fileSize;
-(void)setFileSize:(unsigned)arg1 ;
-(void)setMaxAge:(int)arg1 ;
-(NSString *)lastModified;
-(int)maxAge;
@end
