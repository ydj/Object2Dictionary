//
//  Body.h
//  Object2Dictionary
//
//  Created by YDJ on 14/11/6.
//  Copyright (c) 2014年 YDJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Body : NSObject

@property (nonatomic,copy)NSString * content;

@property (nonatomic,assign)int followCount;
@property (nonatomic,assign)BOOL isFollow;

@end
