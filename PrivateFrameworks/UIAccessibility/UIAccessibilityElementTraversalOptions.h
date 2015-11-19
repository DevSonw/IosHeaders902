/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface UIAccessibilityElementTraversalOptions : NSObject {

	char _shouldReturnScannerGroups;
	char _shouldOnlyIncludeElementsWithVisibleFrame;
	char _shouldIncludeKeyboardObscuredElements;
	char _shouldUseAllSubviews;
	char _includeHiddenViews;
	char _sorted;
	char _ignoreObscuresScreen;
	char _forSpeakScreen;
	char _shouldIncludeStatusBarWindow;
	int _direction;
	/*^block*/id _leafNodePredicate;

}

@property (assign,nonatomic) char shouldReturnScannerGroups;                              //@synthesize shouldReturnScannerGroups=_shouldReturnScannerGroups - In the implementation block
@property (assign,nonatomic) int direction;                                               //@synthesize direction=_direction - In the implementation block
@property (nonatomic,copy) id leafNodePredicate;                                          //@synthesize leafNodePredicate=_leafNodePredicate - In the implementation block
@property (assign,nonatomic) char shouldOnlyIncludeElementsWithVisibleFrame;              //@synthesize shouldOnlyIncludeElementsWithVisibleFrame=_shouldOnlyIncludeElementsWithVisibleFrame - In the implementation block
@property (assign,nonatomic) char shouldIncludeKeyboardObscuredElements;                  //@synthesize shouldIncludeKeyboardObscuredElements=_shouldIncludeKeyboardObscuredElements - In the implementation block
@property (assign,nonatomic) char shouldUseAllSubviews;                                   //@synthesize shouldUseAllSubviews=_shouldUseAllSubviews - In the implementation block
@property (assign,nonatomic) char includeHiddenViews;                                     //@synthesize includeHiddenViews=_includeHiddenViews - In the implementation block
@property (assign,nonatomic) char sorted;                                                 //@synthesize sorted=_sorted - In the implementation block
@property (assign,nonatomic) char ignoreObscuresScreen;                                   //@synthesize ignoreObscuresScreen=_ignoreObscuresScreen - In the implementation block
@property (assign,nonatomic) char forSpeakScreen;                                         //@synthesize forSpeakScreen=_forSpeakScreen - In the implementation block
@property (assign,nonatomic) char shouldIncludeStatusBarWindow;                           //@synthesize shouldIncludeStatusBarWindow=_shouldIncludeStatusBarWindow - In the implementation block
+(id)defaultVoiceOverOptions;
+(id)defaultSwitchControlOptions;
+(id)options;
+(id)voiceOverOptionsIncludingElementsFromOpaqueProviders:(char)arg1 ;
+(id)defaultSpeakScreenOptions;
-(void)setSorted:(char)arg1 ;
-(void)setLeafNodePredicate:(id)arg1 ;
-(id)leafNodePredicate;
-(void)setShouldUseAllSubviews:(char)arg1 ;
-(char)shouldIncludeKeyboardObscuredElements;
-(void)setShouldIncludeKeyboardObscuredElements:(char)arg1 ;
-(void)setIncludeHiddenViews:(char)arg1 ;
-(void)setIgnoreObscuresScreen:(char)arg1 ;
-(void)setShouldReturnScannerGroups:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(void)setShouldOnlyIncludeElementsWithVisibleFrame:(char)arg1 ;
-(void)setShouldIncludeStatusBarWindow:(char)arg1 ;
-(void)setForSpeakScreen:(char)arg1 ;
-(char)shouldOnlyIncludeElementsWithVisibleFrame;
-(char)shouldReturnScannerGroups;
-(char)forSpeakScreen;
-(char)shouldUseAllSubviews;
-(char)includeHiddenViews;
-(char)sorted;
-(char)ignoreObscuresScreen;
-(char)shouldIncludeStatusBarWindow;
@end
