#include <stdio.h>
#include <float.h>
# ifndef C_GRAMMAR_SUGAR_MORE_TEST_H
#include "more_test.h"
#endif
// 定义常量方式 #define or const
/**
 * C 语言中 include <> 与include "" 的区别?

#include < > 引用的是编译器的类库路径里面的头文件。

#include " " 引用的是你程序目录的相对路径中的头文件，如果在程序目录没有找到引用的头文件则到编译器的类库路径的目录下找该头文件。
 */
#define COLOR "red"
int x;
int y;
int getSum(){
    // 使用extern关键字来声明x,y为外部变量
    extern int x;
    extern int y;
    x = 1;
    y = 3;
    return  x+y;
}
int globalCount;
extern void printGlobalCount();

void authExample(){
    int a = 21;
    int c ;

    c =  a;
    printf("Line 1 - =  运算符实例，c 的值 = %d\n", c );

    c +=  a;
    printf("Line 2 - += 运算符实例，c 的值 = %d\n", c );

    c -=  a;
    printf("Line 3 - -= 运算符实例，c 的值 = %d\n", c );

    c *=  a;
    printf("Line 4 - *= 运算符实例，c 的值 = %d\n", c );

    c /=  a;
    printf("Line 5 - /= 运算符实例，c 的值 = %d\n", c );

    c  = 200;
    c %=  a;
    printf("Line 6 - %= 运算符实例，c 的值 = %d\n", c );

    c <<=  2;
    printf("Line 7 - <<= 运算符实例，c 的值 = %d\n", c );

    c >>=  2;
    printf("Line 8 - >>= 运算符实例，c 的值 = %d\n", c );

    c &=  2;
    printf("Line 9 - &= 运算符实例，c 的值 = %d\n", c );

    c ^=  2;
    printf("Line 10 - ^= 运算符实例，c 的值 = %d\n", c );

    c |=  2;
    printf("Line 11 - |= 运算符实例，c 的值 = %d\n", c );
}
extern void getUserInput();
extern void testLoopFunc();
extern void testSwap1();
extern void testSwap2();
extern void testEnum();
extern void pointerMath();
extern void testCallBack();
extern void testStruct();
extern void testPrintBook();
extern void testUnion();
extern void testWeiYu();
// 声明一个函数,参数名称可以省略
int getMaxNumber(int,int);
int main() {
    printf("Hello, World!\n");
    printf("float 存储最大字节数 : %lu \n", sizeof(float));
    int result = getSum();
    printf("x: %d, y: %d \n",x,y);
    printf("x + y = %d \n",result);
    globalCount = 10;
    printf("const variable COLOR: %s \n",COLOR);

    printf("------------------\n");
    authExample();

    printf("------------------\n");
    printGlobalCount();

    printf("------------------\n");
    //getUserInput();

    printf("------------------测试循环\n");
    testLoopFunc();

    printf("---------------比较两个数大小\n");
    printf("10和9谁大，结果是: %d大\n",getMaxNumber(10,9));

    printf("---------------交换数大小测试：传值交换\n");
    testSwap1();

    printf("---------------交换数大小测试：传指针交换\n");
    testSwap2();

    printf("---------------枚举\n");
    testEnum();

    printf("\n------------指针运算\n");
    pointerMath();

    printf("------------回调函数\n");
    testCallBack();

    printf("------------结构体\n");
    testStruct();

    printf("------------结构体参数指针形式\n");
    testPrintBook();

    printf("------------共用体\n");
    testUnion();

    printf("------------位域\n");
    testWeiYu();

    printf("-------------可变参数\n");
    printf("Average of 2, 3, 4, 5 = %f\n", testDynamicParameterFunc(4, 2,3,4,5));
    printf("Average of 5, 10, 15 = %f\n", testDynamicParameterFunc(3, 5,10,15));

    printf("-------分配内存\n");
    dynamicMallocMemory();
    return 0;
}

int getMaxNumber(int x1, int y1){
    if (x1 > y1){
        return x1;
    } else{
        return y1;
    }
}