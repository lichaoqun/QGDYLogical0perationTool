//
//  DYLogical0perationTool.h
//  QEZB
//
//  Created by 李超群 on 2018/2/1.
//Copyright © 2018年 zhou. All rights reserved.

#pragma mark ************************************ 逻辑运算的工具类 ************************************

#import <Foundation/Foundation.h>

/** 表示两个 BOOL 值 */
typedef NS_OPTIONS(NSInteger, DYRoomStateType) {
    DYRoomStateTypeUnknow               = 0,
    DYRoomStateTypeFirstConnect         = 1 << 0,
    DYRoomStateTypeFirstEnterRoom       = 1 << 1,
};

static inline void setCurrentTypeToTypeStaute(NSInteger* currentType, NSInteger toType, BOOL status){
    if (status) {
        (*currentType) = (*currentType) | (toType);
    }else{
        (*currentType) = (*currentType) & (~toType);
    }
}

static inline BOOL getCurrentTypeIsType(NSInteger* currentType, NSInteger isType){
    return ((*currentType) & isType) == isType;
}
