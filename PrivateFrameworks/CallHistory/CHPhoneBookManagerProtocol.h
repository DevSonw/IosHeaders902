/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CHPhoneBookManagerProtocol <NSObject>
@required
+(id)get;
-(id)getRecordId:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(char)arg3;
-(id)getPersonsNameForRecord:(const void*)arg1;
-(id)getLocalizedCallerIdLabelForRecord:(const void*)arg1 withMultiValueId:(id)arg2 withCallerIdIsEmail:(char)arg3;
-(char)isABContactASuggestion;

@end

