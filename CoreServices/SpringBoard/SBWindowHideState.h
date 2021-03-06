/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBWindowHideState : NSObject {

	char _hidden;
	float _desiredAlpha;

}

@property (getter=isHidden) char hidden;              //@synthesize hidden=_hidden - In the implementation block
@property (assign) float desiredAlpha;                //@synthesize desiredAlpha=_desiredAlpha - In the implementation block
-(float)desiredAlpha;
-(void)setDesiredAlpha:(float)arg1 ;
-(char)isHidden;
-(void)setHidden:(char)arg1 ;
-(id)description;
@end

