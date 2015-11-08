#import <UIKit/_UILegibilityView.h>

@class SBIconLabelImageParameters;

@interface SBIconLabelView : _UILegibilityView {

	SBIconLabelImageParameters* _imageParameters;

}

@property (nonatomic,retain) SBIconLabelImageParameters * imageParameters;

+(void)updateIconLabelView:(id)arg1 withSettings:(id)arg2 imageParameters:(id)arg3;
+(id)newIconLabelViewWithSettings:(id)arg1 imageParameters:(id)arg2;

-(SBIconLabelImageParameters *)imageParameters;
-(void)_checkInImages;
-(void)setImageParameters:(SBIconLabelImageParameters *)arg1 ;
-(void)dealloc;
@end
