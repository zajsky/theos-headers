#import <UIKit/UIView.h>

@class _UILegibilitySettings, UIImage, UIImageView, CAFilter;

@interface _UILegibilityView : UIView {

	BOOL _hidesImage;
	_UILegibilitySettings* _settings;
	UIImage* _image;
	UIImage* _shadowImage;
	double _strength;
	UIImageView* _imageView;
	UIImageView* _shadowImageView;
	CAFilter* _imageColorFilter;
	CAFilter* _shadowImageColorFilter;
	long long _options;

}

@property (nonatomic,readonly) long long style;
@property (nonatomic,retain) _UILegibilitySettings * settings;               //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                          //@synthesize shadowImage=_shadowImage - In the implementation block
@property (assign,nonatomic) double strength;                                //@synthesize strength=_strength - In the implementation block
@property (assign,nonatomic) BOOL hidesImage;                                //@synthesize hidesImage=_hidesImage - In the implementation block
@property (nonatomic,readonly) BOOL usesColorFilters;
@property (nonatomic,retain) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * shadowImageView;                  //@synthesize shadowImageView=_shadowImageView - In the implementation block
@property (nonatomic,retain) CAFilter * imageColorFilter;                    //@synthesize imageColorFilter=_imageColorFilter - In the implementation block
@property (nonatomic,retain) CAFilter * shadowImageColorFilter;              //@synthesize shadowImageColorFilter=_shadowImageColorFilter - In the implementation block
@property (assign,nonatomic) long long options;                              //@synthesize options=_options - In the implementation block

-(void)dealloc;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_UILegibilitySettings *)settings;
-(UIImage *)image;
-(long long)style;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(UIImageView *)imageView;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4 ;
-(void)setImage:(id)arg1 shadowImage:(id)arg2 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setSettings:(_UILegibilitySettings *)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(long long)options;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 ;
-(id)initWithStyle:(long long)arg1 image:(id)arg2 ;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(id)initWithStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4 options:(long long)arg5 ;
-(void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(UIImageView *)shadowImageView;
-(void)setShadowImageView:(UIImageView *)arg1 ;
-(BOOL)usesColorFilters;
-(CAFilter *)imageColorFilter;
-(void)setImageColorFilter:(CAFilter *)arg1 ;
-(id)drawingColor;
-(CAFilter *)shadowImageColorFilter;
-(void)setShadowImageColorFilter:(CAFilter *)arg1 ;
-(void)updateImage;
-(BOOL)usesSecondaryColor;
-(void)setHidesImage:(BOOL)arg1 ;
-(void)setStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(void)updateForChangedSettings:(id)arg1 ;
-(BOOL)hidesImage;
@end
