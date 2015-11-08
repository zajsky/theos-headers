#import <UIKit/UIKit.h>

@protocol SBReusableView;

@interface SBIconView : UIView

-(long long)currentLabelAccessoryType;
-(SBIcon *)icon;
-(void)setAllowJitter:(BOOL)arg1;
-(void)setLabelAccessoryViewHidden:(BOOL)arg1;
-(void)setLabelHidden:(BOOL)arg1;
-(void)_applyIconLabelAlpha:(double)alpha;
-(void)_updateJitter;
-(void)_updateLabel;
-(void)_updateLabelAccessoryView;

@end
