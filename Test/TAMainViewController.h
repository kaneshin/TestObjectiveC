//
//  TAMainViewController.h
//  Test
//
//  Created by Shintaro Kaneko on 5/14/14.
//  Copyright (c) 2014 eure.jp. All rights reserved.
//

#import "TAFlipsideViewController.h"

#import <CoreData/CoreData.h>

@interface TAMainViewController : UIViewController <TAFlipsideViewControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
