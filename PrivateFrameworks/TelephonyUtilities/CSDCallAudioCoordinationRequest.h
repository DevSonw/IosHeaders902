/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CSDCallAudioCoordinationRequest : NSObject {

	int _audioType;
	/*^block*/id _completion;

}

@property (assign,nonatomic) int audioType;              //@synthesize audioType=_audioType - In the implementation block
@property (nonatomic,copy) id completion;                //@synthesize completion=_completion - In the implementation block
+(id)coordinationRequestWithAudioType:(int)arg1 completion:(/*^block*/id)arg2 ;
-(id)description;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setAudioType:(int)arg1 ;
-(int)audioType;
@end

