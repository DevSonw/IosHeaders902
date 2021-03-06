/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SASTComparisonEntity, SAUIDecoratedText, NSString;

@interface SASTComparisonItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SASTComparisonEntity * firstItem; 
@property (nonatomic,retain) SAUIDecoratedText * footnote; 
@property (nonatomic,retain) SASTComparisonEntity * secondItem; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)comparisonItem;
+(id)comparisonItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAUIDecoratedText *)footnote;
-(void)setFirstItem:(SASTComparisonEntity *)arg1 ;
-(SASTComparisonEntity *)firstItem;
-(SASTComparisonEntity *)secondItem;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setFootnote:(SAUIDecoratedText *)arg1 ;
-(void)setSecondItem:(SASTComparisonEntity *)arg1 ;
@end

