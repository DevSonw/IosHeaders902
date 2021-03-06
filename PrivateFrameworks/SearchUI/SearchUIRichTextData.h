/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface SearchUIRichTextData : NSObject {

	NSString* _text;
	unsigned _textMaxLines;
	float _starRating;
	float _percentRating;
	NSArray* _icons;
	NSString* _contentAdvisory;
	NSArray* _formattedTextItems;
	NSString* _formattedTextDelimiter;

}

@property (nonatomic,copy) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) unsigned textMaxLines;                        //@synthesize textMaxLines=_textMaxLines - In the implementation block
@property (assign,nonatomic) float starRating;                             //@synthesize starRating=_starRating - In the implementation block
@property (assign,nonatomic) float percentRating;                          //@synthesize percentRating=_percentRating - In the implementation block
@property (nonatomic,retain) NSArray * icons;                              //@synthesize icons=_icons - In the implementation block
@property (nonatomic,copy) NSString * contentAdvisory;                     //@synthesize contentAdvisory=_contentAdvisory - In the implementation block
@property (nonatomic,copy) NSArray * formattedTextItems;                   //@synthesize formattedTextItems=_formattedTextItems - In the implementation block
@property (nonatomic,copy) NSString * formattedTextDelimiter;              //@synthesize formattedTextDelimiter=_formattedTextDelimiter - In the implementation block
-(unsigned)textMaxLines;
-(NSString *)formattedTextDelimiter;
-(NSArray *)formattedTextItems;
-(NSString *)contentAdvisory;
-(float)starRating;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setIcons:(NSArray *)arg1 ;
-(NSArray *)icons;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(void)setFormattedTextDelimiter:(NSString *)arg1 ;
-(void)setStarRating:(float)arg1 ;
-(float)percentRating;
-(id)initWithRichTextItem:(id)arg1 ;
-(char)hasContentToDisplay;
-(void)setFormattedTextItems:(NSArray *)arg1 ;
-(void)setTextMaxLines:(unsigned)arg1 ;
-(void)setPercentRating:(float)arg1 ;
@end

