//
// Created by 徐航 on 2020/3/17.
//

#include "stdlib.h"
#include "stdio.h"

// 回调函数
void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
    for (size_t i=0; i<arraySize; i++)
        array[i] = getNextValue();
}

// 获取随机值
int getNextRandomValue(void)
{
    return rand();
}

extern void testCallBack(){
    int myArray[10];
    populate_array(myArray, 10, getNextRandomValue);
    for(int i = 0; i < 10; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");
}