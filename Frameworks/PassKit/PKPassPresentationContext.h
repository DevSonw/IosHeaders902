/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface PKPassPresentationContext : NSObject {

	char _animated;
	char _wasAutomaticallySelected;
	NSArray* _additionalPassUniqueIdentifiers;

}

@property (assign,nonatomic) char animated;                                        //@synthesize animated=_animated - In the implementation block
@property (nonatomic,copy) NSArray * additionalPassUniqueIdentifiers;              //@synthesize additionalPassUniqueIdentifiers=_additionalPassUniqueIdentifiers - In the implementation block
@property (assign,nonatomic) char wasAutomaticallySelected;                        //@synthesize wasAutomaticallySelected=_wasAutomaticallySelected - In the implementation block
+(id)contextWithAnimation:(char)arg1 wasAutomaticallySelected:(char)arg2 additionalPassUniqueIdentifiers:(id)arg3 ;
+(id)contextWithAnimation:(char)arg1 ;
+(id)contextWithAnimation:(char)arg1 additionalPassUniqueIdentifiers:(id)arg2 ;
-(void)setAdditionalPassUniqueIdentifiers:(NSArray *)arg1 ;
-(void)setWasAutomaticallySelected:(char)arg1 ;
-(NSArray *)additionalPassUniqueIdentifiers;
-(char)wasAutomaticallySelected;
-(void)dealloc;
-(id)description;
-(char)animated;
-(void)setAnimated:(char)arg1 ;
@end

