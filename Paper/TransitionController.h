//
//  TransitionController.h
//  Paper
//
//  Created by tag_mac_05 on 4/26/14.
//  Copyright (c) 2014 ChinaiOS. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol TransitionControllerDelegate <NSObject>

-(void)interactionBeganAtPoint:(CGPoint)point;

@end

@interface TransitionController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIGestureRecognizerDelegate>

@property (nonatomic) id <TransitionControllerDelegate> delegate;
@property (nonatomic) BOOL hasActiveInteraction;
@property (nonatomic) UINavigationControllerOperation navigationOperation;
@property (nonatomic) UICollectionView *collectionView;

- (instancetype)initWithCollectionView:(UICollectionView *)collectionView;
@end
