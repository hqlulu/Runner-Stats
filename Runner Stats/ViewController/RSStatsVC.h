//
//  RSSecondViewController.h
//  RunningStats
//
//  Created by Mr. Who on 12/20/13.
//  Copyright (c) 2013 hk. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RSStatsVC : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIPageControl *pageControl;
@property (strong, nonatomic) IBOutlet UIScrollView *currentStatsView;
@end
