//
//  ViewController.h
//  Alcolator
//
//  Created by Matti Salokangas on 10/23/15.
//  Copyright © 2015 Sturdy Nut. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;

- (void)showAlcoholComparison;
@end

