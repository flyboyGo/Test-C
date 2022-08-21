#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble_sort(int arr[])
{
	int tmp;
	for (int i = 0; i < 9; i++)
	{
		int flag = 1;//假设这一趟要排序的数据已经有序了
		for (int j = 0; j < 10 - i; j++)
		{

			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0; //本趟排序的数据其实不完全有序
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

void arr_printf(int* arr)
{
	for (int k = 0; k < 10; k++)
	{
		printf("%d ", *(arr+k));
	}
}
//int main()
//{
//	int arr[] = { 11,23,0,4,1,56,72,14,15,90 };
//	//对arr进行排序,排成升序
//	//arr十数组,我们对数组arr进行传参,实际上传递过去的是数组arr首元素的地址 &arr[0]
//	bubble_sort(arr);
//	arr_printf(arr);
//	for (int k = 0; k < 10; k++)
//	{
//		printf("%d ", arr[k]);
//	}
//	return 0;
//}



void arr_address(int arr[])
{
	printf("%p\n",arr);//地址一致
	printf("%p\n", arr[0]);//地址一致
	printf("%d\n", *arr); //1
}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%p\n", arr); //地址一致(数组首元素的地址)
//	printf("%p\n", arr + 1); //地址指向下一个元素
//	printf("%p\n", &arr[0]); //地址一致(数组首元素的地址)
//	printf("%p\n", &arr[0] + 1); ///地址指向下一个元素
//	printf("%p\n", &arr); //数组的地址
//	printf("%p\n", &arr + 1); //地址指向下一个相同大小数组的首地址 
//
//
//	printf("%d\n",*arr); // 1
//	printf("%d\n", *(arr + 1));//2
//	arr_address(arr);
//
//	//数组不表示数组的首元素地址的情况如下
//	//1、sizeof(数组名) -->数组名表示整个数组,sizeof(数组名)计算是整个数组的大小,单位是字节
//	//2、数组名,数组名表示整个数组,&数组名,取出的是整个数组的地址
//	return 0;
//}