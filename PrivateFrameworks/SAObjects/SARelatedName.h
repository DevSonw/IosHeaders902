/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>
#import <SAObjects/SAAceComparable.h>

@class NSString;

@interface SARelatedName : AceObject <SAAceSerializable, SAAceComparable>

@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * name; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)relatedName;
+(id)relatedNameWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

