//
// Created by 徐航 on 2020/3/17.
//

#include "stdio.h"

const int MAX = 3;
// 指针的运算
// 指针运算回改变指针指向
extern void pointerMath(){
    int  var[] = {10, 100, 200};
    int  *ptr;
    ptr = var;
    for (int i = 0; i < MAX; ++i) {
        printf("存储地址：var[%d] = %x\n", i, ptr );
        printf("存储值：var[%d] = %d\n", i, *ptr );
        /* 移动到下一个位置 */
        ptr++;
    }
}