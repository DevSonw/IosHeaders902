/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DOMNode;

@interface DDRange : NSObject {

	DOMNode* _node;
	long _startOffset;
	long _endOffset;

}

@property (nonatomic,retain) DOMNode * node;                //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) long startOffset;              //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) long endOffset;                //@synthesize endOffset=_endOffset - In the implementation block
+(id)rangeWithDOMRange:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(long)endOffset;
-(long)startOffset;
-(id)initWithDOMRange:(id)arg1 ;
-(DOMNode *)node;
-(void)setStartOffset:(long)arg1 ;
-(void)setNode:(DOMNode *)arg1 ;
-(void)setEndOffset:(long)arg1 ;
@end
