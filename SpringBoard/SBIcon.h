@interface SBIcon : NSObject

-(SBApplication *)application;
-(NSString *)applicationBundleID;
-(long)badgeValue;
-(SBFolder *)folder;

-(void)setBadge:(id)arg1;

@end
