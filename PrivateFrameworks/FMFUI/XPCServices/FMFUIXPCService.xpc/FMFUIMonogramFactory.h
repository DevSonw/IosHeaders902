/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:06 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/XPCServices/FMFUIXPCService.xpc/FMFUIXPCService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FMFUIMonogramFactory : NSObject {

	NSMutableDictionary* _heightToMonogrammerCache;

}

@property (nonatomic,retain) NSMutableDictionary * heightToMonogrammerCache;              //@synthesize heightToMonogrammerCache=_heightToMonogrammerCache - In the implementation block
+(id)sharedInstance;
-(id)monogramPackageForHandle:(id)arg1 height:(id)arg2 ;
-(id)_monogramForHandle:(id)arg1 height:(id)arg2 ;
-(id)monogrammerForHeight:(id)arg1 ;
-(id)_contactForHandle:(id)arg1 ;
-(char)isPhoneNumber:(id)arg1 ;
-(id)_contactWithImagePreferred:(id)arg1 ;
-(NSMutableDictionary *)heightToMonogrammerCache;
-(void)setHeightToMonogrammerCache:(NSMutableDictionary *)arg1 ;
@end
