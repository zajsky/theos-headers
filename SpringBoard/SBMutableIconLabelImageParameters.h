#import "SBIconLabelImageParameters.h"

@class NSString, UIFont, UIColor;

@interface SBMutableIconLabelImageParameters : SBIconLabelImageParameters

@property (nonatomic,copy) NSString * text;
@property (assign,nonatomic) CGSize maxSize;
@property (nonatomic,retain) UIFont * font;
@property (assign,nonatomic) double scale;
@property (assign,nonatomic) BOOL containsNonLatinLikeCharacters;
@property (assign,nonatomic) BOOL containsEmoji;
@property (assign,nonatomic) BOOL canEllipsize;
@property (assign,nonatomic) BOOL canTighten;
@property (assign,nonatomic) BOOL canUseMemoryPool;
@property (assign,nonatomic) long long style;
@property (nonatomic,retain) UIColor * textColor;
@property (assign,nonatomic) BOOL accessibilityIncreaseContrastEnabled;
@property (nonatomic,retain) UIColor * focusHighlightColor;
@property (assign,nonatomic) UIEdgeInsets textInsets;
@property (assign,nonatomic) UIEdgeInsets fontLanguageInsets;
@property (assign,nonatomic) int iconLocation;

-(void)setAccessibilityIncreaseContrastEnabled:(BOOL)arg1 ;
-(void)setContainsNonLatinLikeCharacters:(BOOL)arg1 ;
-(void)setCanEllipsize:(BOOL)arg1 ;
-(void)setCanTighten:(BOOL)arg1 ;
-(void)setContainsEmoji:(BOOL)arg1 ;
-(void)setCanUseMemoryPool:(BOOL)arg1 ;
-(void)setFocusHighlightColor:(UIColor *)arg1 ;
-(void)setFontLanguageInsets:(UIEdgeInsets)arg1 ;
-(void)setIconLocation:(int)arg1 ;
-(id)copy;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(void)setTextInsets:(UIEdgeInsets)arg1 ;
@end
