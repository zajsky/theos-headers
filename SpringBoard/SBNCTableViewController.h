#import <UIKit/UITableViewController.h>

@class UITableView, NSIndexPath, NSMutableArray;

@interface SBNCTableViewController : UITableViewController {
  NSMutableArray *_orderedSections;
  BOOL _usesTableViewSeparators;
}

@property (nonatomic,assign,readwrite) CGRect tableViewFrame;
@property (nonatomic) BOOL usesTableViewSeparators;

-(id)delegate;
-(void)setTableViewFrame:(CGRect)frame;
-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)path;
-(CGRect)tableViewFrame;
-(NSMutableArray *)orderedSections;

@end
