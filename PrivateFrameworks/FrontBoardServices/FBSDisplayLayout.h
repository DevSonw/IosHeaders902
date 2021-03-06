/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableArray, FBSDisplay, NSArray, NSString;

@interface FBSDisplayLayout : NSObject <BSXPCCoding, BSDescriptionProviding> {

	NSMutableArray* _elements;
	FBSDisplay* _display;
	unsigned _displayType;
	int _backlightLevel;
	int _interfaceOrientation;
	CGRect _bounds;
	CGRect _referenceBounds;

}

@property (nonatomic,retain) FBSDisplay * display;                   //@synthesize display=_display - In the implementation block
@property (assign,nonatomic) unsigned displayType;                   //@synthesize displayType=_displayType - In the implementation block
@property (assign,nonatomic) int displayBacklightLevel;              //@synthesize backlightLevel=_backlightLevel - In the implementation block
@property (nonatomic,copy) NSArray * elements;                       //@synthesize elements=_elements - In the implementation block
@property (assign,nonatomic) int interfaceOrientation;               //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) CGRect bounds;                          //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) CGRect referenceBounds;               //@synthesize referenceBounds=_referenceBounds - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeElement:(id)arg1 ;
-(CGRect)bounds;
-(void)dealloc;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(int)interfaceOrientation;
-(void)setDisplayType:(unsigned)arg1 ;
-(NSArray *)elements;
-(void)setInterfaceOrientation:(int)arg1 ;
-(FBSDisplay *)display;
-(unsigned)displayType;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(CGRect)referenceBounds;
-(void)setElements:(NSArray *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setDisplayBacklightLevel:(int)arg1 ;
-(void)finalizeLayout;
-(id)_initWithElements:(id)arg1 ;
-(void)_sortElements;
-(void)addElement:(id)arg1 ;
-(void)setDisplay:(FBSDisplay *)arg1 ;
-(int)displayBacklightLevel;
@end

