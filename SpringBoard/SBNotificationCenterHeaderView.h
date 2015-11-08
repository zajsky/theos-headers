#import <SpringBoardFoundation/_SBFVibrantTableViewHeaderFooterView.h>

@class UILabel;

@interface SBNotificationCenterHeaderView : _SBFVibrantTableViewHeaderFooterView {
  UILabel *_titleLabel;
  UIImageView *_iconImageView;
}

@property (readonly,retain,nonatomic) UILabel* titleLabel;
@property (readonly,retain,nonatomic) UIImageView* iconImageView;

-(CGRect)contentBounds;

@end
