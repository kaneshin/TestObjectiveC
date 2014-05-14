//
//  TAFlipsideViewController.m
//  Test
//
//  Created by Shintaro Kaneko on 5/14/14.
//  Copyright (c) 2014 eure.jp. All rights reserved.
//

#import "TAFlipsideViewController.h"

@interface TAFlipsideViewController ()

@end

@implementation TAFlipsideViewController

- (void)awakeFromNib
{
    [super awakeFromNib];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Actions

- (IBAction)done:(id)sender
{
    [self.delegate flipsideViewControllerDidFinish:self];
}

@end
