#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void prints(char* str)
//{
//	printf("hehe:%s",str);
//}

//void tests(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}

//int main()
//{
//	tests(prints);
//	return 0;
//}

//int pAdd(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	//指针数组
//	int* arr[10];
//	//数组指针
//	int* (*pa)[10] = &arr;
//	//函数指针
//	int (*pAdd)(int, int) = pAdd; //&pAdd
//	/*int sum = (*pAdd)(1, 3);*/
//	int sum = pAdd(1, 3);
//	//函数指针数组
//	int (*pArr[5])(int, int);
//	//指向函数指针数组的指针
//	int (*(*pArr)[5])(int, int) = &pArr;
//
//	return 0;
//}


void out_data(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void bubble_sort(int arr[], int sz) //可以排序任意数据类型
{
	int tmp = 0, flag = 1;
	int i = 0, j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

struct Stu
{
	char name[20];
	int age;
};
//int main()
//{
//	//冒泡排序函数
//	//冒泡排序函数只能排序整形数组
//	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	out_data(arr, sz);
//	struct Stu s[3] = { {"李四",20},{"王五",50},{"赵六",67} };
//	float f[8] = { 1.0,2.0,3.0,4.0,5.0 };
//	return 0;
//}

//qsort -库函数-- 快排-- 可以排序任意数据类型的数据
//void qsort(void* base, size_t nitems, size_t size,
//	       int (*compar)(const void*, const void*));
/*
* 
    base -- 指向要排序的数组的第一个元素的指针。
    nitems -- 由 base 指向的数组中元素的个数。
    size -- 数组中每个元素的大小，以字节为单位。
    compar -- 用来比较两个元素的函数。
*/
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	/*char* pc = &a;*/
//
//	char ch = 'w';
//	void* p = &a;
//	//*p = 0;//err
//	p = &ch;
//
//	//void* 类型的指针 可以接收任意类型的地址
//	//void* 类型的指针 无法进行解引用操作,因为无具体类型,无法确定操作几个字节
//	//void* 类型的指针 无法进行加减整数的操作,因为无具体类型,无法确定操作几个字节,因此步长无法确定
//	return 0;
//}


int cmp_int(const void* e1, const void* e2)
{
	//比较两个整型值的
	return *(int*)e1 - *(int*)e2;
}

int cmp_float(const void* e1, const void* e2)
{
	//比较两个浮点型数
	//if (*(float*)e1 == *(float*)e2)
	//{
	//	return 0;
	//}
	//else if (*(float*)e1 > *(float*)e2)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return -1;
	//}

	return (int)(*(float*)e1 - *(float*)e2);
}

void out_float_data(float arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%.2f ", arr[i]);
	}
}

#include <stdlib.h>
#include <string.h>
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	out_data(arr, sz);
//	printf("\n");
//
//	float arr2[] = { 1.0,3.0,5.0,7.0,9.0,2.0,4.0,6.0,8.0,10.0 };
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	qsort(arr2, sz2, sizeof(arr2[0]), cmp_float);
//	out_float_data(arr2, sz2);
//	return 0;
//}

int cmp_structStu_byAge(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_structStu_byName(const void* e1, const void* e2)
{
	//比较名字就是比较字符串
	//字符串比较不能直接用 ><=来比较,因该使用strcmp函数
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

//int main()
//{
//	struct Stu s[3] = { {"李四",20},{"王五",10},{"赵六",67} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_structStu_byAge);
//	qsort(s, sz, sizeof(s[0]), cmp_structStu_byName);
//	return 0;
//}

//qsort库函数的参数的介绍
//第一个参数:待排序数组的首元素的地址
//第二个参数:待排序数组中元素的个数
//第三个参数:待排序数组中每个元素所在空间的大小--单位是字节
//第四个参数:函数指针,比较待排序数组中元素大小的依据、方法的函数的地址--这个函数由使用者自己实现
//             函数指针的两个参数是:待比较的两个元素的地址

//实现bubble_sort函数的程序员,不知道未来排序的数据类型
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort_plus(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素的比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void test1()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//使用bubble_sort_plus的程序员一定知道自己排序的是什么数据
	bubble_sort_plus(arr, sz, sizeof(arr[0]), cmp_int);
	out_data(arr, sz);
}
void test3()
{
	struct Stu s[3] = { {"李四",20},{"王五",10},{"赵六",67} };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort_plus(s, sz, sizeof(s[0]), cmp_structStu_byAge);
	bubble_sort_plus(s, sz, sizeof(s[0]), cmp_structStu_byName);
}
int main()
{
	test1();
	test3();
	return 0;
}