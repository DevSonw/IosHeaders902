/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FMFMapViewDelegateInternalDelegate <NSObject>
@required
-(UIEdgeInsets*)edgeInsets;
-(char)canSelectAnnotation:(id)arg1;
-(void)setShouldZoomToFitNewLocations:(char)arg1;
-(id)_internalAnnotationTintColor;
-(char)shouldZoomToFitMeAndLocations;
-(void)didSelectLocation:(id)arg1;
-(void)didDeselectLocation:(id)arg1;
-(void)regionWillChangeAnimated:(char)arg1;
-(void)regionDidChangeAnimated:(char)arg1;
-(void)reZoomToFit;
-(void)didUpdateUserLocation:(id)arg1;
-(void)mapViewDidFinishRenderingMap;
-(char)viewWillAppearCalled;
-(char)alwaysShowAccuracy;
-(id)annotationImageForAnnotation:(id)arg1 andHandle:(id)arg2;

@end
