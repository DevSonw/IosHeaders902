/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:44:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIImage, NSString, CNQuickActionsManager, UIView, CNContactStyle;

@interface CNQuickAction : NSObject {

	char _enabled;
	char _cached;
	char _dismissesWithAnimation;
	UIImage* _image;
	NSString* _title;
	NSString* _category;
	CNQuickActionsManager* _manager;
	NSString* _identifier;
	UIView* _sourceView;
	unsigned _score;
	/*^block*/id _performBlock;
	CNContactStyle* _previousStyle;

}

@property (assign,getter=isBackAction,nonatomic) char backAction; 
@property (nonatomic,retain) UIImage * image;                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * category;                                 //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) char enabled;                                        //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) CNQuickActionsManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * globalIdentifier; 
@property (assign,nonatomic,__weak) UIView * sourceView;                          //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) char cached;                                         //@synthesize cached=_cached - In the implementation block
@property (assign,nonatomic) char dismissesWithAnimation;                         //@synthesize dismissesWithAnimation=_dismissesWithAnimation - In the implementation block
@property (assign,nonatomic) unsigned score;                                      //@synthesize score=_score - In the implementation block
@property (nonatomic,copy) id performBlock;                                       //@synthesize performBlock=_performBlock - In the implementation block
@property (nonatomic,retain) CNContactStyle * previousStyle;                      //@synthesize previousStyle=_previousStyle - In the implementation block
+(id)defaultTitleForActionInCategory:(id)arg1 context:(int)arg2 ;
+(char)reallyPerform;
+(id)possibleTitlesForActionsInCategories:(id)arg1 context:(int)arg2 ;
+(id)actionWithTitle:(id)arg1 image:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)setManager:(CNQuickActionsManager *)arg1 ;
-(void)setPerformBlock:(id)arg1 ;
-(void)setCached:(char)arg1 ;
-(void)setDismissesWithAnimation:(char)arg1 ;
-(NSString *)globalIdentifier;
-(id)_coreDuetInteractionMechanisms;
-(id)_coreDuetValue;
-(id)imageForContext:(int)arg1 ;
-(id)imageTintColor;
-(id)defaultTitleForContext:(int)arg1 ;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)performBlock;
-(char)matchesDuetInteraction:(id)arg1 ;
-(id)coloredImage;
-(id)titleForContext:(int)arg1 ;
-(id)subtitleForContext:(int)arg1 ;
-(char)cached;
-(char)dismissesWithAnimation;
-(CNContactStyle *)previousStyle;
-(void)setPreviousStyle:(CNContactStyle *)arg1 ;
-(char)isBackAction;
-(void)setBackAction:(char)arg1 ;
-(CNQuickActionsManager *)manager;
-(unsigned)score;
-(char)enabled;
-(void)cancel;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSString *)identifier;
-(NSString *)title;
-(void)setEnabled:(char)arg1 ;
-(UIImage *)image;
-(void)setIdentifier:(NSString *)arg1 ;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(void)perform;
-(void)setScore:(unsigned)arg1 ;
@end
