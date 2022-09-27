#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

//常见的动态内存错误
// int main()
// {
//     //1、对NULL指针的解引用操作
//     int* p = (int*)malloc(40);
//     //万一malloc失败了,p被赋值位NULL

//     int i = 0;
//     for( i = 0; i < 10; i++)
//     {
//         *(p + i) = i;
//     }
//     free(p);
//     p = NULL;

//     //2、对动态开辟的内存的越界访问
//     int* p2 =(int*)malloc(5 * sizeof(int));
//     if(p2 == NULL)
//     {
//         return 0;
//     }
//     else 
//     {
//         int i = 0;
//         for(i = 0; i < 10; i++)
//         {
//             *(p2 + i) = i;
//         }
//     }
//     free(p2);
//     p2 = NULL;


//     //3、对非动态开辟的内存空间使用free释放
//     int a = 10;
//     int* p3 = &a;
//     *p3 = 20;
//     free(p3);
//     p3 = NULL;

//     //4、使用free释放动态开辟内存的一部分
//     int* p4 = (int*)malloc(40);
//     if(p4 == NULL)
//     {
//         return 0;
//     }
//     int j = 0;
//     for(j = 0; j < 10; j++)
//     {
//         *p4++ = j;
//     }
//     free(p4);
//     p4 = NULL;

//     //5、对同一块动态内存的多次释放
//     int* p5 = (int*)malloc(40);
//     if(p5 == NULL)
//     {
//         return 0;
//     }
//     //释放
//     free(p5);
//     p5 = NULL;
//     //...
//     free(p5);

//     //6、动态开辟的内存忘记释放(内存泄漏)
//     while(1)
//     {
//         malloc(1);
//     }

//     //
//     return 0;
// }