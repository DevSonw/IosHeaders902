/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/WebPolicyDelegate.h>
#import <UIKit/UITextInput.h>
#import <UIKit/UITextLinkInteraction.h>
#import <UIKit/UITextInputTraits.h>

@class WebFrame, DOMHTMLElement, UITextInteractionAssistant, UIWebDocumentView, UIFont, UIColor, NSString, NSAttributedString, UITextRange, NSDictionary, UITextPosition, UIView;

@interface UITextContentView : UIView <WebPolicyDelegate, UITextInput, UITextLinkInteraction, UITextInputTraits> {

	id m_delegate;
	WebFrame* m_frame;
	DOMHTMLElement* m_body;
	int m_marginTop;
	UIEdgeInsets m_selectionInset;
	float m_bottomBufferHeight;
	char m_editable;
	char m_editing;
	char m_becomesEditableWithGestures;
	char m_becomingFirstResponder;
	char m_reentrancyGuard;
	char m_scrollsSelectionOnWebDocumentChanges;
	char m_hasExplicitTextAlignment;
	char m_allowsEditingTextAttributes;
	char m_usesAttributedText;
	UITextInteractionAssistant* m_interactionAssistant;
	UIWebDocumentView* m_webView;
	UIFont* m_font;
	UIColor* m_textColor;
	int m_textAlignment;

}

@property (assign,nonatomic,__weak) id<UITextContentViewDelegate> delegate; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) int textAlignment; 
@property (assign,nonatomic) NSRange selectedRange; 
@property (assign,getter=isEditable,nonatomic) char editable; 
@property (assign,nonatomic) UIEdgeInsets selectionInset; 
@property (assign,nonatomic) char scrollsSelectionOnWebDocumentChanges; 
@property (assign,nonatomic) char allowsEditingTextAttributes; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (assign,getter=isEditing,nonatomic) char editing; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) int selectionAffinity; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UITextContentViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)setBounds:(CGRect)arg1 ;
-(id<UITextContentViewDelegate>)delegate;
-(void)setTextAlignment:(int)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(char)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)undoManager;
-(char)resignFirstResponder;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)increaseSize:(id)arg1 ;
-(void)decreaseSize:(id)arg1 ;
-(char)becomeFirstResponder;
-(char)isEditable;
-(void)_scrollViewWillBeginDragging;
-(void)_scrollViewDidEndDraggingWithDeceleration:(char)arg1 ;
-(void)_scrollViewDidEndDecelerating;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(char)canBecomeFirstResponder;
-(char)isFirstResponder;
-(void)didMoveToSuperview;
-(void)_didScroll;
-(id)_automationValue;
-(NSAttributedString *)attributedText;
-(UIFont *)font;
-(char)isEditing;
-(void)setEditing:(char)arg1 ;
-(id)interactionAssistant;
-(id)selectionView;
-(char)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(char)arg3 ;
-(char)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(char)keyboardInputShouldDelete:(id)arg1 ;
-(char)keyboardInputChanged:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)scrollSelectionToVisible:(char)arg1 ;
-(id)textInputTraits;
-(UIColor *)textColor;
-(CGRect)_selectionClipRect;
-(void)cancelAutoscroll;
-(NSRange)selectedRange;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(int)textAlignment;
-(UITextPosition *)beginningOfDocument;
-(UITextPosition *)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)textInRange:(id)arg1 ;
-(id<UITextInputDelegate>)inputDelegate;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(char)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(UITextRange *)selectedTextRange;
-(UITextRange *)markedTextRange;
-(NSDictionary *)markedTextStyle;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)unmarkText;
-(id)positionFromPosition:(id)arg1 offset:(int)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 ;
-(int)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(int)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2 ;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(id<UITextInputTokenizer>)tokenizer;
-(int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2 ;
-(void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(id)insertDictationResultPlaceholder;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(char)arg2 ;
-(id)metadataDictionariesForDictationResults;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(CGRect)visibleRect;
-(id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2 ;
-(int)selectionAffinity;
-(void)setSelectionAffinity:(int)arg1 ;
-(void)startAutoscroll:(CGPoint)arg1 ;
-(void)selectAll;
-(NSRange)selectionRange;
-(char)hasMarkedText;
-(char)canResignFirstResponder;
-(id)_keyboardResponder;
-(char)_restoreFirstResponder;
-(void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(char)arg2 ;
-(void)setAllowsEditingTextAttributes:(char)arg1 ;
-(void)setEditable:(char)arg1 ;
-(void)setDataDetectorTypes:(unsigned)arg1 ;
-(char)allowsEditingTextAttributes;
-(unsigned)dataDetectorTypes;
-(id)webView;
-(id)styleString;
-(id)_proxyTextInput;
-(void)webViewDidChange:(id)arg1 ;
-(void)updateContentEditableAttribute:(char)arg1 ;
-(void)keyboardDidShow:(id)arg1 ;
-(void)cancelDataDetectorsWithWebLock;
-(void)setSelectionChangeCallbacksDisabled:(char)arg1 ;
-(void)performBecomeEditableTasks;
-(void)selectAll:(id)arg1 ;
-(void)setSelectionToEnd;
-(CGRect)visibleTextRect;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)replace:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(void)_lookup:(CGPoint)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(id)undoManagerForWebView:(id)arg1 ;
-(CGRect)rectForScrollToVisible;
-(void)ensureSelection;
-(char)hasSelection;
-(char)shouldStartDataDetectors;
-(void)startDataDetectorsWithWebLock;
-(void)forwardInvocation:(id)arg1 ;
-(void)setContentToHTMLString:(id)arg1 ;
-(void)recalculateStyle;
-(void)resetDataDetectorsResultsWithWebLock;
-(unsigned)_allowedLinkTypes;
-(void)cancelInteractionWithLink;
-(int)selectionGranularity;
-(void)setSelectionGranularity:(int)arg1 ;
-(char)mightHaveLinks;
-(void)tapLinkAtPoint:(CGPoint)arg1 ;
-(char)isInteractingWithLink;
-(void)startInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(char)willInteractWithLinkAtPoint:(CGPoint)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(id)initWithFrame:(CGRect)arg1 webView:(id)arg2 ;
-(CGPoint)constrainedPoint:(CGPoint)arg1 ;
-(void)updateSelection;
-(id)selectedText;
-(void)select:(id)arg1 ;
-(void)_promptForReplace:(id)arg1 ;
-(void)_transliterateChinese:(id)arg1 ;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)documentFragmentForPasteboardItemAtIndex:(int)arg1 ;
-(void)setSelectionToStart;
-(CGRect)rectForSelection:(NSRange)arg1 ;
-(id)contentAsHTMLString;
-(char)becomesEditableWithGestures;
-(void)setBecomesEditableWithGestures:(char)arg1 ;
-(int)marginTop;
-(void)setMarginTop:(int)arg1 ;
-(void)scrollRangeToVisible:(NSRange)arg1 ;
-(id)automaticallySelectedOverlay;
-(void)setBottomBufferHeight:(float)arg1 ;
-(float)bottomBufferHeight;
-(void)displayScrollerIndicators;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(id)fontForCaretSelection;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1 ;
-(CGRect)caretRectForVisiblePosition:(id)arg1 ;
-(CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)arg1 ;
-(unsigned)offsetInMarkedTextForSelection:(id)arg1 ;
-(void)setScrollsSelectionOnWebDocumentChanges:(char)arg1 ;
-(UIEdgeInsets)selectionInset;
-(char)scrollsSelectionOnWebDocumentChanges;
-(void)_sizeChanged;
-(void)performScrollSelectionToVisible:(char)arg1 ;
-(void)_removeAttribute:(id)arg1 fromString:(id)arg2 andSetPropertyWith:(SEL)arg3 usingValueClass:(Class)arg4 ;
-(void)_removeTextViewPropertiesFromText:(id)arg1 ;
-(void)_hideSelectionCommands;
-(void)setContentToAttributedString:(id)arg1 ;
-(id)contentAsAttributedString;
-(void)setSelectionInset:(UIEdgeInsets)arg1 ;
@end

