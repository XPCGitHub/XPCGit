//
//  AppDelegate.h
//  newHellowWorldText
//
//  Created by 夏鹏程 on 2017/4/28.
//  Copyright © 2017年 夏鹏程. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

