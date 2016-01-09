//
//  ViewController.h
//  Paypal
//
//  Created by Felicitas Martínez Gómez on 09/01/16.
//  Copyright © 2016 Felicitas Martínez Gómez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PayPalMobile.h"

@interface Start : UIViewController<PayPalPaymentDelegate>
- (IBAction)btnPagar:(UIButton *)sender;


@end

