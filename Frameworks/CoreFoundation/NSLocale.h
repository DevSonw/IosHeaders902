/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:46:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSLocale : NSObject <NSCopying, NSSecureCoding>
+(void)setPreferredLanguages:(id)arg1 ;
+(void)registerPreferredLanguage:(id)arg1 usage:(unsigned)arg2 confidence:(float)arg3 ;
+(id)mostPreferredLanguageOf:(id)arg1 withPreferredLanguages:(id)arg2 forUsage:(unsigned)arg3 options:(unsigned)arg4 ;
+(id)mostPreferredLanguageOf:(id)arg1 forUsage:(unsigned)arg2 options:(unsigned)arg3 ;
+(id)systemLanguages;
+(id)autoupdatingCurrentLocale;
+(id)commonISOCurrencyCodes;
+(id)localeIdentifierFromWindowsLocaleCode:(unsigned)arg1 ;
+(unsigned)windowsLocaleCodeFromLocaleIdentifier:(id)arg1 ;
+(unsigned)lineDirectionForLanguage:(id)arg1 ;
+(id)internetServicesRegion;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
+(id)currentLocale;
+(id)systemLocale;
+(id)localeIdentifierFromComponents:(id)arg1 ;
+(id)preferredLanguages;
+(unsigned)characterDirectionForLanguage:(id)arg1 ;
+(id)localeWithLocaleIdentifier:(id)arg1 ;
+(id)canonicalLanguageIdentifierFromString:(id)arg1 ;
+(id)componentsFromLocaleIdentifier:(id)arg1 ;
+(id)ISOCountryCodes;
+(id)canonicalLocaleIdentifierFromString:(id)arg1 ;
+(id)ISOCurrencyCodes;
+(id)availableLocaleIdentifiers;
+(id)ISOLanguageCodes;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(Class)classForCoder;
-(id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2 ;
-(unsigned long)_cfTypeID;
-(id)_prefs;
-(unsigned char)_nullLocale;
-(void)_setNullLocale;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)objectForKey:(id)arg1 ;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localeIdentifier;
-(id)displayNameForKey:(id)arg1 value:(id)arg2 ;
-(id)initWithLocaleIdentifier:(id)arg1 ;
@end

