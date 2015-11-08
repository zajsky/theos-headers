#import "PSViewController.h"

@class NSArray;

@interface PSListController : PSViewController {
	NSArray *_specifiers;
}

-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;

-(void)showController:(id)arg1;
-(void)showController:(id)arg1 animate:(BOOL)arg2;

/* TableView functions */
-(double)tableView:(UITableView *)tableView heightForHeaderInSection:(long long)section;
-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath;

/* Private functions */
-(void)_returnKeyPressed:(id)arg1;
-(void)_unloadBundleControllers;

@end
