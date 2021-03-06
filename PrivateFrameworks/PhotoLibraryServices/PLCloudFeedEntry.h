/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSURL, NSDate, NSString, NSNumber;

@interface PLCloudFeedEntry : PLManagedObject

@property (nonatomic,readonly) NSURL * URIRepresentation; 
@property (nonatomic,readonly) int entryType; 
@property (nonatomic,readonly) int entryPriority; 
@property (nonatomic,retain) NSDate * entryDate; 
@property (nonatomic,retain) NSString * entryAlbumGUID; 
@property (nonatomic,retain) NSString * entryInvitationRecordGUID; 
@property (nonatomic,retain) NSNumber * entryTypeNumber; 
@property (nonatomic,retain) NSNumber * entryPriorityNumber; 
+(id)recentAssetsEntriesInLibrary:(id)arg1 limit:(int)arg2 ;
+(id)firstEntryWithType:(int)arg1 albumGUID:(id)arg2 inLibrary:(id)arg3 ;
+(id)entryWithURIRepresentation:(id)arg1 inLibrary:(id)arg2 ;
+(id)recentEntriesInLibrary:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 limit:(int)arg4 ;
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)allEntriesInManagedObjectContext:(id)arg1 ;
+(id)entriesSortDescriptorsAscending:(char)arg1 ;
+(id)allEntriesInLibrary:(id)arg1 ;
-(NSURL *)URIRepresentation;
-(int)entryType;
-(int)entryPriority;
-(char)shouldBeRemovedFromPhotoLibrary:(id)arg1 ;
@end

