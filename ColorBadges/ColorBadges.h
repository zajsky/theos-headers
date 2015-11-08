@interface ColorBadges : NSObject

+ (instancetype)sharedInstance;
+ (BOOL)isDarkColor:(int)color;
+ (BOOL)areBordersEnabled;
+ (BOOL)isEnabled;

// Return RGB ints. i.e. 0xRRGGBB.
- (int)colorForImage:(UIImage *)image;
- (int)colorForIcon:(id)icon; // Must be an SBIcon *

@end
