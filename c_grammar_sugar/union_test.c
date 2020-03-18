//
// Created by 徐航 on 2020/3/18.
//

#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char  str[20];
};

// 共用体是一种特殊的数据类型，允许您在相同的内存位置存储不同的数据类型。
// 您可以定义一个带有多成员的共用体，但是任何时候只能有一个成员带有值。
// 共用体提供了一种使用相同的内存位置的有效方式。

extern void testUnion()
{
    union Data data;

    data.i = 10;
    printf( "data.i : %d\n", data.i);

    data.f = 220.5;
    printf( "data.f : %f\n", data.f);

    strcpy( data.str, "C Programming");
    printf( "data.str : %s\n", data.str);
}

/**
*如果程序的结构中包含多个开关量，只有 TRUE/FALSE 变量，如下：

struct
{
  unsigned int widthValidated;
  unsigned int heightValidated;
} status;
这种结构需要 8 字节的内存空间，但在实际上，在每个变量中，我们只存储 0 或 1。在这种情况下，C 语言提供了一种更好的利用内存空间的方式。如果您在结构内使用这样的变量，您可以定义变量的宽度来告诉编译器，您将只使用这些字节。例如，上面的结构可以重写成：

struct
*/

struct{
    unsigned int age:3;
}Age;

extern void testWeiYu(){
    Age.age=4;
    printf( "Sizeof( Age ) : %d\n", sizeof(Age) );
    printf( "Age.age : %d\n", Age.age );

    Age.age = 7;
    printf( "Age.age : %d\n", Age.age );

    Age.age = 8; // 二进制表示为 1000 有四位，超出
    printf( "Age.age : %d\n", Age.age );

}