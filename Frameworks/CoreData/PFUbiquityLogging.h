/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:45:48 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PFUbiquityLogging : NSObject {

	int _desiredLogLevel;

}

@property (assign,nonatomic) int desiredLogLevel;              //@synthesize desiredLogLevel=_desiredLogLevel - In the implementation block
+(char)canLogMessageAtLevel:(int)arg1 ;
+(void)setLoggingLevel:(int)arg1 ;
+(void)initialize;
-(void)userDefaultsChanged:(id)arg1 ;
-(void)checkUserDefaults;
-(void)setDesiredLogLevel:(int)arg1 ;
-(int)desiredLogLevel;
-(void)dealloc;
-(id)init;
@end
