#import <UIKit/UIViewController.h>

@class PSSpecifier;

@interface PSViewController : UIViewController {
  PSSpecifier *_specifier;
}

-(void)pushController:(id)arg1 ;
-(void)pushController:(id)arg1 animate:(BOOL)arg2 ;
-(id)readPreferenceValue:(id)arg1;
-(PSSpecifier *)specifier;

@end
