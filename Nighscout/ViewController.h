//
//  ViewController.h
//  Nighscout
//
//  Created by John Costik on 12/8/14.
//  Copyright (c) 2014 Nightscout Foundation. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "SNVolumeSlider.h"


@interface ViewController : UIViewController <UIWebViewDelegate>


@property (weak, nonatomic) IBOutlet UIWebView *nightscoutSite;
@property (weak, nonatomic) IBOutlet UIButton *setUrl;
@property (weak, nonatomic) IBOutlet UIButton *refreshUrl;
@property (weak, nonatomic) IBOutlet UIButton *sleep;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *loadingIndicator;
//@property (strong, nonatomic) IBOutlet SNVolumeSlider *alertVolume;
@property (strong, nonatomic) IBOutlet UISwitch *screenLock;
@property (strong, nonatomic) IBOutlet UIVisualEffectView *blur;


- (IBAction)updateUrl:(id)sender;
- (IBAction)reloadUrl:(id)sender;
- (IBAction)changeSleep:(id)sender;
- (void)refreshNightscout;
- (void)fadeIn:(UIView*)viewToFadeIn withDuration:(NSTimeInterval)duration 	  andWait:(NSTimeInterval)wait;
- (void)toggleScreenLockOverride:(BOOL)on;

@end

