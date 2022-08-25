#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a; //初始化指针变量
//	int* p = NULL; //NULL-> 用来初始化指针的,给指针赋值的  #define NULL ((void *)0)
//	int b = 10;
//	int* pb = &b;
//	*pb = 20;
//	pb = NULL; //pb指向的空间已释放,如果继续保存指针,给指针赋值NULL
//	*pb = 10; //0x00031000 处(位于 demo7.5.exe 中)引发的异常: 
//	          //0xC0000005: 写入位置 0x00000000 时发生访问冲突。
//	//因为pb指针指向的空间已经释放,如果再次使用会发生异常
//	if (pb != NULL) //使用前先判断指针是否为空
//	{
//		//操作代码
//	}
//	return 0;
//}