/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicStoreUI/MusicStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString;

@interface MSTrackListCopyrightFooterView : UIView {

	CGSize _textSize;
	NSString* _text;

}

@property (nonatomic,retain) NSString * text;              //@synthesize text=_text - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)sizeToFit;
-(CGSize)_textSize;
@end

