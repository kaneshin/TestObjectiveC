//
//  TAFlipsideViewController.h
//  Test
//
//  Created by Shintaro Kaneko on 5/14/14.
//  Copyright (c) 2014 eure.jp. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TAFlipsideViewController;

@protocol TAFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(TAFlipsideViewController *)controller;
@end

@interface TAFlipsideViewController : UIViewController

@property (weak, nonatomic) id <TAFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
