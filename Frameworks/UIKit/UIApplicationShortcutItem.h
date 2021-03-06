/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, UIApplicationShortcutIcon, NSData, SBSApplicationShortcutItem, NSDictionary;

@interface UIApplicationShortcutItem : NSObject <NSCopying, NSMutableCopying> {

	NSString* _type;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	UIApplicationShortcutIcon* _icon;
	unsigned _activationMode;
	NSData* _userInfoData;

}

@property (nonatomic,copy,readonly) SBSApplicationShortcutItem * sbsShortcutItem; 
@property (nonatomic,readonly) unsigned activationMode; 
@property (nonatomic,copy) NSString * type;                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                                          //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedSubtitle;                                       //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,copy) UIApplicationShortcutIcon * icon;                                   //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned activationMode;                                          //@synthesize activationMode=_activationMode - In the implementation block
@property (nonatomic,copy) NSData * userInfoData;                                              //@synthesize userInfoData=_userInfoData - In the implementation block
+(char)supportsSecureCoding;
+(unsigned)_uiActivationModeFromSBSActivationMode:(unsigned)arg1 ;
+(unsigned)_sbsActivationModeFromUIActivationMode:(unsigned)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)initWithSBSApplicationShortcutItem:(id)arg1 ;
-(SBSApplicationShortcutItem *)sbsShortcutItem;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)setIcon:(UIApplicationShortcutIcon *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned)activationMode;
-(void)setActivationMode:(unsigned)arg1 ;
-(id)initWithType:(id)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 icon:(id)arg4 userInfo:(id)arg5 ;
-(id)_initWithType:(id)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 icon:(id)arg4 userInfoData:(id)arg5 activationMode:(unsigned)arg6 ;
-(NSString *)localizedTitle;
-(NSString *)localizedSubtitle;
-(UIApplicationShortcutIcon *)icon;
-(NSData *)userInfoData;
-(id)initWithType:(id)arg1 localizedTitle:(id)arg2 ;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setLocalizedSubtitle:(NSString *)arg1 ;
-(void)setUserInfoData:(NSData *)arg1 ;
@end

