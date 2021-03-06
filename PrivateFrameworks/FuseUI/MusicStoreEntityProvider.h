/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/MusicEntityProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, MPSparseArray, NSString;

@interface MusicStoreEntityProvider : NSObject <MusicEntityProviding, NSCopying, NSSecureCoding> {

	int _entityType;
	NSArray* _filteredPlayableItemMetadataContexts;
	MPSparseArray* _storeEntityValueProviders;
	char _shouldReloadEntityValueProvidersForInvalidation;
	char _shouldIncludeUnplayableContent;
	char _shouldRespectSystemContentRestrictions;
	NSArray* _storeItemMetadataContexts;

}

@property (nonatomic,readonly) int entityType;                                                  //@synthesize entityType=_entityType - In the implementation block
@property (assign,nonatomic) char shouldReloadEntityValueProvidersForInvalidation;              //@synthesize shouldReloadEntityValueProvidersForInvalidation=_shouldReloadEntityValueProvidersForInvalidation - In the implementation block
@property (assign,nonatomic) char shouldIncludeUnplayableContent;                               //@synthesize shouldIncludeUnplayableContent=_shouldIncludeUnplayableContent - In the implementation block
@property (assign,nonatomic) char shouldRespectSystemContentRestrictions;                       //@synthesize shouldRespectSystemContentRestrictions=_shouldRespectSystemContentRestrictions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * storeItemMetadataContexts;                        //@synthesize storeItemMetadataContexts=_storeItemMetadataContexts - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1 ;
-(char)hasEntities;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)numberOfSections;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(char)hasEntitiesNotInLibrary;
-(int)_entityType;
-(unsigned)_entityCount;
-(void)_configureEntityValueContextOutput:(id)arg1 forGlobalIndex:(unsigned)arg2 ;
-(id)_storeEntityValueProviderAtIndex:(unsigned)arg1 ;
-(void)_setStoreItemMetadataContexts:(id)arg1 entityType:(int)arg2 allowingInvalidationNotification:(char)arg3 ;
-(void)_reloadFilteredPlayableItemMetadataContextsAllowingInvalidationNotification:(char)arg1 ;
-(void)_restrictionMonitorAllowsExplicitContentDidChangeNotification:(id)arg1 ;
-(void)_postInvalidationNotification;
-(id)_filteredPlayableItemMetadataContextsWithItems:(id)arg1 ;
-(void)setShouldIncludeUnplayableContent:(char)arg1 ;
-(void)setShouldRespectSystemContentRestrictions:(char)arg1 ;
-(void)setStoreItemMetadataContexts:(id)arg1 entityType:(int)arg2 ;
-(id)indexPathForStoreItemMetadataContext:(id)arg1 ;
-(id)storeItemMetadataContextAtIndexPath:(id)arg1 ;
-(char)shouldReloadEntityValueProvidersForInvalidation;
-(void)setShouldReloadEntityValueProvidersForInvalidation:(char)arg1 ;
-(char)shouldIncludeUnplayableContent;
-(char)shouldRespectSystemContentRestrictions;
-(NSArray *)storeItemMetadataContexts;
-(int)entityType;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(unsigned)numberOfEntitiesInSection:(unsigned)arg1 ;
-(unsigned)numberOfIndexBarEntries;
-(unsigned)sectionForSectionIndexBarEntryAtIndex:(unsigned)arg1 ;
@end

