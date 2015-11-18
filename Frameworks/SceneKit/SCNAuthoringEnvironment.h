/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCNSceneRenderer;
#import <SceneKit/SceneKit-Structs.h>
@class NSSet, NSMutableOrderedSet, NSArray, NSMutableArray, SCNManipulator, NSIndexSet, NSOrderedSet;

@interface SCNAuthoringEnvironment : NSObject {

	C3DEngineContextRef _engineContext;
	id<SCNSceneRenderer> _sceneRenderer;
	_C3DFXProgram* _noColorProgram;
	_C3DFXProgram* _colorOnlyProgram;
	_C3DFXProgram* _colorAndTextureProgram;
	_C3DFXProgram* _lightProbesProgram;
	_C3DFXProgram* _wireframeProgram;
	SCD_Struct_SC77* _logsInfo;
	SCD_Struct_SC77* _boldLogsInfo;
	SCD_Struct_SC77* _upArrowInfo;
	SCD_Struct_SC77* _xyQuadrantInfo;
	SCD_Struct_SC77* _xyQuadrantRingInfo;
	SCD_Struct_SC77* _dynamicLinesInfo;
	SCD_Struct_SC77* _dynamicTrianglesInfo;
	SCD_Struct_SC77* _overlayDynamicLinesInfo;
	SCD_Struct_SC77* _overlayDynamicTriangleInfo;
	SCD_Struct_SC77* _textInfo;
	SCD_Struct_SC77* _lightProbesInfo;
	SCD_Struct_SC79* _normalTextInfo;
	SCD_Struct_SC79* _boldTextInfo;
	C3DRasterizerStatesRef _depthOnCullOnStates;
	C3DRasterizerStatesRef _depthOffCullOnStates;
	C3DRasterizerStatesRef _depthOnCullOffStates;
	C3DRasterizerStatesRef _depthOffCullOffStates;
	const void* _arrowIndicesOffset;
	unsigned short _arrowIndicesCount;
	const void* _quadrantIndicesOffset;
	unsigned short _quadrantIndicesCount;
	const void* _quadrantRingIndicesOffset;
	unsigned short _quadrantRingIndicesCount;
	int _authoringDisplayMask;
	unsigned _hasLighting : 1;
	char _shouldSnapOnGrid;
	char _shouldSnapToAlign;
	char _isEditingSubComponent;
	char _selectionIsReadonly;
	Class _componentType;
	int _editingSpace;
	char _graphicalSelectionEnabled;
	 _selectionP0;
	 _selectionP1;
	char _selecting;
	char _surroundToSelect;
	NSSet* _initialSelection;
	NSSet* _initialSubSelection;
	NSMutableOrderedSet* _selection;
	NSMutableOrderedSet* _subSelection;
	NSArray* _selectedNodes;
	float _lastGridDistance;
	float _gridUnit;
	NSMutableArray* _visibleManipulableItems;
	void* _wireframeRenderer;
	SCD_Struct_SC81* _statisticsInfo;
	float _drawScale;
	SCNManipulator* _manipulator;
	_C3DFXPass* _pass;
	id _delegate;

}

@property (readonly) id<SCNSceneRenderer> sceneRenderer; 
@property (nonatomic,readonly) NSArray * selectedNodes; 
@property (nonatomic,readonly) char isEditingSubComponent;                                     //@synthesize isEditingSubComponent=_isEditingSubComponent - In the implementation block
@property (assign,nonatomic) Class componentType; 
@property (nonatomic,readonly) NSIndexSet * subSelectionIndexes; 
@property (nonatomic,retain) NSOrderedSet * subSelection; 
@property (assign,nonatomic) char selectionIsReadonly; 
@property (nonatomic,readonly) SCNManipulator * manipulator; 
@property (assign,nonatomic) char shouldSnapOnGrid;                                            //@synthesize shouldSnapOnGrid=_shouldSnapOnGrid - In the implementation block
@property (assign,nonatomic) char shouldSnapToAlign;                                           //@synthesize shouldSnapToAlign=_shouldSnapToAlign - In the implementation block
@property (assign,nonatomic) char graphicalSelectionEnabled;                                   //@synthesize graphicalSelectionEnabled=_graphicalSelectionEnabled - In the implementation block
@property (assign,nonatomic) char surroundToSelect;                                            //@synthesize surroundToSelect=_surroundToSelect - In the implementation block
@property (assign,nonatomic) int authoringDisplayMask; 
@property (nonatomic,readonly) float gridUnit;                                                 //@synthesize gridUnit=_gridUnit - In the implementation block
@property (assign,nonatomic) int editingSpace;                                                 //@synthesize editingSpace=_editingSpace - In the implementation block
@property (nonatomic,readonly) SCNMatrix4 viewMatrix; 
@property (assign,nonatomic,__weak) id<SCNAuthoringEnvironmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)authoringEnvironmentForSceneRenderer:(id)arg1 ;
+(int)defaultAuthoringDisplayMask;
-(int)editingSpace;
-(float)gridUnit;
-(char)shouldSnapToAlign;
-(char)shouldSnapOnGrid;
-(id<SCNSceneRenderer>)sceneRenderer;
-(void)setAuthoringDisplayMask:(int)arg1 ;
-(int)authoringDisplayMask;
-(char)didTapAtPoint:(CGPoint)arg1 ;
-(id)_initWithEngineContext:(C3DEngineContextRef)arg1 ;
-(void)setSubSelection:(NSOrderedSet *)arg1 ;
-(void)_updateManipulatorTargets;
-(void)beginEditingNodes:(id)arg1 ;
-(NSOrderedSet *)subSelection;
-(NSIndexSet *)subSelectionIndexes;
-(char)selectionIsReadonly;
-(void)setSelectionIsReadonly:(char)arg1 ;
-(SCNManipulator *)manipulator;
-(void)cancelEdition;
-(void)beginEditingNode:(id)arg1 ;
-(void)beginEditingNodeComponents:(id)arg1 ;
-(void)saveInitialSelection;
-(void)drawLineFromPoint:(SCNVector3)arg1 toPoint:(SCNVector3)arg2 color:(id)arg3 ;
-(void)drawString:(id)arg1 atPoint:(CGPoint)arg2 color:(id)arg3 ;
-(char)isEditingSubComponent;
-(void)setShouldSnapOnGrid:(char)arg1 ;
-(void)setShouldSnapToAlign:(char)arg1 ;
-(void)setEditingSpace:(int)arg1 ;
-(char)graphicalSelectionEnabled;
-(void)setGraphicalSelectionEnabled:(char)arg1 ;
-(char)surroundToSelect;
-(void)setSurroundToSelect:(char)arg1 ;
-(void)setDelegate:(id<SCNAuthoringEnvironmentDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SCNAuthoringEnvironmentDelegate>)delegate;
-(id)selectedItems;
-(Class)componentType;
-(void)setComponentType:(Class)arg1 ;
-(NSArray *)selectedNodes;
-(SCNMatrix4)viewMatrix;
@end
