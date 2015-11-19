/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableIndexSet, NSIndexSet;

@interface PLImportSessionInfo : NSObject {

	NSMutableIndexSet* _importIndexes;
	NSMutableIndexSet* _importInProgressIndexes;
	NSMutableIndexSet* _importErrorIndexes;
	NSMutableIndexSet* _importCompleteIndexes;
	char _importComplete;
	char _importStopped;
	char _importingSelection;

}

@property (assign,nonatomic) char importComplete;                                  //@synthesize importComplete=_importComplete - In the implementation block
@property (assign,nonatomic) char importStopped;                                   //@synthesize importStopped=_importStopped - In the implementation block
@property (nonatomic,retain,readonly) NSIndexSet * importIndexes;                  //@synthesize importIndexes=_importIndexes - In the implementation block
@property (nonatomic,retain,readonly) NSIndexSet * inProgressIndexes;              //@synthesize importInProgressIndexes=_importInProgressIndexes - In the implementation block
@property (nonatomic,retain,readonly) NSIndexSet * errorIndexes;                   //@synthesize importErrorIndexes=_importErrorIndexes - In the implementation block
@property (nonatomic,retain,readonly) NSIndexSet * completedIndexes;               //@synthesize importCompleteIndexes=_importCompleteIndexes - In the implementation block
@property (assign,nonatomic) char importingSelection;                              //@synthesize importingSelection=_importingSelection - In the implementation block
-(void)dealloc;
-(void)removeIndex:(unsigned)arg1 ;
-(void)shiftIndexesStartingAtIndex:(unsigned)arg1 by:(unsigned)arg2 ;
-(NSIndexSet *)importIndexes;
-(NSIndexSet *)completedIndexes;
-(NSIndexSet *)errorIndexes;
-(NSIndexSet *)inProgressIndexes;
-(char)_isImportCompleteForIndex:(unsigned)arg1 ;
-(id)initWithImportIndexes:(id)arg1 ;
-(void)addIndexToImport:(unsigned)arg1 ;
-(void)beginImportForIndex:(unsigned)arg1 ;
-(void)completeImportForIndex:(unsigned)arg1 error:(char)arg2 ;
-(char)importComplete;
-(void)setImportComplete:(char)arg1 ;
-(char)importStopped;
-(void)setImportStopped:(char)arg1 ;
-(char)importingSelection;
-(void)setImportingSelection:(char)arg1 ;
@end
