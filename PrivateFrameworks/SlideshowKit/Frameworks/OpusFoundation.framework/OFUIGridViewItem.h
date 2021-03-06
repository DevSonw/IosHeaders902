/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/OFUIWindowDraggingPasteboard.h>

@class NSString;

@interface OFUIGridViewItem : NSObject <OFUIWindowDraggingPasteboard> {

	id _object;
	char _highlighted;
	char _selected;

}

@property (nonatomic,retain) id object;                                          //@synthesize object=_object - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) char highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isSelected,nonatomic) char selected;                    //@synthesize selected=_selected - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectForPasteboadItem:(id)arg1 ;
+(id)itemWithPasteboardItem:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)object;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(char)isSelected;
-(void)setSelected:(char)arg1 ;
-(void)setObject:(id)arg1 ;
-(id)pasteboardItem;
@end

