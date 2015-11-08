typedef enum PSCellType {
	PSGroupCell,
	PSLinkCell,
	PSLinkListCell,
	PSListItemCell,
	PSTitleValueCell,
	PSSliderCell,
	PSSwitchCell,
	PSStaticTextCell,
	PSEditTextCell,
	PSSegmentCell,
	PSGiantIconCell,
	PSGiantCell,
	PSSecureEditTextCell,
	PSButtonCell,
	PSEditTextViewCell,
} PSCellType;

@interface PSSpecifier : NSObject {
	id target;
@public
	SEL action;
}

@property (assign, nonatomic) id target;

+(id)emptyGroupSpecifier;
+(id)groupSpecifierWithName:(id)arg1;
+(id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;
+(id)switchSpecifierWithTitle:(id)arg1 target:(id)arg2 setter:(SEL)arg3 getter:(SEL)arg4 key:(id)arg5;

-(NSString *)identifier;
-(NSString *)name;
-(id)properties;
-(id)propertyForKey:(id)key;
-(void)setIdentifier:(NSString *)identifier;
-(void)setName:(NSString *)name;
-(void)setProperty:(id)arg1 forKey:(id)arg2;
-(void)setValues:(id)arg1 titles:(id)arg2;

@end
