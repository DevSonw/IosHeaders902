/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASettingSetValue.h>

@interface SASettingSetBool : SASettingSetValue

@property (assign,nonatomic) char toggle; 
@property (assign,nonatomic) char value; 
+(id)setBool;
+(id)setBoolWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)_ad_settingsRequestRepresentation;
-(id)_ad_aceSettingsResponseCommandRepresentationForSiriResponse:(id)arg1 ;
-(int)_ad_settingType;
-(id)_ad_setting;
-(char)value;
-(void)setValue:(char)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(void)setToggle:(char)arg1 ;
-(char)toggle;
@end
