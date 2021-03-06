/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface UIKBTextEditingTraits : NSObject {

	char _canToggleBoldface;
	char _canToggleItalics;
	char _canToggleUnderline;
	char _supportStyling;
	char _canCut;
	char _canCopy;
	char _canPaste;
	char _canMoveCursorLeft;
	char _canMoveCursorRight;
	char _isBold;
	char _isItalicized;
	char _isUnderlined;

}

@property (nonatomic,readonly) char isBold;                          //@synthesize isBold=_isBold - In the implementation block
@property (nonatomic,readonly) char isItalicized;                    //@synthesize isItalicized=_isItalicized - In the implementation block
@property (nonatomic,readonly) char isUnderlined;                    //@synthesize isUnderlined=_isUnderlined - In the implementation block
@property (nonatomic,readonly) char canToggleBoldface;               //@synthesize canToggleBoldface=_canToggleBoldface - In the implementation block
@property (nonatomic,readonly) char canToggleItalics;                //@synthesize canToggleItalics=_canToggleItalics - In the implementation block
@property (nonatomic,readonly) char canToggleUnderline;              //@synthesize canToggleUnderline=_canToggleUnderline - In the implementation block
@property (nonatomic,readonly) char supportStyling;                  //@synthesize supportStyling=_supportStyling - In the implementation block
@property (assign,nonatomic) char canCut;                            //@synthesize canCut=_canCut - In the implementation block
@property (nonatomic,readonly) char canCopy;                         //@synthesize canCopy=_canCopy - In the implementation block
@property (nonatomic,readonly) char canPaste;                        //@synthesize canPaste=_canPaste - In the implementation block
@property (nonatomic,readonly) char canMoveCursorLeft;               //@synthesize canMoveCursorLeft=_canMoveCursorLeft - In the implementation block
@property (nonatomic,readonly) char canMoveCursorRight;              //@synthesize canMoveCursorRight=_canMoveCursorRight - In the implementation block
+(id)traitsWithResponder:(id)arg1 keyMaskFlags:(unsigned)arg2 ;
-(id)initWithResponder:(id)arg1 keyMaskFlags:(unsigned)arg2 ;
-(char)canToggleBoldface;
-(char)canToggleItalics;
-(char)canToggleUnderline;
-(char)supportStyling;
-(char)canCut;
-(void)setCanCut:(char)arg1 ;
-(char)canCopy;
-(char)canPaste;
-(char)canMoveCursorLeft;
-(char)canMoveCursorRight;
-(char)isBold;
-(char)isItalicized;
-(char)isUnderlined;
@end

