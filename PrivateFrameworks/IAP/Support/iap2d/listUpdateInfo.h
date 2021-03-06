/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class recentsListInfo, favoritesListInfo;

@interface listUpdateInfo : NSObject {

	char _sendListUpdates;
	unsigned short _listCap;
	recentsListInfo* _recentsListInfo;
	favoritesListInfo* _favoritesListInfo;

}

@property (assign,nonatomic) char sendListUpdates;                               //@synthesize sendListUpdates=_sendListUpdates - In the implementation block
@property (assign,nonatomic) unsigned short listCap;                             //@synthesize listCap=_listCap - In the implementation block
@property (nonatomic,retain) recentsListInfo * recentsListInfo;                  //@synthesize recentsListInfo=_recentsListInfo - In the implementation block
@property (nonatomic,retain) favoritesListInfo * favoritesListInfo;              //@synthesize favoritesListInfo=_favoritesListInfo - In the implementation block
-(char)sendListUpdates;
-(void)setListCap:(unsigned short)arg1 ;
-(unsigned short)listCap;
-(recentsListInfo *)recentsListInfo;
-(void)setSendListUpdates:(char)arg1 ;
-(favoritesListInfo *)favoritesListInfo;
-(void)setRecentsListInfo:(recentsListInfo *)arg1 ;
-(void)setFavoritesListInfo:(favoritesListInfo *)arg1 ;
-(id)init;
-(id)description;
-(void)reset;
@end

