//
//  Healp.h
//  ExpandFrameModel
//
//  Created by 栗子 on 2017/12/6.
//  Copyright © 2017年 http://www.cnblogs.com/Lrx-lizi/. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Healp : NSObject

//计算文本的宽度
+ (float)getStringWidth:(NSString *)text andFont:(float)font;
//计算文本的高度
+ (float)getStringHeight:(NSString *)text andFont:(float)font andWidth:(float)width;

/**
 获取某个月的第一天和最后一天
 @dateStr  当前日期  17-12
 */
+(NSArray *)getMonthBeginAndEndWith:(NSString *)dateStr;
@end
