//
// Created by 徐航 on 2020/3/17.
//
#include "stdio.h"

void swapByValue(int,int);
void swapByPoint(int*,int*);

extern void testSwap1(){
    int a = 10;
    int b = 5;

    printf("交换前，a 的值： %d\n", a );
    printf("交换前，b 的值： %d\n", b );

    /* 调用函数来交换值
     * &a 表示指向 a 的指针，即变量 a 的地址
     * &b 表示指向 b 的指针，即变量 b 的地址
    */
    swapByValue(a, b);

    printf("交换后，a 的值： %d\n", a );
    printf("交换后，b 的值： %d\n", b );
}

extern void testSwap2(){
    int a = 10;
    int b = 5;

    printf("交换前，a 的值： %d\n", a );
    printf("交换前，b 的值： %d\n", b );

    /* 调用函数来交换值
     * &a 表示指向 a 的指针，即变量 a 的地址
     * &b 表示指向 b 的指针，即变量 b 的地址
    */
    swapByPoint(&a, &b);

    printf("交换后，a 的值： %d\n", a );
    printf("交换后，b 的值： %d\n", b );
}

void swapByPoint(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

void swapByValue(int x, int y){
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}