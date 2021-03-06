/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:19:36 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSData;

@interface ABUIPerson : NSObject <NSCopying> {

	void* _record;
	void* _addressBook;
	void* _source;
	NSArray* _linkedPeople;

}

@property (readonly) int recordID; 
@property (readonly) unsigned recordType; 
@property (readonly) void* record;                                      //@synthesize record=_record - In the implementation block
@property (readonly) void* source;                                      //@synthesize source=_source - In the implementation block
@property (readonly) void* addressBook;                                 //@synthesize addressBook=_addressBook - In the implementation block
@property (readonly) char recordWasDeleted; 
@property (readonly) char hasValidRecordID; 
@property (readonly) char isMeCard; 
@property (readonly) char hasLinkedPeople; 
@property (readonly) unsigned linkedPeopleCount; 
@property (readonly) NSArray * linkedPeople; 
@property (readonly) char isReadonly; 
@property (readonly) char areAllLinkedPeopleReadonly; 
@property (readonly) char isRemote; 
@property (readonly) void* policy; 
@property (readonly) int kind; 
@property (readonly) NSString * name; 
@property (readonly) NSString * phoneticName; 
@property (readonly) NSData * photoThumbnail; 
@property (readonly) ABUIPerson * preferredPersonForName; 
@property (readonly) NSString * preferredName; 
@property (readonly) ABUIPerson * preferredPersonForPhoto; 
@property (readonly) NSData * preferredPhotoThumbnail; 
@property (readonly) char hasPhoto; 
@property (readonly) char hasPreferredPhoto; 
@property (readonly) NSString * primarySourceName; 
@property (readonly) NSString * secondarySourceName; 
@property (readonly) char isFromFacebook; 
+(void)setAccountStore:(id)arg1 ;
+(id)personWithABPerson:(void*)arg1 ;
+(id)personInSource:(void*)arg1 ;
+(id)personWithABRecordID:(int)arg1 fromAddressBook:(void*)arg2 ;
+(id)personInAddressBook:(void*)arg1 ;
+(id)person;
-(char)hasValidRecordID;
-(NSData *)preferredPhotoThumbnail;
-(char)isReadonly;
-(NSData *)photoThumbnail;
-(char)addToGroup:(void*)arg1 ;
-(NSString *)primarySourceName;
-(NSString *)secondarySourceName;
-(void*)copyPropertyValue:(int)arg1 ;
-(char)allowsCustomLabelsForProperty:(int)arg1 ;
-(char)isMeCard;
-(NSArray *)linkedPeople;
-(ABUIPerson *)preferredPersonForName;
-(void)removePropertyValue:(int)arg1 ;
-(id)nameIgnoringOrganization:(char)arg1 ;
-(char)addToAddressBook:(void*)arg1 ;
-(char)updateNewPersonKindFromName;
-(ABUIPerson *)preferredPersonForPhoto;
-(char)isFromFacebook;
-(id)policiesForAllLinkedPeople;
-(char)areAllLinkedPeopleReadonly;
-(void)setNamePropertiesFromPerson:(id)arg1 ;
-(char)linkToPerson:(id)arg1 ;
-(void)mergeValuesFromRecord:(void*)arg1 ;
-(char)updatePersonKindFromName;
-(char)hasLinkedPeople;
-(NSString *)preferredName;
-(void)setAsPreferredPersonForName;
-(char)recordWasDeleted;
-(id)reloadFromDB;
-(id)initWithABPerson:(void*)arg1 ;
-(id)initWithABRecordID:(int)arg1 fromAddressBook:(void*)arg2 ;
-(unsigned)linkedPeopleCount;
-(char)_updatePersonKindFromNamePreserveOrganizationKind:(char)arg1 ;
-(void)mergeProperties:(id)arg1 fromRecord:(void*)arg2 ;
-(void)setAsPreferredPersonForPhoto;
-(char)hasPreferredPhoto;
-(void*)policy;
-(void*)record;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void*)source;
-(int)kind;
-(id)valueForProperty:(int)arg1 ;
-(unsigned)recordType;
-(NSString *)phoneticName;
-(char)hasPhoto;
-(void*)addressBook;
-(int)recordID;
-(char)isRemote;
-(void)setValue:(void*)arg1 forProperty:(int)arg2 ;
@end

