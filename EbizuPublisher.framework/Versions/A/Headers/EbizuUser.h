//
//  EbizuUser.h
//  EbizuPublisher
//
//  Created by ihsan husnul on 8/2/17.
//  Copyright © 2017 IHsan HUsnul. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

static NSString *kEbizuUserName = @"name";
static NSString *kEbizuUserGender = @"gender";
static NSString *kEbizuUserEmail = @"email";
static NSString *kEbizuUserCity = @"city";
static NSString *kEbizuUserCountry = @"country";
static NSString *kEbizuUserDoB = @"dob";

@interface EbizuUser : NSObject

@property (nonatomic,strong) NSString * name;
@property (nonatomic,strong) NSString * gender;
@property (nonatomic,strong) NSString * email;
@property (nonatomic,strong) NSString * city;
@property (nonatomic,strong) NSString * country;
@property (nonatomic,strong) NSDate * dob;

- (NSDictionary*)getUserDictionary;

@end
