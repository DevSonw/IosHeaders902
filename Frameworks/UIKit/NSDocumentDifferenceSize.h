/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:34 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSDocumentDifferenceSize : NSObject {

	int _generationCount;
	int _changeCount;

}

@property (assign,nonatomic) int generationCount;              //@synthesize generationCount=_generationCount - In the implementation block
@property (assign,nonatomic) int changeCount;                  //@synthesize changeCount=_changeCount - In the implementation block
-(id)description;
-(int)changeCount;
-(void)setChangeCount:(int)arg1 ;
-(int)generationCount;
-(void)setGenerationCount:(int)arg1 ;
@end

