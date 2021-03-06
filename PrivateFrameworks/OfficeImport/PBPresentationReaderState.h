/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:44 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TCCancelDelegate;
#import <OfficeImport/OfficeImport-Structs.h>
@class PDPresentation, ESDRoot, ESDContainer, NSMutableArray, OITSUNoCopyDictionary, PBOfficeArtReaderState, PDSlideBase, PBOutlineBulletDictionary, ESDObject, PBSlideState, NSMutableDictionary;

@interface PBPresentationReaderState : NSObject {

	PptBinaryReader* mPptBinaryReader;
	PDPresentation* mTgtPresentation;
	ESDRoot* mDocumentRoot;
	ESDContainer* mSrcSlideListHolder;
	ChVector<int>* mCurrentSlideTextBlockStartIndexVector;
	unsigned long mSrcSlideId;
	NSMutableArray* mSlideIndexes;
	OITSUNoCopyDictionary* mSlideMasterToMasterStyles;
	CFDictionaryRef mHyperlinkMap;
	PBOfficeArtReaderState* mOfficeArtState;
	NSMutableArray* mFontEntities;
	PDSlideBase* mTgtSlide;
	char mHasCharacterPropertyBulletIndex;
	unsigned mBulletIndex;
	PBOutlineBulletDictionary* mPlaceholderBulletStyles;
	PBOutlineBulletDictionary* mPlaceholderMacCharStyles;
	ESDObject* mCurrentBulletStyle;
	ESDObject* mCurrentMacCharStyle;
	ChVector<PBReaderMasterStyleInfo>* mSrcDocMasterStyleInfoVector;
	ChVector<PBReaderMasterStyleInfo>* mSrcCurrentMasterStyleInfoVector;
	PBSlideState* mSlideState;
	id<TCCancelDelegate> mCancel;
	char mHasSlideNumberPlaceholder;
	NSMutableDictionary* mTargetShapeToSourceTextBoxContainerHolderMap;

}

@property (assign) ESDContainer * sourceSlideListHolder; 
@property (nonatomic,retain) id<TCCancelDelegate> cancelDelegate; 
@property (assign) char hasSlideNumberPlaceholder; 
-(void)dealloc;
-(char)isCancelled;
-(id)officeArtState;
-(PptBinaryReader*)reader;
-(void)setCancelDelegate:(id<TCCancelDelegate>)arg1 ;
-(id<TCCancelDelegate>)cancelDelegate;
-(void)resetSlideState;
-(id)slideState;
-(id)documentRoot;
-(id)sourceTextBoxContainerHolderForTargetShape:(id)arg1 ;
-(void)setSourceTextBoxContainerHolder:(id)arg1 forTargetShape:(id)arg2 ;
-(void)setHasSlideNumberPlaceholder:(char)arg1 ;
-(ChVector<int>*)currentSlideTextBlockStartIndexVector;
-(ESDContainer *)sourceSlideListHolder;
-(void)setCurrentTextType:(int)arg1 placeholderIndex:(unsigned long)arg2 ;
-(id)tgtPresentation;
-(id)tgtSlide;
-(id)initWithReader:(PptBinaryReader*)arg1 tgtPresentation:(id)arg2 ;
-(void)setDocumentRoot:(id)arg1 ;
-(void)addFontEntity:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4 ;
-(PBReaderMasterStyleInfo*)docSourceMasterStyleInfoOfType:(int)arg1 ;
-(void)setCurrentSourceMasterStyleInfoVector:(ChVector<PBReaderMasterStyleInfo>*)arg1 ;
-(void)setSourceSlideListHolder:(ESDContainer *)arg1 ;
-(void)setSourceSlideId:(unsigned long)arg1 ;
-(void)setCurrentBulletStyle:(id)arg1 macCharStyle:(id)arg2 ;
-(unsigned)numberOfSlideIndexes;
-(void)addSlideIndex:(unsigned)arg1 ;
-(unsigned)getSlideIndexAt:(unsigned)arg1 ;
-(id)slideIndexesRef;
-(unsigned)fontEntityCount;
-(id)fontEntityAtIndex:(unsigned)arg1 ;
-(void)setTgtSlide:(id)arg1 ;
-(char)hasCharacterPropertyBulletIndex;
-(void)setHasCharacterPropertyBulletIndex:(char)arg1 ;
-(unsigned)bulletIndex;
-(void)setBulletIndex:(unsigned)arg1 ;
-(void)setPlaceholderBulletStyles:(id)arg1 ;
-(void)setPlaceholderMacCharStyles:(id)arg1 ;
-(id)currentBulletStyle;
-(id)currentMacCharStyle;
-(char)hasCurrentSourceMasterStyleInfoVector;
-(id)hyperlinkInfoWithId:(unsigned long)arg1 createIfAbsent:(char)arg2 ;
-(char)hasSlideNumberPlaceholder;
-(PBReaderMasterStyleInfo*)currentSourceMasterStyleInfoOfType:(int)arg1 ;
-(void)setMasterStyles:(id)arg1 slideMaster:(id)arg2 ;
-(id)masterStyles:(id)arg1 ;
@end

