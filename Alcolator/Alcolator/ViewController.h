//
//  ViewController.h
//  Alcolator
//
//  Created by Fiona Alpe on 5/12/16. And Still. And Still. Third still.
//  Copyright © 2016 Fiona Alpe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;

- (void)buttonPressed:(UIButton *)sender;

@end

