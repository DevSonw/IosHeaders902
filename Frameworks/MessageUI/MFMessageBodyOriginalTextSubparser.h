/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:32:47 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFMessageBodySubparser.h>

@protocol MFMessageBodyElement_Private;
@class NSMutableArray;

@interface MFMessageBodyOriginalTextSubparser : MFMessageBodySubparser {

	NSMutableArray* _lastTextElements;
	id<MFMessageBodyElement_Private> _lastNonWhitespaceTextElement;
	/*^block*/id _foundTextBlock;
	/*^block*/id _foundWhitespaceBlock;
	char _foundText;
	char _foundForwardSeparator;

}
-(void)copyBlocks;
-(void)setFoundTextBlock:(/*^block*/id)arg1 ;
-(void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2 ;
-(void)messageBodyParserDidFinishParsing:(id)arg1 ;
-(void)_consumeTextElement:(id)arg1 isAttribution:(char)arg2 ;
-(void)_consumeAnyLastTextElementAsAttribution:(char)arg1 ;
-(void)setFoundWhitespaceBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

