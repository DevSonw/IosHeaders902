/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AFRequestInfo;

@interface AFRemoteRequest : NSObject {

	AFRequestInfo* _info;

}

@property (nonatomic,readonly) AFRequestInfo * info;              //@synthesize info=_info - In the implementation block
-(id)initWithInfo:(id)arg1 ;
-(AFRequestInfo *)info;
-(void)sendWithCompletion:(/*^block*/id)arg1 ;
@end

