//MAKE BETTER
@interface SPSearchResult : NSObject {
  NSString *_title;
  NSMutableDictionary *_additionalPropertyDict;
}

@property (nonatomic, readonly) NSMutableDictionary *additionalPropertyDict;
@property (nonatomic,retain) NSArray *descriptions;
@property (nonatomic,retain) NSString *footnote;
@property (nonatomic,retain) NSString *title;

-(void)setFootnote:(NSString *)footnote;
-(void)setTitle:(NSString *)title;
-(NSString *)footnote;
-(NSString *)title;

@end
