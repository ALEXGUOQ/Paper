//
//  SmallLayout.m
//  Paper
//
//  Created by tag_mac_05 on 4/26/14.
//  Copyright (c) 2014 ChinaiOS. All rights reserved.
//

#import "SmallLayout.h"

@implementation SmallLayout
- (id)init
{
    if (!(self = [super init])) return nil;
    
    self.itemSize = CGSizeMake(142, 254);
    self.sectionInset = UIEdgeInsetsMake(768-142, 2, 0, 2);
    self.minimumInteritemSpacing = 0;
    self.minimumLineSpacing = 0.0f;
    self.scrollDirection = UICollectionViewScrollDirectionHorizontal;
    
    return self;
}

- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)oldBounds
{
    return NO;
}
@end
