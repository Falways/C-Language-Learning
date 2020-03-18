//
// Created by 徐航 on 2020/3/17.
//
#include "stdio.h"

extern void testLoopFunc(){
    int a = 10;
    while (a<20){
        printf("a的value： %d \n",a);
        a++;
    }
}
