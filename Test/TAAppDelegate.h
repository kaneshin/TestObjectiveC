//
//  TAAppDelegate.h
//  Test
//
//  Created by Shintaro Kaneko on 5/14/14.
//  Copyright (c) 2014 eure.jp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TAAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
