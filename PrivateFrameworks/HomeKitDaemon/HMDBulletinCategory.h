/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:44 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
@class NSArray;

@interface HMDBulletinCategory : NSObject {

	NSArray* _entries;

}

@property (nonatomic,retain) NSArray * entries;              //@synthesize entries=_entries - In the implementation block
+(id)defaultCategories;
+(id)categoryForIdentifier:(id)arg1 ;
+(id)_enumerationValueLocalizationKeys;
+(id)_secureStateMap;
-(id)identifier;
-(id)localizedName;
-(NSArray *)entries;
-(void)setEntries:(NSArray *)arg1 ;
-(char)hasCharacteristic:(id)arg1 ;
-(id)localizedStateForCharacteristic:(id)arg1 ;
-(char)shouldChangeSecureStateForCharacteristic:(id)arg1 previousContext:(NSDictionary*)arg2 ;
-(id)_presentationTypeForType:(id)arg1 ;
-(id)_presentationValueForValue:(id)arg1 type:(id)arg2 ;
-(id)_localizedStateForValue:(id)arg1 characteristicType:(id)arg2 ;
-(char)_isSecureState:(NSDictionary*)arg1 ;
-(char)_isUnsecureState:(NSDictionary*)arg1 ;
-(char)_alarmTriggerChange:(NSDictionary*)arg1 previousContext:(NSDictionary*)arg2 ;
@end

