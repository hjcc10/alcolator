//
//  ViewController.h
//  Alcolator
//
//  Created by Humberto Carvalho on 01/02/15.
//  Copyright (c) 2015 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
//
// HC 2.
//
@property (weak, nonatomic) UITextField *beerPercentTextField;
@property (weak, nonatomic) UILabel *resultLabel;
@property (weak, nonatomic) UISlider *beerCountSlider;

- (void)buttonPressed:(UIButton *)sender;

@end

