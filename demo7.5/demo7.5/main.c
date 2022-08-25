#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//指针变量
//int main()
//{
//	int a = 10; //在内存中开辟一块空间
//	int* p = &a;//这里我们对变量a，取出它的地址，可以使用&操作符。
//	            //a变量占用4个字节的空间，这里是将a的4个字节的第一个字节的地址存放在p变量
//	            //中，p就是一个之指针变量。
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char *));  //4
//	printf("%d\n", sizeof(short *)); //4
//	printf("%d\n", sizeof(int *));   //4
//	printf("%d\n", sizeof(float *)); //4
//	return 0;
//}

//指针与指针类型

//指针类型决定了指针进行解引用操作的时候,能够访问空间的大小
//int *p; *p能够访问4个字节
//char *p; *p能够访问1个字节
//double *p; *p能够访问8个字节

//总结指针的类型决定了，对指针解引用的时候有多大的权限（能操作几个字节）。
//比如:char* 的指针解引用就只能访问一个字节，而 int* 的指针的解引用就能访问四个字节。
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	//*pa = 0; //解引用时,对a变量的四个字节进行了操作
//	char* pc = &a;
//	*pc = 0; //解引用时,只对a变量的1个字节进行了操作
//	printf("%p\n", pc);
//	printf("%p\n", pa);//同上输出的值是一致的
//	printf("%x\n", *pa);
//	printf("%d\n", *pc);       
//	printf("%p\n",&a); //同上输出的值是一致的
//	return 0;
//}

//指针加减整数
//总结：
//指针的类型决定了，对指针解引用的时候有多大的权限（能操作几个字节）。
//比如:char* 的指针解引用就只能访问一个字节，而 int* 的指针的解引用就能访问四个字节。
//int main()
//{
//	int a = 0x1122334;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n",pa);
//	printf("%p\n", pa + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名->数组首元素地址
//	//char* p = arr;
//	printf("%d\n", sizeof(p)); //4
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
//	{
//		printf("%d ",arr[j]);
//	}
//	return 0;
//} 


//概念:野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）

//1.指针变量未初始化
//int main()
//{
//	//int a;//局部变量不初始化,默认随机值
//	int* p;//局部的指针变量,就被初始化随机值
//	
//	return 0;
//}

//2.指针越界
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 12; i++)
//	{
//		//*(p++) = i;
//      *p++ = i;
//	}
//	return 0;
//}

//3. 指针指向的空间释放
int* test()
{
	int a = 10;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//return &a;
	return arr;
}
//int main()
//{
//	int* p = test();
//	//*p = 20; 
//	//printf("%d\n", *p);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ",*p++);
//	}
//	return 0;
//}