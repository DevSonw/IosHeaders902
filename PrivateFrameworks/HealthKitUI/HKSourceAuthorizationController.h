/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class HKHealthStore, HKSource, NSArray, NSMutableSet, NSSet;

@interface HKSourceAuthorizationController : NSObject {

	HKHealthStore* _healthStore;
	HKSource* _source;
	NSArray* _orderedTypesForSharing;
	NSArray* _orderedTypesForReading;
	NSMutableSet* _typesEnabledForSharing;
	NSMutableSet* _typesEnabledForReading;
	NSSet* _requestedTypesForSharing;
	NSSet* _requestedTypesForReading;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                      //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKSource * source;                                //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSArray * orderedTypesForSharing;                   //@synthesize orderedTypesForSharing=_orderedTypesForSharing - In the implementation block
@property (nonatomic,retain) NSArray * orderedTypesForReading;                   //@synthesize orderedTypesForReading=_orderedTypesForReading - In the implementation block
@property (nonatomic,retain) NSMutableSet * typesEnabledForSharing;              //@synthesize typesEnabledForSharing=_typesEnabledForSharing - In the implementation block
@property (nonatomic,retain) NSMutableSet * typesEnabledForReading;              //@synthesize typesEnabledForReading=_typesEnabledForReading - In the implementation block
@property (nonatomic,retain) NSSet * requestedTypesForSharing;                   //@synthesize requestedTypesForSharing=_requestedTypesForSharing - In the implementation block
@property (nonatomic,retain) NSSet * requestedTypesForReading;                   //@synthesize requestedTypesForReading=_requestedTypesForReading - In the implementation block
-(HKHealthStore *)healthStore;
-(void)reload;
-(HKSource *)source;
-(id)initWithHealthStore:(id)arg1 source:(id)arg2 typesForSharing:(id)arg3 typesForReading:(id)arg4 ;
-(void)commitAuthorizationStatuses;
-(id)typesInSection:(int)arg1 ;
-(void)setEnabled:(char)arg1 forType:(id)arg2 inSection:(int)arg3 commit:(char)arg4 ;
-(char)anyTypeEnabled;
-(char)allTypesEnabled;
-(void)setEnabled:(char)arg1 forAllTypesInSection:(int)arg2 commit:(char)arg3 ;
-(char)isTypeEnabled:(id)arg1 inSection:(int)arg2 ;
-(id)_enabledTypesInSection:(int)arg1 ;
-(void)_updateAuthorizationStatusWithTypes:(id)arg1 ;
-(int)_authorizationStatusWithType:(id)arg1 ;
-(void)_setAuthorizationStatuses:(id)arg1 ;
-(unsigned)countOfTypesInSection:(int)arg1 ;
-(NSArray *)orderedTypesForSharing;
-(void)setOrderedTypesForSharing:(NSArray *)arg1 ;
-(NSArray *)orderedTypesForReading;
-(void)setOrderedTypesForReading:(NSArray *)arg1 ;
-(NSMutableSet *)typesEnabledForSharing;
-(void)setTypesEnabledForSharing:(NSMutableSet *)arg1 ;
-(NSMutableSet *)typesEnabledForReading;
-(void)setTypesEnabledForReading:(NSMutableSet *)arg1 ;
-(NSSet *)requestedTypesForSharing;
-(void)setRequestedTypesForSharing:(NSSet *)arg1 ;
-(NSSet *)requestedTypesForReading;
-(void)setRequestedTypesForReading:(NSSet *)arg1 ;
-(void)_reload;
@end
