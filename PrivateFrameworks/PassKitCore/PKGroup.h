/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKGroupDelegate;
@class PKCatalogGroup, NSMutableDictionary, NSNumber;

@interface PKGroup : NSObject {

	PKCatalogGroup* _catalogGroup;
	NSMutableDictionary* _passesByUniqueID;
	char _local;
	id<PKGroupDelegate> _delegate;
	unsigned _frontmostPassIndex;

}

@property (assign,nonatomic) id<PKGroupDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned frontmostPassIndex;               //@synthesize frontmostPassIndex=_frontmostPassIndex - In the implementation block
@property (nonatomic,readonly) NSNumber * groupID; 
@property (assign,getter=isLocal,nonatomic) char local;                 //@synthesize local=_local - In the implementation block
-(id)passWithUniqueID:(id)arg1 ;
-(unsigned)passCount;
-(id)passAtIndex:(unsigned)arg1 ;
-(void)handleUserPassDelete:(id)arg1 ;
-(unsigned)frontmostPassIndex;
-(unsigned)indexForPassUniqueID:(id)arg1 ;
-(void)setFrontmostPassIndex:(unsigned)arg1 ;
-(NSNumber *)groupID;
-(void)setDelegate:(id<PKGroupDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<PKGroupDelegate>)delegate;
-(void)_updatePass:(id)arg1 notify:(char)arg2 ;
-(void)_moveUniqueID:(id)arg1 toIndex:(unsigned)arg2 notify:(char)arg3 ;
-(void)_insertPass:(id)arg1 atIndex:(unsigned)arg2 notify:(char)arg3 ;
-(void)_removeUniqueID:(id)arg1 notify:(char)arg2 ;
-(unsigned)_indexOfUniqueID:(id)arg1 ;
-(id)initWithCatalogGroup:(id)arg1 passes:(id)arg2 ;
-(void)updateWithCatalogGroup:(id)arg1 passes:(id)arg2 notify:(char)arg3 ;
-(id)copyCatalogGroup;
-(char)containsPasses;
-(char)containsOnlyUniqueID:(id)arg1 ;
-(void)enumerateUniqueIDsWithHandler:(/*^block*/id)arg1 ;
-(char)isLocal;
-(void)setLocal:(char)arg1 ;
@end

