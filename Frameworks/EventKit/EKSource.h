/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:18:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class EKAvailabilityCache, NSDate, NSString, NSSet, NSNumber, CDBSourceConstraints;

@interface EKSource : EKObject {

	EKAvailabilityCache* _availabilityCache;
	NSDate* _timeOfLastExternalIdentificationCache;
	NSString* _cachedHost;
	int _cachedPort;
	NSSet* _cachedOwnerAddresses;

}

@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) int sourceType; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) NSSet * calendars; 
@property (nonatomic,copy) NSNumber * defaultAlarmOffset; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (getter=isEnabled,nonatomic,readonly) char enabled; 
@property (nonatomic,readonly) char isFacebookSource; 
@property (nonatomic,readonly) CDBSourceConstraints * constraints; 
@property (nonatomic,readonly) int displayOrderForNewCalendar; 
@property (assign,nonatomic) char onlyCreatorCanModify; 
@property (nonatomic,readonly) char wantsCommentPromptWhenDeclining; 
@property (nonatomic,readonly) int preferredEventPrivateValue; 
@property (nonatomic,readonly) int strictestEventPrivateValue; 
@property (nonatomic,readonly) NSString * serverHost; 
@property (nonatomic,readonly) int serverPort; 
@property (nonatomic,readonly) NSSet * ownerAddresses; 
@property (nonatomic,readonly) EKAvailabilityCache * availabilityCache; 
@property (nonatomic,readonly) NSSet * allCalendars; 
@property (nonatomic,retain) NSDate * timeOfLastExternalIdentificationCache;              //@synthesize timeOfLastExternalIdentificationCache=_timeOfLastExternalIdentificationCache - In the implementation block
@property (nonatomic,retain) NSString * cachedHost;                                       //@synthesize cachedHost=_cachedHost - In the implementation block
@property (assign,nonatomic) int cachedPort;                                              //@synthesize cachedPort=_cachedPort - In the implementation block
@property (nonatomic,retain) NSSet * cachedOwnerAddresses;                                //@synthesize cachedOwnerAddresses=_cachedOwnerAddresses - In the implementation block
+(id)sourceWithEventStore:(id)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSSet *)calendars;
-(id)_persistentItem;
-(int)strictestEventPrivateValue;
-(EKAvailabilityCache *)availabilityCache;
-(char)onlyCreatorCanModify;
-(NSSet *)allCalendars;
-(NSDate *)timeOfLastExternalIdentificationCache;
-(void)setCachedHost:(NSString *)arg1 ;
-(void)setCachedPort:(int)arg1 ;
-(void)setCachedOwnerAddresses:(NSSet *)arg1 ;
-(void)setTimeOfLastExternalIdentificationCache:(NSDate *)arg1 ;
-(void)_cacheExternalIdentificationIfNeeded;
-(NSString *)cachedHost;
-(int)cachedPort;
-(NSSet *)cachedOwnerAddresses;
-(NSNumber *)defaultAlarmOffset;
-(void)setDefaultAlarmOffset:(NSNumber *)arg1 ;
-(void)setOnlyCreatorCanModify:(char)arg1 ;
-(char)wantsCommentPromptWhenDeclining;
-(NSString *)serverHost;
-(char)isFacebookSource;
-(NSString *)externalID;
-(NSSet *)ownerAddresses;
-(id)calendarsForEntityType:(unsigned)arg1 ;
-(id)readWriteCalendarsForEntityType:(unsigned)arg1 ;
-(int)preferredEventPrivateValue;
-(int)displayOrderForNewCalendar;
-(char)remove:(id*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(char)isEnabled;
-(CDBSourceConstraints *)constraints;
-(int)sourceType;
-(int)serverPort;
-(NSString *)sourceIdentifier;
-(char)commit:(id*)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
@end

