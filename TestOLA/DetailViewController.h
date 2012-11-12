//
//  DetailViewController.h
//  TestOLA
//
//  Created by Olivier Lallemand on 12/11/12.
//  Copyright (c) 2012 NSI. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
