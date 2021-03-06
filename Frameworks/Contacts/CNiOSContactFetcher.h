/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:43:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CNContactFetchRequest;

@interface CNiOSContactFetcher : NSObject {

	void* _addressBook;
	CNContactFetchRequest* _fetchRequest;
	/*^block*/id _personToContact;

}
+(/*^block*/id)linkedPeopleComparator;
+(id)contactsForFetchRequest:(id)arg1 matchInfos:(id*)arg2 inAddressBook:(void*)arg3 error:(id*)arg4 ;
-(id)executeFetchRequestWithProgressiveResults:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithFetchRequest:(id)arg1 addressBook:(void*)arg2 ;
-(id)fetchContactsReturningMatchInfos:(id*)arg1 error:(id*)arg2 ;
-(void)_batchLoadPropertiesForPeople:(id)arg1 keysToFetch:(id)arg2 ;
-(id)unifyPeople:(id)arg1 keysToFetch:(id)arg2 abMatchInfos:(id)arg3 outCNMatchInfos:(id*)arg4 ;
-(id)_abMatchMetadataToCNContactMatchInfoArray:(id)arg1 ;
-(id)_peopleToContactsArray:(id)arg1 abMatchInfo:(id)arg2 keysToFetch:(id)arg3 ;
-(void)dealloc;
@end

