/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsUI/DDTelephoneNumberAction.h>

@interface DDCallAction : DDTelephoneNumberAction
+(char)isAvailable;
-(id)localizedName;
-(int)interactionType;
-(void)perform;
-(float)_systemFontSize;
-(id)_UIDsAndLabelsMatchingPhoneNumber:(id)arg1 inAddressBook:(void*)arg2 ;
-(id)_nameForPerson:(void*)arg1 ;
-(BOOL)_retrieveNameForDestinationNumber:(id*)arg1 label:(id*)arg2 ;
-(char)_titleFitsInActionSheet:(id)arg1 ;
@end

