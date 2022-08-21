#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main()
//{
//	// 创建一个数组--存放整型--10个
//	int arr[10] = {1,2,3}; //不完全初始化,剩下的元素默认初始化为零
//	char arr2[5] = {'a','b',98};
//	char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	char arr5[3] = "abc";
//	char arr6[] = { 'a','b','c' };
//	printf("%s\n",arr5);//输出时有问题
//	printf("%d\n", sizeof(arr4)); //sizeof() 计算所在空间的大小
//	printf("%d\n", strlen(arr4)); //strlen() 计算字符串的长度(不包括'\0')
//	int n = 5;
//	//char arr3[n]; //error 必须是常量表达式
//	return 0;
//}

//1、strlen 与 sizeof没有声什么关联
//2、strlen是求字符串长度的--只能针对字符串求长度--库函数--使用需要引用头文件
//3、sizeof计算变量、数组、类型的大小--单位是字节--操作符


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1)); //4
//	printf("%d\n", sizeof(arr2)); //3
//	printf("%d\n", strlen(arr1)); //3
//	printf("%d\n", strlen(arr2)); //随机数
//	char arr3[3] = { "abc"};
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	printf("%c\n", arr[3]);
//	for (int i = 0; i < (int)strlen(arr); i++)
//	{
//		printf("%c ", arr[i]);
//	}
//
//	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//	return 0;
//}

//一维数组的创建与使用、在内存中存储的方式
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	printf("%d\n", *arr); // 1
//	printf("%d\n", *(arr+1)); //2
//	printf("%d\n", *(&arr[1] + 1)); //3
//	printf("%p\n", &arr[0]);
//	return 0;
//}


//二维数组的创建与使用、在内存中存储的方式
//int main()
//{
//	int arr[3][4] = { {1,2,3} , {4,5} ,{6} };
//	int arr2[3][4] = { 1,2,3,4,5 };
//	int arr3[][3] = {1,2,3,4}; //可以省略行,不可以省略列
//	char ch[5][3] = { {""},{"abc"}};
//	char ch2[5][3] = { {'a','b','c'},{"abc"} };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p  ", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//
//
//}