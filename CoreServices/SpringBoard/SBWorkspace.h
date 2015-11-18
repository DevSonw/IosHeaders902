/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class FBSDisplay, FBWorkspaceEventQueue, NSHashTable;

@interface SBWorkspace : NSObject {

	FBSDisplay* _display;
	FBWorkspaceEventQueue* _eventQueue;
	NSHashTable* _slaves;

}

@property (nonatomic,retain,readonly) FBSDisplay * display;                            //@synthesize display=_display - In the implementation block
@property (nonatomic,retain,readonly) FBWorkspaceEventQueue * eventQueue;              //@synthesize eventQueue=_eventQueue - In the implementation block
+(id)mainWorkspace;
-(id)createRequestForApplicationActivation:(id)arg1 options:(unsigned)arg2 ;
-(char)executeTransitionRequest:(id)arg1 ;
-(id)createRequestWithOptions:(unsigned)arg1 ;
-(char)requestTransitionWithOptions:(unsigned)arg1 builder:(/*^block*/id)arg2 validator:(/*^block*/id)arg3 ;
-(id)initWithDisplay:(id)arg1 eventQueue:(id)arg2 ;
-(char)_executeTransitionRequest:(id)arg1 options:(unsigned)arg2 validator:(/*^block*/id)arg3 ;
-(char)requestTransitionWithBuilder:(/*^block*/id)arg1 ;
-(char)executeTransitionRequest:(id)arg1 withValidator:(/*^block*/id)arg2 ;
-(id)transactionForTransitionRequest:(id)arg1 ;
-(void)addSlave:(id)arg1 ;
-(void)removeSlave:(id)arg1 ;
-(id)_slaveTransactionsForTransitionRequest:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(FBSDisplay *)display;
-(FBWorkspaceEventQueue *)eventQueue;
@end
