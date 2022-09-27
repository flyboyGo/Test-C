#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//C语言是可以创建变长数组的 -C99中增加了
// int main(void) 
// {
//     int n = 0;
//     scanf("%d", &n);
//     int arr[n];
//     int i = 0;
//     for(i = 0; i < n; i++)
//     {
//         arr[i] = i;
//     }
//     for( i = 0; i < n ; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }


#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
//动态内存分配
//动态内存函数介绍

//动态申请内存函数
//void* malloc(size_t size);
/*
     如果开辟成功，则返回一个指向开辟好空间的指针。
     如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查。
     返回值的类型是 void* ，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定。
     如果参数 size 为0，malloc的行为是标准是未定义的，取决于编译器
*/

// int main()
// {
//     //向内存申请10g个整形的空间
//     int* p = (int*)malloc(10*sizeof(int));
//     if(p == NULL)
//     {
//         //打印错误信息的一个方式
//         printf("%s\n", strerror(errno));
//     }
//     else 
//     {
//         int i = 0;
//         for(i = 0; i < 10; i++)
//         {
//             *(p+i) = i;
//         }
//     }
//     int j = 0;
//     for(j = 0; j < 10; j++)
//     {
//         printf("%d ", *(p + j));
//     }

//     //当动态申请的内存空间空间使用完,需要释放、回收内存空间时
//     //释放内存空间函数
//     //void free (void * ptr)
//     /*
//          如果参数 ptr 指向的空间不是动态开辟的，那free函数的行为是未定义的。
//          如果参数 ptr 是NULL指针，则函数什么事都不做。
//     */
//     free(p); //释放p指向的动态开辟的空间后,p指针不会被置空,需要我们手动置空
//     p = NULL;

//     return 0;
// }


//第二个动态申请内存函数
//void* calloc (size_t num, size_t size);
/*
    函数的功能是为 num 个大小为 size 的元素开辟一块空间，并且把空间的每个字节初始化为0。
    与函数 malloc 的区别只在于 calloc 会在返回地址之前把申请的空间的每个字节初始化为全0。
*/
// int main()
// {
//     //int* p =malloc(10 * sizeof(int));
//     int* p = calloc(10, sizeof(int));
//     if(p == NULL)
//     {
//         printf("%s\n", strerror(errno));
//     }
//     else 
//     {
//         int i = 0;
//         for(i = 0; i < 10; i++)
//         {
//             printf("%d ", *(p + i));
//         }
//     }
//     //释放空间
//     //free函数是用来释放动态开辟的内存空间的
//     free(p);
//     p = NULL;
//     return 0;
// }


//调整动态开辟内存空间的大小
//void* realloc (void* ptr, size_t size);
/*
      ptr 是要调整的内存地址
      size 调整之后新大小
      返回值为调整之后的内存起始位置。
      这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到新的空间。
      realloc在调整内存空间的是存在两种情况：
      情况1：原有空间之后有足够大的空间
      情况2：原有空间之后没有足够大的空间


情况1
   当是情况1 的时候，要扩展内存就直接原有内存之后直接追加空间，原来空间的数据不发生变化。
情况2
   当是情况2 的时候，原有空间之后没有足够多的空间时，扩展的方法是：在堆空间上另找一个合适大小
   的连续空间来使用。这样函数返回的是一个新的内存地址。
   由于上述的两种情况，realloc函数的使用就要注意一些。
*/

// int main()
// {
//     int* p = (int*)malloc(20);
//     if(p == NULL)
//     {
//         printf("%s\n", strerror(errno));
//     }
//     else
//     {
//         int i = 0;
//         for(i = 0; i < 5; i++)
//         {
//             *(p + i) = i;
//         }
//     }
//   /* 
//    就是在使用malloc开辟的20个字节空间
//    假设这里,20个字节空间不能满足我们使用了
//    希望我们能够有40个字节的空间
//    这里可以使用realloc来调整动态开辟的内存空间
//    realloc使用注意事项
//    1、如果p指向的空间之后有足够的内存空间追加,则直接追加,后返回p;
//    2、如果p指向的空间之后没有足够的内存空间可以追加,则realloc函数会重新找一个新的内存区域,开辟一块满足需求的空间,
//      并且把原来的内存中的数据拷贝回来,释放旧的内存空间,最后返回新开辟的内存空间地址
//    3、得用一个新的变量来接受realloc函数的返回值
//    */
//     int* ptr = (int*)realloc(p, 40);
//     if(ptr == NULL)
//     {
//         printf("%s\n", strerror(errno));
//     }
//     else 
//     {
//         p = ptr;
//         int i = 0;
//         for(i = 5; i< 10; i++)
//         {
//              *(p + i) = i;
//         }
//
//          for(i = 0; i< 10; i++)
//         {
//             printf("%d ", *(p + i));
//         }
//     }
//     //释放内存
//     free(p);
//     p = NULL;
//     ptr = NULL;
//
//     //realloc与malloc可以等价
//     int* p2 = realloc(NULL, 40);// malloc(40)
//
//     return 0;
//}