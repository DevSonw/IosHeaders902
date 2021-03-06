/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MBSettingsContext, NSMutableDictionary;

@interface MBAppManager : NSObject {

	MBSettingsContext* _settingsContext;
	NSMutableDictionary* _containersByID;

}
+(id)appManager;
+(id)appManagerWithSettingsContext:(id)arg1 ;
-(id)allContainers;
-(void)dealloc;
-(id)containerWithIdentifier:(id)arg1 ;
-(id)initWithSettingsContext:(id)arg1 ;
-(id)allApps;
-(id)_subdomainNamesForAppDomainNames:(id)arg1 ;
-(id)allDisabledDomainNames;
-(id)_copyUserAppsWithError:(id*)arg1 ;
-(id)_copySafeHarborsWithError:(id*)arg1 ;
-(id)_copyAppsWithPlists:(id)arg1 error:(id*)arg2 ;
-(id)createSafeHarborForContainer:(id)arg1 error:(id*)arg2 ;
-(void)removeAllDisabledDomainNames;
-(char)isDomainNameEnabled:(id)arg1 ;
-(void)setEnabled:(char)arg1 forDomainName:(id)arg2 ;
-(id)allRestrictedDomainNames;
-(char)loadAppsWithSafeHarbors:(char)arg1 error:(id*)arg2 ;
-(id)appWithIdentifier:(id)arg1 ;
-(void)removeOldSafeHarbors;
-(char)moveAppDataToSafeHarborForContainer:(id)arg1 withError:(id*)arg2 ;
@end

