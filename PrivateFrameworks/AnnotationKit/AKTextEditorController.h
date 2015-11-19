/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/NSTextStorageDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol AKTextAnnotationProtocol;
@class UITextView, AKAnnotation, AKController, AKPageController, NSTextStorage, NSUndoManager, NSString;

@interface AKTextEditorController : NSObject <NSTextStorageDelegate, UITextViewDelegate> {

	UITextView* _textView;
	AKAnnotation*<AKTextAnnotationProtocol> _annotation;
	AKController* _controller;
	AKPageController* _pageController;
	NSTextStorage* _textStorage;
	float _renderingTextStorageScaleFactor;
	NSUndoManager* _textViewUndoManager;
	CGPoint _startingContentInset;

}

@property (nonatomic,readonly) char isEditing; 
@property (retain) UITextView * textView;                                           //@synthesize textView=_textView - In the implementation block
@property (__weak) AKAnnotation*<AKTextAnnotationProtocol> annotation;              //@synthesize annotation=_annotation - In the implementation block
@property (__weak) AKController * controller;                                       //@synthesize controller=_controller - In the implementation block
@property (__weak) AKPageController * pageController;                               //@synthesize pageController=_pageController - In the implementation block
@property (retain) NSTextStorage * textStorage;                                     //@synthesize textStorage=_textStorage - In the implementation block
@property (assign) float renderingTextStorageScaleFactor;                           //@synthesize renderingTextStorageScaleFactor=_renderingTextStorageScaleFactor - In the implementation block
@property (retain) NSUndoManager * textViewUndoManager;                             //@synthesize textViewUndoManager=_textViewUndoManager - In the implementation block
@property (assign) CGPoint startingContentInset;                                    //@synthesize startingContentInset=_startingContentInset - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_performBlockOnMainThread:(/*^block*/id)arg1 ;
-(void)_registerForKeyboardNotifications;
-(void)_unregisterForKeyboardNotifications;
-(id)initWithController:(id)arg1 ;
-(void)dealloc;
-(char)isEditing;
-(void)setTextView:(UITextView *)arg1 ;
-(NSTextStorage *)textStorage;
-(void)endEditing;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(UITextView *)textView;
-(AKPageController *)pageController;
-(void)setPageController:(AKPageController *)arg1 ;
-(AKAnnotation*<AKTextAnnotationProtocol>)annotation;
-(void)setAnnotation:(AKAnnotation*<AKTextAnnotationProtocol>)arg1 ;
-(void)setTextStorage:(NSTextStorage *)arg1 ;
-(void)updateForTextAttributeChange;
-(void)commitToModelWithoutEndingEditing;
-(void)beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(char)arg3 ;
-(void)_beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(char)arg3 ;
-(void)_commitToModelWithoutEndingEditing;
-(void)_endEditing;
-(void)setTextViewUndoManager:(NSUndoManager *)arg1 ;
-(CGRect)_editorFrameForTextBoundsInModel:(CGRect)arg1 ;
-(void)setRenderingTextStorageScaleFactor:(float)arg1 ;
-(float)renderingTextStorageScaleFactor;
-(void)_adjustEditorToFitAnnotation:(id)arg1 withText:(id)arg2 ;
-(void)_adjustAnnotationFrameToFitText;
-(void)_returnScrollViewAfterShownKeyboard;
-(void)_updateTextView:(id)arg1 withFrame:(CGRect)arg2 andOrientation:(int)arg3 additionalRotation:(float)arg4 ;
-(void)_adjustScrollViewForShownKeyboardRect:(CGRect)arg1 ;
-(void)setStartingContentInset:(CGPoint)arg1 ;
-(CGPoint)startingContentInset;
-(NSUndoManager *)textViewUndoManager;
@end
