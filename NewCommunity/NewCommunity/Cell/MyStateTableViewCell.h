//
//  MyStateTableViewCell.h
//  NewCommunity
//
//  Created by Aaron on 2017/9/23.
//  Copyright © 2017年 ZP. All rights reserved.
//

#import "SmartTableViewCell.h"

@interface MyStateTableViewCell : SmartTableViewCell
@property (nonatomic, strong)UILabel * timeLabel;
@property (nonatomic, strong)MyStatePage * model;
@end
