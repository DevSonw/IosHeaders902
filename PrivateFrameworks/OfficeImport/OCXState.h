/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CXNamespace;

@interface OCXState : NSObject {

	int mXMLFormat;
	CXNamespace* mOCXRelationshipsNamespace;
	CXNamespace* mOCXDrawingNamespace;

}

@property (nonatomic,readonly) int xmlFormat; 
@property (nonatomic,retain) CXNamespace * OCXRelationshipsNamespace; 
@property (nonatomic,retain) CXNamespace * OCXDrawingNamespace; 
-(void)dealloc;
-(id)init;
-(int)xmlFormat;
-(void)setupNSForXMLFormat:(int)arg1 ;
-(id)OCXThemeRelationshipType;
-(void)setOCXRelationshipsNamespace:(CXNamespace *)arg1 ;
-(void)setOCXDrawingNamespace:(CXNamespace *)arg1 ;
-(id)OCXStylesRelationshipType;
-(id)OCXSharedStringsRelationshipType;
-(id)OCXDrawingRelationshipType;
-(id)OCXEndnotesRelationshipType;
-(id)OCXFontTableRelationshipType;
-(id)OCXFootnotesRelationshipType;
-(id)OCXCommentsRelationshipType;
-(id)OCXPivotTableRelationshipType;
-(id)OCXTableRelationshipType;
-(id)OCXSlideMasterRelationshipType;
-(id)OCXSlideLayoutRelationshipType;
-(id)OCXSlideRelationshipType;
-(id)OCXNotesSlideRelationshipType;
-(id)OCXCommentAuthorsRelationshipType;
-(id)OCXCustomXmlRelationshipType;
-(id)OCXLegacyDocTextInfoRelationshipType;
-(id)OCXThemeOverrideRelationshipType;
-(id)OCXVmlDrawingRelationshipType;
-(id)OCXNotesMasterRelationshipType;
-(id)OCXNumberingRelationshipType;
-(id)OCXPackagePresPropsRelationshipType;
-(id)OCXPackageViewPropsRelationshipType;
-(id)OCXTableStylesRelationshipType;
-(id)OCXSettingsRelationshipType;
-(CXNamespace *)OCXRelationshipsNamespace;
-(CXNamespace *)OCXDrawingNamespace;
-(void)setXmlFormat:(int)arg1 ;
@end
