/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MSVLoggingLevelPair : NSObject {

	int _maxConsoleLoggingLevel;
	int _maxFileLoggingLevel;

}

@property (assign,nonatomic) int maxConsoleLoggingLevel;              //@synthesize maxConsoleLoggingLevel=_maxConsoleLoggingLevel - In the implementation block
@property (assign,nonatomic) int maxFileLoggingLevel;                 //@synthesize maxFileLoggingLevel=_maxFileLoggingLevel - In the implementation block
+(id)pairWithMaxConsoleLevel:(int)arg1 maxFileLevel:(int)arg2 ;
-(int)maxConsoleLoggingLevel;
-(int)maxFileLoggingLevel;
-(id)initWithMaxConsoleLevel:(int)arg1 maxFileLevel:(int)arg2 ;
-(void)setMaxConsoleLoggingLevel:(int)arg1 ;
-(void)setMaxFileLoggingLevel:(int)arg1 ;
@end
