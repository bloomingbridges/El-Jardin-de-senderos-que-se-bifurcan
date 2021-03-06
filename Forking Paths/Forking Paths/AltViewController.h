//
//  AltViewController.h
//  Forking Paths
//
//  Created by Florian Brueckner on 31/01/2014.
//  Copyright (c) 2014 XXIIVV. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "DigitView.h"

@interface AltViewController : UIViewController

    @property BOOL filterActive;
    @property UITapGestureRecognizer *tapRecognizer;
    @property CALayer *patternLayer;
    @property NSTimer *timer;

    @property (nonatomic, strong) DigitView *hours;
    @property (nonatomic, strong) DigitView *hours2;
    @property (nonatomic, strong) DigitView *minutes;
    @property (nonatomic, strong) DigitView *minutes2;
    @property (nonatomic, strong) DigitView *seconds;
    @property (nonatomic, strong) DigitView *seconds2;

@end
