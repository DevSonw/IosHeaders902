/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSMutableOrderedSet, ICDrawingUndoStack, NSUUID, TTVectorMultiTimestamp, NSDate, NSOrderedSet;

@interface ICDrawing : NSObject {

	NSMutableOrderedSet* _commands;
	NSMutableOrderedSet* _visibleCommands;
	int _orientation;
	CGRect _unrotatedBoundsInCommandSpace;
	CGRect _commandBounds;
	ICDrawingUndoStack* _undoStack;
	NSUUID* _replicaUUID;
	TTVectorMultiTimestamp* _timestamp;
	NSDate* _orientationTimestamp;

}

@property (nonatomic,readonly) NSUUID * replicaUUID;                            //@synthesize replicaUUID=_replicaUUID - In the implementation block
@property (nonatomic,retain) TTVectorMultiTimestamp * timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * commands;                         //@synthesize commands=_commands - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * visibleCommands; 
@property (assign,nonatomic) int orientation; 
@property (nonatomic,readonly) int imageOrientation; 
@property (nonatomic,retain) NSDate * orientationTimestamp;                     //@synthesize orientationTimestamp=_orientationTimestamp - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGRect unrotatedBoundsInCommandSpace;              //@synthesize unrotatedBoundsInCommandSpace=_unrotatedBoundsInCommandSpace - In the implementation block
@property (nonatomic,readonly) ICDrawingUndoStack * undoStack;                  //@synthesize undoStack=_undoStack - In the implementation block
@property (nonatomic,readonly) CGRect fullBounds; 
+(CGSize)platformFullSize;
+(CGSize)fullSizeForOrientation:(int)arg1 ;
+(CGAffineTransform)orientationTransform:(int)arg1 size:(CGSize)arg2 ;
+(CGAffineTransform)fullSizeOrientationTransform:(int)arg1 ;
+(CGSize)platformFullPixelSize;
-(CGRect)bounds;
-(id)init;
-(TTVectorMultiTimestamp *)timestamp;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)setTimestamp:(TTVectorMultiTimestamp *)arg1 ;
-(int)imageOrientation;
-(NSOrderedSet *)commands;
-(NSOrderedSet *)visibleCommands;
-(id)initWithData:(id)arg1 andReplicaID:(id)arg2 ;
-(void)invalidateBounds;
-(ICDrawingUndoStack *)undoStack;
-(void)incrementTimestampOfCommand:(id)arg1 ;
-(id)initWithReplicaID:(id)arg1 ;
-(CGSize)unrotatedFullSize;
-(CGRect)calculateCommandBounds;
-(CGRect)unrotatedBoundsInCommandSpace;
-(CGRect)commandBounds;
-(CGAffineTransform)orientationTransform;
-(void)setOrientationTimestamp:(NSDate *)arg1 ;
-(void)sortCommands;
-(NSUUID *)replicaUUID;
-(ICDrawingCommandID)commandIDForNewCommand;
-(void)setCommandIDForInsertion:(id)arg1 ;
-(NSDate *)orientationTimestamp;
-(CGSize)fullSize;
-(id)initWithCommands:(id)arg1 ;
-(id)mutableCommands;
-(void)addCommands:(id)arg1 ;
-(void)addNewCommand:(id)arg1 ;
-(unsigned)mergeWithDrawing:(id)arg1 ;
-(CGRect)fullBounds;
-(void)setUnrotatedBoundsInCommandSpace:(CGRect)arg1 ;
-(id)initWithData:(id)arg1 version:(unsigned)arg2 andReplicaID:(id)arg3 ;
-(id)serializeWithPathData:(char)arg1 toVersion:(unsigned*)arg2 ;
-(id)serializeWithPathData:(char)arg1 ;
-(id)initWithArchive:(const Drawing*)arg1 version:(unsigned)arg2 andReplicaID:(id)arg3 ;
-(unsigned)saveToArchive:(Drawing*)arg1 withPathData:(char)arg2 ;
@end
