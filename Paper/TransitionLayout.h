//
//  TransitionLayout.h
//  Paper
//
//  Created by tag_mac_05 on 4/26/14.
//  Copyright (c) 2014 ChinaiOS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TransitionLayout : UICollectionViewTransitionLayout
@property (nonatomic) UIOffset offset;
@property (nonatomic) CGFloat progress;
@property (nonatomic) CGSize itemSize;

@end
