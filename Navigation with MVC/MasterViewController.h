//
//  MasterViewController.h
//  Navigation with MVC
//
//  Created by student1 on 4/20/14.
//  Copyright (c) 2014 student1. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MasterViewController : UITableViewController
{
    NSMutableArray *courses;
}

@property (nonatomic, assign)NSMutableArray *courses;
@end
