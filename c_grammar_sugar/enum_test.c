//
// Created by 徐航 on 2020/3/17.
//
#include "stdio.h"
extern void testEnum(){
    // 没有指定值的枚举元素，其值为前一元素加 1。也就说 spring 的值为 0，summer 的值为 3，autumn 的值为 4，winter 的值为 5
    enum day
    {
        saturday,
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday
    } workday;

    int a = 1;
    enum day weekend;
    weekend = ( enum day ) a;  //类型转换
    //weekend = a; //错误
    printf("weekend:%d \n",weekend);

    enum color { red=1, green, blue };

    enum  color favorite_color=red;

    /* ask user to choose color */
    printf("请输入你喜欢的颜色: (1. red, 2. green, 3. blue): \n");

    /* 输出结果 */
    switch (favorite_color)
    {
        case red:
            printf("你喜欢的颜色是红色");
            break;
        case green:
            printf("你喜欢的颜色是绿色");
            break;
        case blue:
            printf("你喜欢的颜色是蓝色");
            break;
        default:
            printf("你没有选择你喜欢的颜色");
    }
}
