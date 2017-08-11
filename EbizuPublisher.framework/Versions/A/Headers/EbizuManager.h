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
@property (nonatomic, readonly) BOOL developmentMode;
@property (nonatomic) BOOL debugMode;


#pragma mark - global method
+ (EbizuManager*)sharedManager;

+ (id)initWithAppID:(NSString *)appID withDevelopmentMode:(BOOL)isDevelopment;
+ (void)start;
+ (void)loginWithUser:(EbizuUser *)obj;

@end
