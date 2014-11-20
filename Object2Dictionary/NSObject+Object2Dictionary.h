//
//  NSObject+Object2Dictionary.h
//  Object2Dictionary
//
//  Copyright (c) 2014 Object2Dictionary (https://github.com/ydj/Object2Dictionary)
//                                        
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.




#import <Foundation/Foundation.h>

@interface NSObject (Object2Dictionary)

/**
 * 对象序列成字典
 *
 * @param obj 需要序列化的对象
 *
 * @return 字典
 */
- (NSDictionary*)getDictionaryFromObject_Ext:(id)obj;

/**
 * 将对象序列换成JSON字符串
 *
 * @param obj 需要序列换的参数
 * @param error 失败时，失败信息
 *
 * @return 修改的json的数据data
 */
- (NSData*)getJSON_Ext:(id)obj options:(NSJSONWritingOptions)options error:(NSError**)error;


@end
