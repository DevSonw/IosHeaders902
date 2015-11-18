/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:36:08 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NEConfiguration, NEConfigurationManager, NSString, NEFilterProviderConfiguration;

@interface NEFilterManager : NSObject <NEPrettyDescription> {

	char _hasLoaded;
	NEConfiguration* _configuration;
	NEConfigurationManager* _configurationManager;

}

@property (copy) NSString * localizedDescription; 
@property (retain) NEFilterProviderConfiguration * providerConfiguration; 
@property (getter=isEnabled) char enabled; 
@property (assign) char hasLoaded;                                                     //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (retain) NEConfiguration * configuration;                                    //@synthesize configuration=_configuration - In the implementation block
@property (readonly) NEConfigurationManager * configurationManager;                    //@synthesize configurationManager=_configurationManager - In the implementation block
+(id)sharedManager;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned)arg2 ;
-(void)setHasLoaded:(char)arg1 ;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(NEConfigurationManager *)configurationManager;
-(void)createEmptyConfiguration;
-(id)initFilterManagerWithPluginType:(id)arg1 ;
-(NEFilterProviderConfiguration *)providerConfiguration;
-(void)removeFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveToPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setProviderConfiguration:(NEFilterProviderConfiguration *)arg1 ;
-(id)init;
-(id)description;
-(NSString *)localizedDescription;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(NEConfiguration *)configuration;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(char)hasLoaded;
@end
