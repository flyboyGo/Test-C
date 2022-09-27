#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

//笔试题目
// void GetMemory(char *p)
// {
//      p = (char *)malloc(100);
// }
// void Test(void)
// {
//      char *str = NULL;
//      GetMemory(str);
//      strcpy(str, "hello world");
//      printf(str);
// }

//改正方式一
// void GetMemory(char **p)
// {
//      *p = (char *)malloc(100);
// }
// void Test(void)
// {
//      char *str = NULL;
//      GetMemory(&str);
//      strcpy(str, "hello world");
//      printf("%s\n", str);
//      free(str);
//      str = NULL;
// }

//改正方式二
char* GetMemory(char* p)
{
    p = (char*)malloc(100);
    return p;
}
void Test(void)
{
    char* str = NULL;
    str = GetMemory(str);
    strcpy(str, "hello world");
    printf("%s\n", str);
    free(str);
    str = NULL;
}

/*
   1、运行代码程序会出现崩溃的现象
   2、程序存在内存泄露的问题
   str以值传递的形式的问题
   p是GetMemory函数的形参,只能函数内部有效
   等GetMemory函数返回以后,动态开辟内存尚未释放并且无法找到,所以会造成内存泄漏
*/
// int main()
// {
//     Test();
//     return 0;
// }


//返回栈空间地址的问题
char* GetMemory2(void)
{
    char p[] = "hello world";
    return p;
}
void Test2(void)
{
    char* str = NULL;
    str = GetMemory2();
    printf("%s\n", str);
}

// int main()
// {
//      Test2();
//      return 0;
// }


void Test3(void)
{
    char* str = (char*)malloc(100);
    strcpy(str, "hello");
    free(str);
    if (str != NULL)
    {
        strcpy(str, "world");
        printf("%s\n", str);
    }
}
//int main()
//{
//    Test3();
//    return 0;
//}


