/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/WBSAutomaticReadingListItem.h>

@class NSString;

@interface WBSAutomaticReadingListSinaWeiboItem : WBSAutomaticReadingListItem {

	NSString* _originatorProfileImageURLString;
	NSString* _profileURLComponent;

}

@property (nonatomic,copy) NSString * originatorProfileImageURLString;              //@synthesize originatorProfileImageURLString=_originatorProfileImageURLString - In the implementation block
@property (nonatomic,copy) NSString * profileURLComponent;                          //@synthesize profileURLComponent=_profileURLComponent - In the implementation block
-(id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2 ;
-(id)socialSource;
-(id)originatorProfileImageURL;
-(id)biggerOriginatorProfileImageURL;
-(id)sourceRecordURL;
-(id)originatorProfileURL;
-(NSString *)originatorProfileImageURLString;
-(id)_profileImageURLWithImageSizeString:(id)arg1 ;
-(NSString *)profileURLComponent;
-(void)setOriginatorProfileImageURLString:(NSString *)arg1 ;
-(void)setProfileURLComponent:(NSString *)arg1 ;
@end
