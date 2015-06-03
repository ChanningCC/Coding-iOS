//
//  MRPR.h
//  Coding_iOS
//
//  Created by Ease on 15/5/29.
//  Copyright (c) 2015年 Coding. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MRPRComment.h"
#import "Depot.h"

typedef NS_ENUM(NSInteger, MRPRStatus) {
    MRPRStatusCanMerge = 0,
    MRPRStatusCannotMerge,
    MRPRStatusAccept,
    MRPRStatusRefuse,
    MRPRStatusCancel
};

@interface MRPR : NSObject
@property (strong, nonatomic) NSNumber *id, *iid, *srcExist;
@property (strong, nonatomic) NSString *title, *path, *srcBranch, *desBranch, *merge_status, *src_owner_name;
@property (strong, nonatomic) User *author, *action_author;
@property (strong, nonatomic) NSDate *created_at, *action_at;
@property (strong, nonatomic) Depot *source_depot;
@property (strong, nonatomic) NSAttributedString *attributeTitle, *attributeTail;
@property (assign, nonatomic) MRPRStatus status;

- (NSString *)statusDisplay;
- (NSString *)des_owner_name;

- (BOOL)isMR;
- (BOOL)isPR;
- (NSString *)toBasePath;
- (NSString *)toCommitsPath;
- (NSString *)toFileChangesPath;
- (NSString *)toFileLineChangesPath;

@end