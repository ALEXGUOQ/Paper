//
//  PaperCollectionViewController.h
//  Paper
//
//  Created by tag_mac_05 on 14-4-15.
//  Copyright (c) 2014年 ChinaiOS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PaperCollectionViewController : UICollectionViewController
- (UICollectionViewController*)nextViewControllerAtPoint:(CGPoint)point;
@end
