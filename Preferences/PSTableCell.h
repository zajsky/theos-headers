#import <UIKit/UITableViewCell.h>

@class PSSpecifier;

@interface PSTableCell : UITableViewCell {
  PSSpecifier *_specifier;
}

@property (nonatomic, retain) PSSpecifier *specifier;

-(id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(id)identifier specifier:(PSSpecifier *)specifier;
-(void)setSpecifier:(PSSpecifier *)specifier;
-(PSSpecifier *)specifier;

@end
