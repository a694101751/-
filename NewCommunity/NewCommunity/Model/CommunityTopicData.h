#import <UIKit/UIKit.h>
#import "CommunityTopicPage.h"

@interface CommunityTopicData : NSObject

@property (nonatomic, strong) NSString * page;
@property (nonatomic, strong) NSArray * pages;
@property (nonatomic, strong) NSString * rows;
@property (nonatomic, strong) NSString * total;

-(instancetype)initWithDictionary:(NSDictionary *)dictionary;

-(NSDictionary *)toDictionary;
@end