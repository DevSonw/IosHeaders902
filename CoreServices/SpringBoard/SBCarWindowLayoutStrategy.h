/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWindowLayoutStrategy.h>

@protocol SBStarkSessionConfiguring;
@class NSString;

@interface SBCarWindowLayoutStrategy : NSObject <SBWindowLayoutStrategy> {

	id<SBStarkSessionConfiguring> _configuration;
	unsigned _layout;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(UIEdgeInsets)statusBarEdgeInsetsForConfiguration:(id)arg1 ;
+(id)strategyWithConfiguration:(id)arg1 layout:(unsigned)arg2 ;
-(id)initWithConfiguration:(id)arg1 layout:(unsigned)arg2 ;
-(char)_isLayoutBoundsOnly;
-(CGRect)frameForWindow:(id)arg1 ;
-(char)shouldClipForWindow:(id)arg1 ;
-(void)dealloc;
@end
