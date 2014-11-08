//
//  Response.h
//  Object2Dictionary
//
//  Created by YDJ on 14/11/6.
//  Copyright (c) 2014年 jingyoutimes. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Header,Body;

@interface Response : NSObject

@property (nonatomic,strong)Header * header;
@property (nonatomic,strong)Body * body;

@end
