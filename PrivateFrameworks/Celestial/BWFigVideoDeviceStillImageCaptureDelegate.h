/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BWFigVideoDeviceStillImageCaptureDelegate <NSObject>
@required
-(void)captureDeviceWillBeginStillImageCapture:(id)arg1;
-(void)captureDevice:(id)arg1 didCapturePreBracketedEV0ImageWithPTS:(SCD_Struct_BW2)arg2;
-(void)captureDevice:(id)arg1 didCompleteStillImageCaptureWithPTS:(SCD_Struct_BW2)arg2;
-(void)captureDevice:(id)arg1 stillImageCaptureError:(long)arg2;

@end

