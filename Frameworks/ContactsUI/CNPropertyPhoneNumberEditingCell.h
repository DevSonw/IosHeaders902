/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:44:03 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPropertySimpleEditingCell.h>

@class NSArray;

@interface CNPropertyPhoneNumberEditingCell : CNPropertySimpleEditingCell {

	NSArray* _previousValue;

}

@property (nonatomic,retain) NSArray * previousValue;              //@synthesize previousValue=_previousValue - In the implementation block
-(void)setPreviousValue:(NSArray *)arg1 ;
-(NSArray *)previousValue;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(SCD_Struct_CN6)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
@end
