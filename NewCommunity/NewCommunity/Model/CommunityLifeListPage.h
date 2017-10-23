#import <UIKit/UIKit.h>
#import "CommunityLifeListPhoto.h"

@interface CommunityLifeListPage : NSObject

@property (nonatomic, strong) NSString * address;
@property (nonatomic, strong) NSString * avatar;
@property (nonatomic, strong) NSString * clickSum;
@property (nonatomic, strong) NSString * clubid;
@property (nonatomic, strong) NSString * cludName;
@property (nonatomic, strong) NSString * commentSum;
@property (nonatomic, strong) NSString * content;
@property (nonatomic, strong) NSString * distanceTime;
@property (nonatomic, strong) NSString * idField;
@property (nonatomic, strong) NSString * lifeType;
@property (nonatomic, strong) NSArray * photo;
@property (nonatomic, assign) BOOL praiseState;
@property (nonatomic, strong) NSString * praiseSum;
@property (nonatomic, strong) NSString * showcase;
@property (nonatomic, strong) NSString * thumb;
@property (nonatomic, strong) NSString * title;
@property (nonatomic, strong) NSString * userName;

-(instancetype)initWithDictionary:(NSDictionary *)dictionary;

-(NSDictionary *)toDictionary;
@end