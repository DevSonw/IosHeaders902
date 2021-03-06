/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:53 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class CAMetalLayer, CAEAGLLayer, NSUserDefaults, SKDisplayLink, NSObject, SKNode, SKTransition, SKScene, NSData, NSMutableDictionary, NSMapTable;

@interface SKView : UIView {

	SKCStats* _currentStats;
	SKCStats* _nextStats;
	SKCStats* _frameStats;
	SKCRenderer* _renderer;
	 _viewScale;
	 _viewTranslation;
	shared_ptr<jet_framebuffer>* _framebuffer;
	shared_ptr<jet_texture>* _frameBufferColorTexture;
	shared_ptr<jet_texture>* _frameBufferDepthStencilTexture;
	unsigned _colorRenderBuffer;
	unsigned _depthStencilRenderBuffer;
	shared_ptr<jet_fence>* _renderFence;
	CAMetalLayer* _metalLayer;
	CAEAGLLayer* _eaglLayer;
	NSUserDefaults* _skDefaults;
	char _needsInitialUpdate;
	char _didRunOnce;
	char _viewFramebufferIsValid;
	 _viewFramebufferPixelSize;
	char _isBackgrounded;
	char _allowsTransparency;
	char _priorResignActivePausedState;
	unsigned _frameInterval;
	SKDisplayLink* _displayLink;
	NSObject*<OS_dispatch_queue> _updateQueue;
	double _timePreviousUpdate;
	char _prefersLowPowerGPU;
	char _usesAsyncUpdateQueue;
	char _hasRenderedOnce;
	char _hasRenderedForCurrentUpdate;
	char _disableInput;
	char _mouseIsDown;
	SKNode* _nodeUnderCursor;
	SKTransition* _transition;
	SKScene* _nextScene;
	SKScene* _scene;
	char _paused;
	NSData* _spriteArrayHint;
	NSMutableDictionary* _viewRenderOptions;
	NSMapTable* _touchMap;
	float _prevBackingScaleFactor;
	NSObject*<OS_dispatch_queue> _renderQueue;
	NSObject*<OS_dispatch_semaphore> _renderSemaphore;
	int _queuedFrameCount;
	float _physicsDebugStrokeWidth;
	SKCRenderer* __layerBackedRenderer;
	CGSize _pixelSize;

}

@property (assign,getter=isPaused,nonatomic) char paused; 
@property (assign,nonatomic) char showsFPS; 
@property (assign,nonatomic) char showsDrawCount; 
@property (assign,nonatomic) char showsNodeCount; 
@property (assign,nonatomic) char showsQuadCount; 
@property (assign,nonatomic) char showsPhysics; 
@property (assign,nonatomic) char showsFields; 
@property (assign,getter=isAsynchronous,nonatomic) char asynchronous; 
@property (assign,nonatomic) char allowsTransparency; 
@property (assign,nonatomic) char ignoresSiblingOrder; 
@property (assign,nonatomic) char shouldCullNonVisibleNodes; 
@property (assign,nonatomic) int frameInterval; 
@property (nonatomic,readonly) SKScene * scene; 
@property (readonly) NSMutableDictionary * options; 
@property (assign,nonatomic) float physicsDebugStrokeWidth;                        //@synthesize physicsDebugStrokeWidth=_physicsDebugStrokeWidth - In the implementation block
@property (nonatomic,readonly) CGSize pixelSize;                                   //@synthesize pixelSize=_pixelSize - In the implementation block
@property (assign) SKCRenderer* _layerBackedRenderer;                              //@synthesize _layerBackedRenderer=__layerBackedRenderer - In the implementation block
+(Class)layerClass;
-(char)isAsynchronous;
-(char)isPaused;
-(void)setShowsFPS:(char)arg1 ;
-(void)setShowsNodeCount:(char)arg1 ;
-(void)setShowsDrawCount:(char)arg1 ;
-(void)setShowsQuadCount:(char)arg1 ;
-(void)set_showsGPUStats:(char)arg1 ;
-(void)set_showsCPUStats:(char)arg1 ;
-(void)setShowsPhysics:(char)arg1 ;
-(void)setShowsFields:(char)arg1 ;
-(void)setIgnoresSiblingOrder:(char)arg1 ;
-(char)ignoresSiblingOrder;
-(char)showsFPS;
-(char)showsNodeCount;
-(char)showsQuadCount;
-(char)showsDrawCount;
-(char)showsPhysics;
-(char)showsFields;
-(char)_showsCPUStats;
-(char)_showsGPUStats;
-(void)_showAllStats;
-(CGPoint)_viewTranslation;
-(void)willRenderContent;
-(id)archiveToFile:(id)arg1 ;
-(void)debugPrint;
-(SKCRenderer*)chooseViewRenderer;
-(float)_getViewContentsScale;
-(void)setShouldCullNonVisibleNodes:(char)arg1 ;
-(void)onInit;
-(void)_ensureRenderer;
-(void)setUpRenderCallback;
-(void)startRenderCallbacks;
-(void)CBApplicationWillResignActive;
-(void)CBApplicationDidBecomeActive;
-(void)_renderSynchronouslyForTime:(double)arg1 preRender:(/*^block*/id)arg2 postRender:(/*^block*/id)arg3 ;
-(id)getRenderOptions;
-(char)hasValidViewFramebuffer;
-(shared_ptr<jet_framebuffer>*)nextFramebuffer;
-(SKCNode*)getRootNode;
-(8)getViewport;
-(SCD_Struct_SK5)getViewTransform;
-(void)notifyWillRenderContent;
-(void)runOnce;
-(void)_vsyncRenderForTime:(double)arg1 preRender:(/*^block*/id)arg2 postRender:(/*^block*/id)arg3 ;
-(void)stopRenderCallbacks;
-(void)renderContent;
-(void)_reshape;
-(void)_renderToIOSurfaceID:(unsigned)arg1 scaleFactor:(float)arg2 asynchronous:(char)arg3 preRender:(/*^block*/id)arg4 postRender:(/*^block*/id)arg5 ;
-(void)remakeFramebuffer;
-(void)_renderContent;
-(char)shouldCullNonVisibleNodes;
-(void)renderForTime:(double)arg1 shouldBlock:(char)arg2 ;
-(void)set_usesAsyncUpdateQueue:(char)arg1 ;
-(char)_usesAsyncUpdateQueue;
-(CGPoint)convertPoint:(CGPoint)arg1 toScene:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromScene:(id)arg2 ;
-(void)remakeFramebuffer:(float)arg1 ;
-(float)alphaValue;
-(char)allowsTransparency;
-(void)setAllowsTransparency:(char)arg1 ;
-(void)presentScene:(id)arg1 transition:(id)arg2 ;
-(id)textureFromNode:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 updateQueue:(id)arg2 ;
-(void)writeContentsToPNG:(id)arg1 ;
-(void)renderToIOSurfaceID:(unsigned)arg1 withScaleFactor:(float)arg2 ;
-(void)_setUpdateQueue:(id)arg1 ;
-(id)textureFromNode:(id)arg1 crop:(CGRect)arg2 ;
-(void)set_viewScale:(float)arg1 ;
-(void)set_viewTranslation:(CGPoint)arg1 ;
-(float)physicsDebugStrokeWidth;
-(void)setPhysicsDebugStrokeWidth:(float)arg1 ;
-(SKCRenderer*)_layerBackedRenderer;
-(void)set_layerBackedRenderer:(SKCRenderer*)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_commonInit;
-(void)setFrameInterval:(int)arg1 ;
-(char)isOpaque;
-(id)snapshot;
-(int)frameInterval;
-(void)setPaused:(char)arg1 ;
-(NSMutableDictionary *)options;
-(void)_update:(double)arg1 ;
-(float)_viewScale;
-(void)setAsynchronous:(char)arg1 ;
-(CGSize)pixelSize;
-(SKScene *)scene;
-(void)presentScene:(id)arg1 ;
@end

