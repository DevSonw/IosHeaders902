/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFUISpeechSynthesisElementDelegate;
@class NSString, VSSpeechRequest;

@interface AFUISpeechSynthesisElement : NSObject {

	NSString* _text;
	char _isPhonetic;
	char _eligibleForSynthesis;
	char _provisional;
	char _preprationBlockCompleted;
	char _durationHasElapsed;
	VSSpeechRequest* _speechRequest;
	int _synthesisResult;
	id<AFUISpeechSynthesisElementDelegate> _delegate;
	NSString* _animationIdentifier;
	/*^block*/id _completion;

}

@property (nonatomic,copy) NSString * text;                                                        //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) char isPhonetic;                                                      //@synthesize isPhonetic=_isPhonetic - In the implementation block
@property (assign,getter=isEligibleForSynthesis,nonatomic) char eligibleForSynthesis;              //@synthesize eligibleForSynthesis=_eligibleForSynthesis - In the implementation block
@property (getter=isProvisional,nonatomic,readonly) char provisional;                              //@synthesize provisional=_provisional - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * speechRequest;                                      //@synthesize speechRequest=_speechRequest - In the implementation block
@property (assign,nonatomic) int synthesisResult;                                                  //@synthesize synthesisResult=_synthesisResult - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISpeechSynthesisElementDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * animationIdentifier;                                     //@synthesize animationIdentifier=_animationIdentifier - In the implementation block
@property (getter=_completion,nonatomic,readonly) id completion;                                   //@synthesize completion=_completion - In the implementation block
@property (setter=_setPreparationBlockCompleted:) char preprationBlockCompleted;                   //@synthesize preprationBlockCompleted=_preprationBlockCompleted - In the implementation block
@property (setter=_setDurationHasElapsed:) char durationHasElapsed;                                //@synthesize durationHasElapsed=_durationHasElapsed - In the implementation block
-(char)isPhonetic;
-(void)setDelegate:(id<AFUISpeechSynthesisElementDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<AFUISpeechSynthesisElementDelegate>)delegate;
-(NSString *)text;
-(void)_setText:(id)arg1 ;
-(void)_setDurationHasElapsed:(char)arg1 ;
-(void)_setPreparationBlockCompleted:(char)arg1 ;
-(char)durationHasElapsed;
-(char)preprationBlockCompleted;
-(void)_updateSynthesisEligibility;
-(id)initWithText:(id)arg1 provisional:(char)arg2 eligibleAfterDuration:(double)arg3 preparation:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 animationIdentifier:(id)arg6 ;
-(char)isProvisional;
-(char)isEligibleForSynthesis;
-(void)_setEligibleForSynthesis:(char)arg1 ;
-(void)executeCompletion;
-(void)setIsPhonetic:(char)arg1 ;
-(VSSpeechRequest *)speechRequest;
-(void)setSpeechRequest:(VSSpeechRequest *)arg1 ;
-(int)synthesisResult;
-(void)setSynthesisResult:(int)arg1 ;
-(NSString *)animationIdentifier;
-(/*^block*/id)_completion;
@end
