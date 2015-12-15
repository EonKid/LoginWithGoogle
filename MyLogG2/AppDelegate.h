//
//  AppDelegate.h
//  MyLogG2
//
//  Created by Aseem 1 on 15/12/15.
//  Copyright (c) 2015 codeBrew. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Google/SignIn.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, GIDSignInDelegate>

@property (strong, nonatomic) UIWindow *window;


@end

