//
//  ViewController.m
//  Object2Dictionary
//
//  Created by YDJ on 14/11/6.
//  Copyright (c) 2014年 jingyoutimes. All rights reserved.
//

#import "ViewController.h"
#import "NSObject+Ext.h"
#import "Response.h"
#import "Header.h"
#import "Body.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    
    Header * header=[[Header alloc] init];
    header.code=@"200";
    header.message=@"成功";
    
    Body * body=[[Body alloc] init];
    body.content=@"content";
    body.isFollow=YES;
    body.num1=100;
    
    Response *rsp=[[Response alloc] init];
    
    rsp.header=header;
    rsp.body=body;
    
    ///转为字典
    NSDictionary * dic=[self getDictionaryFromObject_Ext:rsp];
    NSLog(@"%@",dic);
    
    ///转为json data
   NSData * data= [self getJSON_Ext:rsp options:NSJSONWritingPrettyPrinted error:nil];
    
    NSString * jsonString=[[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    
    NSLog(@"%@",jsonString);

    
    


}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
