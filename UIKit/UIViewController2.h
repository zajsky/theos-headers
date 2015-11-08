#import <UIKit/UIViewController.h>

@interface UIViewController ()

-(void)dismissAnimated:(BOOL)arg1;

@end

/**
 * Private functions
 */
@interface UIViewController (PrivateMethods)

-(void)_presentingViewControllerDidChange:(id)arg1;
-(void)_presentingViewControllerWillChange:(id)arg1;

@end
