Object2Dictionary
=================

对象转字典，对象转json

-------
```
--------------
自定义对象 e.g.
--------------
    Header * header=[[Header alloc] init];
    header.code=@"200";
    header.message=@"成功";
    
    Body * body=[[Body alloc] init];
    body.content=@"content";
    body.isFollow=YES;
    body.followCount=100;
    
    Response *rsp=[[Response alloc] init];
    rsp.header=header;
    rsp.body=body;
-------------------------
 转为字典，转为json
-------------------------
   NSDictionary * dic=[self getDictionaryFromObject_Ext:rsp];
   ------
   NSData * data= [self getJSON_Ext:rsp options:NSJSONWritingPrettyPrinted error:nil];

   
```

--------

####协议
Object2Dictionary 被许可在 MIT 协议下使用。查阅 LICENSE 文件来获得更多信息。