/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITextReplacementGenerator.h>

@class NSTextAlternatives;

@interface UITextReplacementGeneratorForDictation : UITextReplacementGenerator {

	NSTextAlternatives* _alternatives;

}

@property (nonatomic,readonly) NSTextAlternatives * alternatives;              //@synthesize alternatives=_alternatives - In the implementation block
-(id)replacements;
-(id)initWithAlternatives:(id)arg1 stringToReplace:(id)arg2 replacementRange:(id)arg3 ;
-(NSTextAlternatives *)alternatives;
@end

