/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:46:39 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@protocol _SFAddBookmarkActivityDelegate;
@interface _SFAddBookmarkActivity : UIActivity {

	id<_SFAddBookmarkActivityDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFAddBookmarkActivityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<_SFAddBookmarkActivityDelegate>)arg1 ;
-(id<_SFAddBookmarkActivityDelegate>)delegate;
-(id)activityType;
-(void)activityDidFinish:(char)arg1 ;
-(id)activityTitle;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(id)_beforeActivity;
@end

