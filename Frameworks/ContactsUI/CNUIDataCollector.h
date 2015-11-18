/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:44:03 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CNUIDataCollectorLogger, NSString;

@interface CNUIDataCollector : NSObject {

	CNUIDataCollectorLogger* _logger;
	NSString* _appIdentifier;

}

@property (nonatomic,retain) CNUIDataCollectorLogger * logger;              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) NSString * appIdentifier;                      //@synthesize appIdentifier=_appIdentifier - In the implementation block
+(id)sharedCollector;
+(char)isEnabled;
-(void)logRefreshUsage;
-(void)logSearchUsage;
-(void)logIndexUsage;
-(void)logPresentation;
-(void)logGroupsShown:(int)arg1 totalGroups:(int)arg2 ;
-(void)logContactActionType:(id)arg1 attributes:(id)arg2 ;
-(void)logAddProperty:(id)arg1 contact:(id)arg2 ;
-(CNUIDataCollectorLogger *)logger;
-(void)_reallyLogIndexUsage;
-(void)setLogger:(CNUIDataCollectorLogger *)arg1 ;
-(id)init;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
@end
