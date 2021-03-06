//
//  UserDataManager.h
//  VISIKARD
//
//  Created by Phan Ba Minh on 6/5/12.
//  Copyright (c) 2012 kidbaw. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>
#import "Define.h"
#import "SDWebImageManager.h"

#define STRING_CODER_USER_DATA_USER_NAME							@"STRING_CODER_USER_DATA_USER_NAME"
#define STRING_CODER_USER_DATA_USER_ID								@"STRING_CODER_USER_DATA_USER_ID"
#define STRING_CODER_USER_DATA_PASSWORD								@"STRING_CODER_USER_DATA_PASSWORD"
#define STRING_CODER_USER_DATA_SESSION_ID							@"STRING_CODER_USER_DATA_SESSION_ID"
#define STRING_CODER_USER_DATA_LOGIN_STATUS							@"STRING_CODER_USER_DATA_LOGIN_STATUS"
#define STRING_CODER_USER_DATA_LOGIN_WITH_FB_TW                     @"STRING_CODER_USER_DATA_LOGIN_WITH_FB_TW"
#define STRING_CODER_USER_DATA_AVATAR_SMALL_URL                     @"STRING_CODER_USER_DATA_AVATAR_SMALL_URL"
#define STRING_CODER_USER_DATA_FULL_NAME                            @"STRING_CODER_USER_DATA_FULL_NAME"
#define STRING_CODER_USER_DATA_LOGIN_AT_THE_FIRST_TIME              @"STRING_CODER_USER_DATA_LOGIN_AT_THE_FIRST_TIME"
#define STRING_CODER_USER_DATA_USER_PROFILE_ID						@"STRING_CODER_USER_DATA_USER_PROFILE_ID"
#define STRING_CODER_USER_DATA_USER_KARD_ID							@"STRING_CODER_USER_DATA_KARD_ID"
#define STRING_CODER_USER_DATA_FK_USER_ID							@"STRING_CODER_USER_DATA_FK_USER_ID"
#define STRING_CODER_USER_DATA_USER_LOCATION                        @"STRING_CODER_USER_DATA_USER_LOCATION"
#define STRING_CODER_USER_DATA_SHOWED_UNREAD_MESSAGE                @"STRING_CODER_USER_DATA_SHOWED_UNREAD_MESSAGE"
#define STRING_CODER_USER_DATA_MY_KARDS_UNREAD_MESSAGE              @"STRING_CODER_USER_DATA_MY_KARDS_UNREAD_MESSAGE"
#define STRING_CODER_USER_DATA_FEEDS_UNREAD_MESSAGE                 @"STRING_CODER_USER_DATA_FEEDS_UNREAD_MESSAGE"
#define STRING_CODER_USER_DATA_KONNECT_WAITING_FOR_APPROVAL         @"STRING_CODER_USER_DATA_KONNECT_WAITING_FOR_APROVAL"
#define STRING_CODER_USER_DATA_KARD_SETTING_SHOW_UNREAD             @"STRING_CODER_USER_DATA_KARD_SETTING_SHOW_UNREAD"
#define STRING_CODER_USER_DATA_KARD_SETTING_SORT_TYPE               @"STRING_CODER_USER_DATA_KARD_SETTING_SORT_TYPE"
#define STRING_CODER_USER_DATA_USER_IS_VISIBLE                      @"STRING_CODER_USER_DATA_USER_IS_VISIBLE"
#define STRING_CODER_USER_DATA_USER_ME_KARDS                        @"STRING_CODER_USER_DATA_USER_ME_KARDS"

#define STRING_CODER_USER_DATA_USER_TOTAL_POINTS                    @"STRING_CODER_USER_DATA_USER_TOTAL_POINTS"
#define STRING_CODER_USER_DATA_USER_CURR_POINTS                     @"STRING_CODER_USER_DATA_USER_CURR_POINTS"
#define STRING_CODER_USER_DATA_USER_LEVEL                           @"STRING_CODER_USER_DATA_USER_LEVEL"
#define STRING_CODER_USER_DATA_USER_RANK                            @"STRING_CODER_USER_DATA_USER_RANK"

#define STRING_CODER_USER_DATA_MY_DEAL_VALUE                        @"STRING_CODER_USER_DATA_USER_MY_DEAL_VALUE"
#define STRING_CODER_USER_DATA_MY_DEAL_PRICE                        @"STRING_CODER_USER_DATA_USER_MY_DEAL_PRICE"
#define STRING_CODER_USER_DATA_MY_DEAL_IMAGE_URL                    @"STRING_CODER_USER_DATA_MY_DEAL_IMAGE_URL"
#define STRING_CODER_USER_DATA_MY_CITY                              @"STRING_CODER_USER_DATA_MY_CITY"
#define STRING_CODER_USER_DATA_MY_DEAL_CACHED_CITY                  @"STRING_CODER_USER_DATA_MY_DEAL_CACHED_CITY"
#define STRING_CODER_USER_DATA_MY_DEAL_CACHED_CATEGORY              @"STRING_CODER_USER_DATA_MY_DEAL_CACHED_CATEGORY"
#define STRING_CODER_USER_DATA_MY_DEAL_LAST_STATUS                  @"STRING_CODER_USER_DATA_MY_DEAL_LAST_STATUS"
#define STRING_CODER_USER_DEFAULT_KARD_ID                           @"STRING_CODER_USER_DEFAULT_KARD_ID "

#define STRING_CODER_USER_DATA_CURRENT_PLACE_MARK                   @"STRING_CODER_USER_DATA_CURRENT_PLACE_MARK"

@interface UserDataManager : NSObject <SDWebImageManagerDelegate> {
    
}

@property (atomic, retain) CLLocation       *userLocation;
@property (nonatomic) int userID;
@property (nonatomic, retain) NSString      *userName;
@property (nonatomic, retain) NSString      *accessToken;
@property (nonatomic, retain) NSString      *password;
@property (nonatomic, retain) NSString      *sessionID;
@property (nonatomic, retain) NSString      *avatarSmallURL;
@property (nonatomic, assign) NSInteger     idProfile;
@property (nonatomic, assign) NSInteger     idKards;
@property (nonatomic, assign) NSInteger     fkUser;
@property (nonatomic) BOOL                  loginStatus;
@property (nonatomic) BOOL                  isLoginWith_FB_TW;
@property (nonatomic, retain) NSString      *fullName;
@property (nonatomic) BOOL                  loginAtTheFirstTime;
@property (nonatomic, retain) NSString      *dealSmallURL;
@property (nonatomic, retain) NSString      *konnectSmallURL;
@property (nonatomic, retain) NSString      *feedsSmallURL;
@property (nonatomic, assign) NSInteger     myKardsUnreadMessage;
@property (nonatomic, assign) NSInteger     feedsUnreadMessage;
@property (nonatomic, assign) NSInteger     konnectWaitingForApproval;
@property (nonatomic, assign) NSInteger     showMyKardUnread;
@property (nonatomic, assign) NSInteger     sortMyKard;
@property (nonatomic, assign) NSInteger     userIsVisible;

@property (nonatomic, assign) NSInteger     userTotalPoints;
@property (nonatomic, assign) NSInteger     userCurrentPoints;
@property (nonatomic, assign) NSInteger     userLevel;
@property (nonatomic, retain) NSString      *userRank;

@property (nonatomic, retain) NSString      *myDealMerchant;
@property (nonatomic, retain) NSString      *myDealHeadline;
@property (nonatomic, assign) NSInteger     myDealPrice;
@property (nonatomic, assign) NSInteger     myDealValue;
@property (nonatomic, retain) NSString      *myDealCategory;
@property (nonatomic, retain) NSString      *myDealImageURL;

@property (nonatomic, retain) NSString      *myCity;
@property (nonatomic, retain) NSString      *myDealCachedCity;
@property (nonatomic, retain) NSString      *myDealCachedCategory;
@property (nonatomic, retain) CLPlacemark   *currentPlaceMark;
@property (nonatomic, assign) ENUM_DEAL_LAST_STATUS myDealLastStatus;
@property (nonatomic, assign) NSInteger     userMeKards;


@property (nonatomic, assign) NSInteger     pointUser;
@property (nonatomic, assign) NSInteger     myDefaultKardId;

- (void)cleanUserCacheAndCookie;
- (void)resetAllData;
- (NSString*)getUserPlaceMark;
+ (UserDataManager *)Shared;
- (void)save;

@end
