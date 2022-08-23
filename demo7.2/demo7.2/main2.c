#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//int main()
//{
//	//交换2个整型变量
//	int a = 3, b = 5;
//	/*
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d,b = %d\n", a, b);
//	*/
//	//存在溢出的问题
//	//int -- 4个字节 -- 32bit --最大值(INT_MAX=2147483647)
//
//    //^异或操作(二进制按位操作)
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d,b = %d\n", a, b);
//	return 0;   
//}

//int main()
//{
//	//输入整型数组中只出现一次的元素
//	//暴力求解
//	int arr[] = {1,2,3,4,5,6,7,6,5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int count = 0;
//
//	for (int i = 0; i < sz; i++)
//	{
//		count = 0; 
//		for (int j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("%d只出现一次!\n", arr[i]);
//		}
//	}
//
//	return 0;
//}

//3^3=0;
//5^5=0
//a^a=0

//0^3=3
//0^5=0
//0^a=a

//异或操作是满足交换律的
//3^5^3=5
//3^3^5=5


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,6,5,4,3,2,1 };
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("单生狗 = %d\n", ret);
//	return 0;
//}

