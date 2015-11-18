/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:45:50 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLDisplayBundle.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/QLScrubViewDataSource.h>
#import <UIKit/UIWebPDFViewHandlerDelegate.h>

@class UIWebView, UIView, QLPreviewConverter, NSURLRequest, QLScrubView, NSMutableArray, NSData, QLPDFHanderDelegateForwarder, NSString;

@interface QLWebViewDisplayBundle : QLDisplayBundle <UIWebViewDelegate, UIScrollViewDelegate, QLScrubViewDataSource, UIWebPDFViewHandlerDelegate> {

	UIWebView* _webView;
	UIView* _accessoryView;
	QLPreviewConverter* _previewConverter;
	NSURLRequest* _previewRequest;
	unsigned _isLoadedDuringZoom : 1;
	unsigned _isHTMLContent : 1;
	unsigned _isXMLContent : 1;
	unsigned _isPDFContent : 1;
	unsigned _isSpreadsheetContent : 1;
	unsigned _isPlainText : 1;
	unsigned _isRTFContent : 1;
	unsigned _isCSVContent : 1;
	unsigned _loadStarted : 1;
	float _defaultZoom;
	QLScrubView* _scrubView;
	int _lastPage;
	char _inScroll;
	char _webViewReadyForThumbnailing;
	NSMutableArray* _htmlSlideNodes;
	NSData* _pdfPreviewData;
	QLPDFHanderDelegateForwarder* _forwarder;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelLoad;
-(void)setPreviewItem:(id)arg1 ;
-(void)setOverlayHidden:(char)arg1 duration:(double)arg2 ;
-(void)loadWithHints:(id)arg1 ;
-(void)setOrbMode:(unsigned)arg1 ;
-(char)needsContentInset;
-(void)setNavigationBarVerticalOffset:(float)arg1 ;
-(char)acceptControllerTouch:(id)arg1 fromGestureRecognizer:(id)arg2 ;
-(int)airPlayMode;
-(id)pdfPreviewData;
-(id)printPageHelper;
-(id)gestureRecognizersForFullScreenDisplay;
-(void)_tearDownWebView;
-(void)updateFrameWithOrb;
-(id)_getWebView:(char)arg1 ;
-(void)_updateScrubberForTraitCollection:(id)arg1 ;
-(void)_hideScrubberIfNeeded:(double)arg1 ;
-(void)_showScrubberIfNeeded:(double)arg1 ;
-(id)_copyPreviewConverterForPreviewItem:(id)arg1 ;
-(CGPDFDocumentRef)_getCGPDFDocumentRef;
-(id)_scrubView:(char)arg1 ;
-(void)_hideOverlayDidEnd:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(id)previewConverter;
-(id)_htmlSlideNodes;
-(CGSize)pageSizeAtIndex:(int)arg1 ;
-(id)_htmlPageXPath;
-(void)scrollToPage:(unsigned)arg1 ;
-(int)numberOfPagesInScrubView:(id)arg1 ;
-(id)scrubView:(id)arg1 thumbnailOperationForPageAtIndex:(unsigned)arg2 ;
-(CGSize)scrubView:(id)arg1 pageSizeAtIndex:(unsigned)arg2 ;
-(void)scrubView:(id)arg1 didSelectPageAtIndex:(unsigned)arg2 ;
-(void)userInteractedWithScrubView:(id)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)scrollView;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(int)pageCount;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)uiWebView:(id)arg1 didFirstLayoutInFrame:(id)arg2 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4 ;
-(id)alertViewForUIWebPDFViewHandler:(id)arg1 ;
-(void)pdfViewHandlerCompletedLayoutAndIsUnlocked:(id)arg1 ;
-(CGPoint)originForPDFPageLabelViewWithHandler:(id)arg1 proposedOrigin:(CGPoint)arg2 ;
-(unsigned)currentPageNumber;
@end
