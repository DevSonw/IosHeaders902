/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:43:36 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet;

@interface CNContactChangesFetcher : NSObject {

	char _unify;
	NSSet* _identifiers;
	NSSet* _keysToFetch;

}

@property (nonatomic,retain) NSSet * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,retain) NSSet * keysToFetch;              //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (assign,nonatomic) char unify;                       //@synthesize unify=_unify - In the implementation block
-(char)unify;
-(void)setUnify:(char)arg1 ;
-(NSSet *)keysToFetch;
-(void)setKeysToFetch:(NSSet *)arg1 ;
-(NSSet *)identifiers;
-(void)setIdentifiers:(NSSet *)arg1 ;
@end
