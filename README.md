# Introduction

##### The Ebizu Publisher SDK is a powerful plugin that you can add to your app to enable you to quickly connect and deploy campaigns
The Ebizu SDK is a powerful plugin that you can add to your app to enable you to quickly connect and deploy campaigns from the cloud, and enrich your apps with location.

# Installation

### Use CocoaPods
Set up CocoaPods on your system if you don't have it already. CocoaPods 1.1.0+ is required.
1.1 Make sure you have version **1.1.0** or newer by running this code from the terminal.
```sh
$ pod --version
```
1.2 Run the following to upgrade
```sh
$ sudo gem install cocoapods
```
1.3 Make sure your current Xcode project is closed.
1.4 Run the following set of commands in the terminal from your project's root directory.
```sh
pod init
echo "pod 'EbizuPublisherSuperLite'" >> Podfile
pod repo update
pod install
```
1.5 Open the newly created .xcworkspace file. (Make sure to always open the workspace from now on)

### Add Manually
1.1 To install the Ebizu SDK, download latest stable version of Ebizu SDK archive.
[Download Ebizu SDK](https://github.com/ihsanhusnul/EbizuPublisherSuperLite/tree/master/EbizuPublisher.framework)

1.2. Xcode with the iOS development kit is required to build an iOS app using Ebizu SDK. For a better experience, we recommend XCode 8 or later

1.3. The SDK requires iOS 8.3 or later.

1.4. Open your project in Xcode.

1.5. Copy “EbizuPublisherSuperLite.framework” to your project directory.

1.6. Make sure to Copy items into destination group's folder is selected.

1.7. Press the Finish button.

1.8. Ensure that you have added to your project the following dependent frameworks:

### Code Implementation

1.1 Initialize SDK
Add following code to your AppDelegate.m
```ObjC
#import "AppDelegate.h"
#import <EbizuPublisher/EbizuPublisher.h>

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    [[EbizuManager sharedManager] setDevelopmentMode:YES];
    [EbizuManager initWithAppID:@"YOUR APP ID"];

    return YES;
}
```

1.2 Login
```ObjC
    #import <EbizuPublisher/EbizuPublisher.h>
...
    EbizuUser *user = [[EbizuUser alloc] init];
    user.userID = @"USER ID";
    user.name = @"USER NAME";
    user.email = @"USER MAIL";
    user.gender = @"female/male";
    user.city = @"USER CITY";
    user.country = @"USER COUNTRY";
    
    [EbizuManager loginWithUser:user];
```

1.3 Start location
```ObjC
    #import <EbizuPublisher/EbizuPublisher.h>
...
    [EbizuManager start];
```

#### Question?
We’re always happy to help with the code or other questions you might have about the platform! You can email us directly at [developers@ebizu.com](mailto:developers@ebizu.com)

