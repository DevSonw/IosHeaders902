/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:45:47 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSArray, NSString, NSExpression, NSDictionary;

@interface NSPropertyMapping : NSObject {

	void* _reserved;
	NSArray* _transformValidations;
	NSArray* _propertyTransforms;
	NSString* _name;
	NSExpression* _valueExpression;
	NSDictionary* _userInfo;
	struct {
		unsigned _isInUse : 1;
		unsigned _reservedPropertyMapping : 31;
	}  _propertyMappingFlags;

}

@property (copy) NSString * name; 
@property (retain) NSExpression * valueExpression; 
@property (retain) NSDictionary * userInfo; 
+(void)initialize;
-(void)setValueExpression:(NSExpression *)arg1 ;
-(void)_setPropertyTransforms:(id)arg1 ;
-(void)_setTransformValidations:(id)arg1 ;
-(void)_throwIfNotEditable;
-(void)_createCachesAndOptimizeState;
-(void)_setIsEditable:(char)arg1 ;
-(NSExpression *)valueExpression;
-(id)_initWithDestinationName:(id)arg1 valueExpression:(id)arg2 ;
-(id)_propertyTransforms;
-(id)_transformValidations;
-(id)initWithName:(id)arg1 valueExpression:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(char)isEditable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
@end

