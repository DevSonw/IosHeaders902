/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, SASTTemplatePercentageRating, NSString;

@interface SASTMovieRatingReviewItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * reviews; 
@property (nonatomic,retain) SASTTemplatePercentageRating * templatePercentageRating; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)movieRatingReviewItem;
+(id)movieRatingReviewItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setReviews:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)reviews;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SASTTemplatePercentageRating *)templatePercentageRating;
-(void)setTemplatePercentageRating:(SASTTemplatePercentageRating *)arg1 ;
@end
