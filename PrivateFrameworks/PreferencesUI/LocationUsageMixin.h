/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PreferencesUI/PreferencesUI-Structs.h>
@class PSTableCell, UIImageView, UILabel;

@interface LocationUsageMixin : NSObject {

	PSTableCell* _cell;
	int _usage;
	UIImageView* _usageIndicator;
	UILabel* _authLevelLabel;
	float horizontalOffset;
	unsigned _authLevel;

}

@property (assign,nonatomic) int usage;                           //@synthesize usage=_usage - In the implementation block
@property (assign,nonatomic) unsigned authLevel;                  //@synthesize authLevel=_authLevel - In the implementation block
@property (assign,nonatomic) float horizontalOffset; 
-(int)usage;
-(id)initWithTableCell:(id)arg1 ;
-(id)iconNameForUsage:(int)arg1 ;
-(id)_authLevelForMask:(unsigned)arg1 ;
-(CGSize)_authLevelLabelSize:(unsigned)arg1 ;
-(CGSize)usageIndicatorSize;
-(void)setUsage:(int)arg1 ;
-(void)setAuthLevel:(unsigned)arg1 ;
-(void)layoutUsageIndicator;
-(unsigned)authLevel;
-(float)horizontalOffset;
-(void)setHorizontalOffset:(float)arg1 ;
@end

