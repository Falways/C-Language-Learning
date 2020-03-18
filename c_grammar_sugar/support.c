//
// Created by 徐航 on 2020/3/17.
//

// extern 存储类用于提供一个全局变量的引用
// extern 是用来在另一个文件中声明一个全局变量或函数

#include <stdio.h>
extern int globalCount;
void printGlobalCount(void){
    printf("globalCount is %d\n", globalCount);
}