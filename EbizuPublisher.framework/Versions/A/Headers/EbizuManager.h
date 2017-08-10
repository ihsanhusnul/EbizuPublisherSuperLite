//
//  EbizuManager.h
//  EbizuPublisherSDK
//
//  Created by Ebizu-Taufik on 1/26/17.
//  Copyright © 2017 Ebizu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EbizuUser.h"

@interface EbizuManager : NSObject

#pragma mark - properties
@property (nonatomic, assign) BOOL developmentMode;


#pragma mark - global method
+ (EbizuManager*)sharedManager;

+ (id)initWithAppID:(NSString *)appID;
+ (void)start;
+ (void)loginWithUser:(EbizuUser *)obj;

@end
