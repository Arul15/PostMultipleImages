//
//  PostMultipleImagesAppDelegate.h
//  PostMultipleImages
//
//  Created by apekshit on 02/05/11.
//  Copyright http://iphoneapp-dev.blogspot.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PostMultipleImagesAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

