/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:06 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FTUserConfiguration : NSObject

@property (assign,nonatomic) char cellularFaceTimeEnabled; 
@property (assign,nonatomic) char allowAnyNetwork; 
@property (nonatomic,readonly) char _nonWifiFaceTimeEntitled; 
+(id)sharedInstance;
-(char)cellularFaceTimeEnabled;
-(void)setCellularFaceTimeEnabled:(char)arg1 ;
-(char)_nonWifiFaceTimeEntitled;
-(char)_adequateInternalOrCarrierInstall;
-(void)setAllowAnyNetwork:(char)arg1 ;
-(char)allowAnyNetwork;
@end
