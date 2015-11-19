/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAV-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface CalDAVServerVersion : NSObject <NSCopying> {

	char _supportsTimeRangeFilter;
	char _supportsTodoTimeRangeFilter;
	char _supportsTimeRangeFilterWithoutEndDate;
	char _supportsTimeRangeFilterOnInbox;
	char _supportsAutoSchedule;
	char _supportsPrivateComments;
	char _supportsSharing;
	char _supportsSharingNoScheduling;
	char _supportsCalendarProxy;
	char _supportsInboxAvailability;
	char _supportsPrivateEvents;
	char _supportsSubscriptionCalendars;
	char _supportsPrincipalPropertySearch;
	char _supportsExtendedCalendarQuery;
	char _supportsRequestCompression;
	char _supportsManagedAttachments;
	char _supportsCheckForValidEmail;
	char _supportsChecksumming;
	char _supportsCalendarHomeSync;
	char _supportsCalendarNoTimezone;
	char _supportsCalendarRecurrenceSplit;
	char _alwaysSupportsFreebusyOnOutbox;
	NSString* _supportedCalendarComponentSets;
	NSSet* _complianceClasses;
	NSString* _serverHeader;
	double _version;

}

@property (nonatomic,readonly) NSString * type; 
@property (assign,nonatomic) double version;                                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) char supportsTimeRangeFilter;                            //@synthesize supportsTimeRangeFilter=_supportsTimeRangeFilter - In the implementation block
@property (assign,nonatomic) char supportsTodoTimeRangeFilter;                        //@synthesize supportsTodoTimeRangeFilter=_supportsTodoTimeRangeFilter - In the implementation block
@property (assign,nonatomic) char supportsTimeRangeFilterWithoutEndDate;              //@synthesize supportsTimeRangeFilterWithoutEndDate=_supportsTimeRangeFilterWithoutEndDate - In the implementation block
@property (assign,nonatomic) char supportsTimeRangeFilterOnInbox;                     //@synthesize supportsTimeRangeFilterOnInbox=_supportsTimeRangeFilterOnInbox - In the implementation block
@property (assign,nonatomic) char supportsAutoSchedule;                               //@synthesize supportsAutoSchedule=_supportsAutoSchedule - In the implementation block
@property (assign,nonatomic) char supportsPrivateComments;                            //@synthesize supportsPrivateComments=_supportsPrivateComments - In the implementation block
@property (assign,nonatomic) char supportsSharing;                                    //@synthesize supportsSharing=_supportsSharing - In the implementation block
@property (assign,nonatomic) char supportsSharingNoScheduling;                        //@synthesize supportsSharingNoScheduling=_supportsSharingNoScheduling - In the implementation block
@property (assign,nonatomic) char supportsCalendarProxy;                              //@synthesize supportsCalendarProxy=_supportsCalendarProxy - In the implementation block
@property (assign,nonatomic) char supportsInboxAvailability;                          //@synthesize supportsInboxAvailability=_supportsInboxAvailability - In the implementation block
@property (assign,nonatomic) char supportsPrivateEvents;                              //@synthesize supportsPrivateEvents=_supportsPrivateEvents - In the implementation block
@property (assign,nonatomic) char supportsSubscriptionCalendars;                      //@synthesize supportsSubscriptionCalendars=_supportsSubscriptionCalendars - In the implementation block
@property (assign,nonatomic) char supportsPrincipalPropertySearch;                    //@synthesize supportsPrincipalPropertySearch=_supportsPrincipalPropertySearch - In the implementation block
@property (assign,nonatomic) char supportsExtendedCalendarQuery;                      //@synthesize supportsExtendedCalendarQuery=_supportsExtendedCalendarQuery - In the implementation block
@property (assign,nonatomic) char supportsRequestCompression;                         //@synthesize supportsRequestCompression=_supportsRequestCompression - In the implementation block
@property (assign,nonatomic) char supportsManagedAttachments;                         //@synthesize supportsManagedAttachments=_supportsManagedAttachments - In the implementation block
@property (assign,nonatomic) char supportsCheckForValidEmail;                         //@synthesize supportsCheckForValidEmail=_supportsCheckForValidEmail - In the implementation block
@property (assign,nonatomic) char supportsChecksumming;                               //@synthesize supportsChecksumming=_supportsChecksumming - In the implementation block
@property (assign,nonatomic) char supportsCalendarHomeSync;                           //@synthesize supportsCalendarHomeSync=_supportsCalendarHomeSync - In the implementation block
@property (nonatomic,copy) NSString * supportedCalendarComponentSets;                 //@synthesize supportedCalendarComponentSets=_supportedCalendarComponentSets - In the implementation block
@property (assign,nonatomic) char supportsCalendarNoTimezone;                         //@synthesize supportsCalendarNoTimezone=_supportsCalendarNoTimezone - In the implementation block
@property (assign,nonatomic) char supportsCalendarRecurrenceSplit;                    //@synthesize supportsCalendarRecurrenceSplit=_supportsCalendarRecurrenceSplit - In the implementation block
@property (nonatomic,retain) NSSet * complianceClasses;                               //@synthesize complianceClasses=_complianceClasses - In the implementation block
@property (assign,nonatomic) char alwaysSupportsFreebusyOnOutbox;                     //@synthesize alwaysSupportsFreebusyOnOutbox=_alwaysSupportsFreebusyOnOutbox - In the implementation block
@property (nonatomic,copy) NSString * serverHeader;                                   //@synthesize serverHeader=_serverHeader - In the implementation block
+(id)versionWithHTTPHeaders:(id)arg1 ;
+(id)_prototypeMatchingServerHeaders:(id)arg1 ;
+(id)versionWithPropertyValue:(id)arg1 ;
-(char)supportsPrivateEvents;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(double)arg1 ;
-(double)version;
-(NSString *)supportedCalendarComponentSets;
-(void)setSupportedCalendarComponentSets:(NSString *)arg1 ;
-(char)alwaysSupportsFreebusyOnOutbox;
-(char)supportsPrincipalPropertySearch;
-(char)supportsExtendedCalendarQuery;
-(void)setSupportsExtendedCalendarQuery:(char)arg1 ;
-(char)supportsAutoSchedule;
-(char)supportsTimeRangeFilter;
-(char)supportsTimeRangeFilterOnInbox;
-(char)supportsTimeRangeFilterWithoutEndDate;
-(void)setServerHeader:(NSString *)arg1 ;
-(id)_propertiesToComplianceClasses;
-(id)_additionalFlagKeys;
-(void)setComplianceClasses:(NSSet *)arg1 ;
-(char)supportsInboxAvailability;
-(void)setSupportsInboxAvailability:(char)arg1 ;
-(void)_setPropertiesFromComplianceClasses:(id)arg1 ;
-(void)setSupportsRequestCompression:(char)arg1 ;
-(NSString *)serverHeader;
-(NSSet *)complianceClasses;
-(id)_allFlagKeys;
-(char)supportsRequestCompression;
-(id)propertyValue;
-(void)setSupportsTimeRangeFilter:(char)arg1 ;
-(char)supportsTodoTimeRangeFilter;
-(void)setSupportsTodoTimeRangeFilter:(char)arg1 ;
-(void)setSupportsTimeRangeFilterWithoutEndDate:(char)arg1 ;
-(void)setSupportsTimeRangeFilterOnInbox:(char)arg1 ;
-(void)setSupportsAutoSchedule:(char)arg1 ;
-(char)supportsPrivateComments;
-(void)setSupportsPrivateComments:(char)arg1 ;
-(char)supportsSharingNoScheduling;
-(void)setSupportsSharingNoScheduling:(char)arg1 ;
-(char)supportsCalendarProxy;
-(void)setSupportsCalendarProxy:(char)arg1 ;
-(void)setSupportsPrivateEvents:(char)arg1 ;
-(char)supportsSubscriptionCalendars;
-(void)setSupportsSubscriptionCalendars:(char)arg1 ;
-(void)setSupportsPrincipalPropertySearch:(char)arg1 ;
-(char)supportsManagedAttachments;
-(void)setSupportsManagedAttachments:(char)arg1 ;
-(char)supportsCheckForValidEmail;
-(void)setSupportsCheckForValidEmail:(char)arg1 ;
-(char)supportsChecksumming;
-(void)setSupportsChecksumming:(char)arg1 ;
-(char)supportsCalendarHomeSync;
-(void)setSupportsCalendarHomeSync:(char)arg1 ;
-(char)supportsCalendarNoTimezone;
-(void)setSupportsCalendarNoTimezone:(char)arg1 ;
-(char)supportsCalendarRecurrenceSplit;
-(void)setSupportsCalendarRecurrenceSplit:(char)arg1 ;
-(void)setAlwaysSupportsFreebusyOnOutbox:(char)arg1 ;
-(void)setSupportsSharing:(char)arg1 ;
-(char)supportsSharing;
@end
