/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableOrderedSet;

@interface SKUISettingsObjectStore : NSObject {

	NSMutableOrderedSet* _allObjects;
	char _dirty;
	NSMutableOrderedSet* _visibleObjects;

}
-(void)removeObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)init;
-(unsigned)indexOfObject:(id)arg1 ;
-(id)description;
-(char)containsObject:(id)arg1 ;
-(id)allObjects;
-(void)addObject:(id)arg1 hidden:(char)arg2 ;
-(unsigned)numberOfObjects;
-(unsigned)numberOfVisibleObjects;
-(void)hideObject:(id)arg1 ;
-(unsigned)indexOfVisibleObject:(id)arg1 ;
-(char)objectIsVisible:(id)arg1 ;
-(void)enumerateObjects:(/*^block*/id)arg1 ;
-(void)revealObject:(id)arg1 ;
-(id)visibleObjectAtIndex:(unsigned)arg1 ;
-(void)_updateVisibleOrder;
-(void)enumerateVisibleObjects:(/*^block*/id)arg1 ;
@end
