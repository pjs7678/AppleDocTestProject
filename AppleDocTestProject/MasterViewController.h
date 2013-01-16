//
//  MasterViewController.h
//  AppleDocTestProject
//
//  Created by JongSu Park on 13. 1. 16..
//  Copyright (c) 2013년 JongSu Park. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
