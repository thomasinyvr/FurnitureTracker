//
//  MasterViewController.h
//  FurnitureTracker
//
//  Created by Thomas Friesman on 2016-04-01.
//  Copyright © 2016 Thomas Friesman. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

