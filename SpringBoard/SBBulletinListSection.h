@class NSArray, NSMutableArray, NSString;

@interface SBBulletinListSection : NSObject {
  NSMutableArray *_bulletins;
  NSString *_displayName;
  NSString *_sectionID;
}

@property (nonatomic,readonly) NSArray *bulletins;
@property (nonatomic,copy) NSString *displayName;
@property (nonatomic,copy) NSString *sectionID;

-(NSArray *)bulletins;
-(NSString *)displayName;
-(NSString *)sectionID;
-(void)setDisplayName:(NSString *)displayName;
-(void)setSectionID:(NSString *)sectionID;

@end
