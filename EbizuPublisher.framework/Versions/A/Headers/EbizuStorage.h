//
//  EbizuStorage.h
//  EbizuPublisher
//
//  Created by ihsan husnul on 8/2/17.
//  Copyright © 2017 IHsan HUsnul. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "EbizuUser.h"

@interface EbizuStorage : NSObject

+ (void)saveLocations:(NSArray*)locations;
+ (NSArray*)loadLocations;

+ (void)saveAppIdentifier:(NSString*)appID;
+ (id)loadAppIdentifier;

+ (void)saveUser:(EbizuUser*)user;
+ (EbizuUser*)loadUser;

+ (void)saveUserToken:(NSString*)token;
+ (NSString*)loadUserToken;

+ (void)saveHasInitDevice:(NSNumber*)number;
+ (BOOL)isHasInitDevice;

+ (void)saveHasInitUser:(NSNumber*)number;
+ (BOOL)isHasInitUser;

+ (id)loadSDKConfig;
+ (void)saveSDKConfig:(NSDictionary*)config;
    
+ (void)saveDateLastUpdateLocation:(NSDate*)date;
+ (NSDate*)loadDateLastUpdateLocation;
    
+ (void)saveLastUpdateLocation:(CLLocation*)location;
+ (CLLocation*)loadLastUpdateLocation;

#warning delete this from build .framework
+ (void)saveSoftDeletedLocations:(NSArray*)locations;
+ (NSArray *)loadSoftDeletedLocations;

@end
