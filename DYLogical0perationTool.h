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


static inline void setCurrentTypeToTypeStaute(void* currentType, int toType, BOOL status){
    if (status) {
        (*(int *)currentType) = (*(int *)currentType) | (toType);
    }else{
        (*(int *)currentType) = (*(int *)currentType) & (~toType);
    }
}

static inline BOOL currentTypeIsType(int currentType, int isType){
    return (currentType & isType) == isType;
}
