@interface SBIconLabelImageParameters : NSObject {
  CGSize _maxSize;
  long long _style;
}

@property (nonatomic) BOOL canTighten;
@property (nonatomic) CGSize maxSize;
@property (nonatomic) long long style;

-(BOOL)canTighten;
-(id)copyWithZone:(NSZone *)zone;
-(UIColor *)focusHighlightColor;
-(UIFont *)font;
-(CGSize)maxSize;
-(void)setFont:(UIFont *)font;
-(void)setText:(NSString *)text;
-(void)setTextColor:(UIColor *)color;
-(void)setFocusHighlightColor:(UIColor *)color;
-(long long)style;
-(NSString *)text;
-(UIColor *)textColor;
@end
