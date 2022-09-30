#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//条件编译
// 第一张方式
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//
//#if 1
//		printf("%d ", arr[i]);
//#endif
//
//	}
//	return 0;
//}
    

//第二种方式
//int main()
//{
//
//#if 1==3
//	printf("haha\n");
//#elif 2==3
//	printf("hehe\n");
//#else 
//	printf("你好!\n");
//#endif
//
//	return 0;
//}


//第三种方式
#define DEBUG 

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//
////#if defined (DEBUG)
////		printf("%d ", arr[i]);
////#endif
//
////#ifdef DEBUG
////		printf("%d ", arr[i]);
////#endif
//
//
////反操作
////#if !defined(DEBUG)
////		printf("%d ", arr[i]);
////#endif
//
//#ifndef DEBUG
//		printf("%d ", arr[i]);
//#endif
//
//	}
//
//	return 0;
//}



//嵌套指令
//int main()
//{
//#if defined(DEBUG)
//    #if 1==2
//        printf("haha\n");
//    #endif
//
//    #ifdef DEBUG
//        printf("hello\n");
//    #endif 
//
//#elif !defined(DEBUG)
//    #if 0
//        printf("hehe\n");
//    #elif 0
//        printf("yes\n");
//    #else
//        printf("no\n");
//    #endif 
//
//#endif
//
//    return 0;
//}



//文件包含
//函数默认是extern的，变量的话就需要手动extern了
//C标准定义，函数默认是全局的，变量默认是局部的。
//所以你定义的函数在其他文件也可以调用。但定义的变量在其他文件必须要extern声明后使用


//""双引号的查找策略
//查找策略：先在源文件所在目录下查找，如果该头文件未找到，编译器就像查找库函数头文件一样在标
//准位置查找头文件。
//如果找不到就提示编译错误。

//<>的查找策略
//查找头文件直接去标准路径下去查找，如果找不到就提示编译错误。

//这样可以说，对于库文件也可以使用 "" 的形式包含


#include "add.h"

//int main()
//{
//    int ret = add(1, 2);
//    printf("%d\n", ret);
//
//    return 0;
//}
