#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

//系统函数
//int main()
//{
//	char arr1[] = { "hello,world" };
//	// strlen --> strlen(const char * str) --> string lenght 求字符串的长度
//	printf("%d\n", strlen(arr1));
//	// strcpy --> 字符串拷贝 strcpy(char * destinaton, const char * source) 目的地的内容会被覆盖
//	char arr2[] = { "#######" };
//	char* arr3 = strcpy(arr2, arr1);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	// strcmp --> 字符串比较
//	int result = strcmp(arr1, arr2);
//	printf("%d\n", result);
//	return 0;
//}

//int main()
//{
//	char arr[] = {"hello,world"};
//	printf("%s\n",arr);
//	memset(arr, '*', 5); // void *memset(void *str, int c, size_t n) 复制字符 c（一个无符号字符）到参数 str 所指向的字符串的前 n 个字符。
//	printf("%s\n", arr);
//	return 0;
//}

//自定义函数
int get_max(int x, int y)
{
	return(x > y) ? (x) : (y);
}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入需要比较的两个数:\n");
//	scanf("%d %d", &num1, &num2);
//	printf("较大的数为:%d\n", get_max(num1, num2));
//	return 0;
//}

//有问题
// 当实参传递给形参时,形参其实是实参的一份零时的拷贝
// 对形参的修改是不会影响到实参的
void swap(int x, int y) //形参--形式上的参数
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

//升级版
void swap_plus(int* pa, int* pb) 
{
	int tmp = 0; //pa、pb-->指针变量
	tmp = *pa; //*pa -->解引用操作
	*pa = *pb;
	*pb = tmp;
	*pa = 20;
}
//int main()
//{
//	int num1 = 0, num2 = 0;
//	printf("请输入需要比较的两个数:\n");
//	scanf("%d %d", &num1, &num2);
//	//调用函数
//	//传值调用
//	swap(num1, num2);
//
//	//传址调用
//	swap_plus(&num1, &num2); //实参-->实际传递给函数的值
//	printf("%d %d\n", num1, num2);
//	return 0;
//}

//判断是否是素数,是返回1，否返回2
int is_prime(int n)
{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				return 0;
			}
		}
	return 1;
}


//int main()
//{
//	//输入两个数,输出之间的所有的素数
//	int num1 = 0, num2 = 0, count = 0;
//	printf("输入两个数:\n");
//	scanf("%d %d", &num1, &num2);
//	if (num1 == 1)
//	{
//		num1 = num1 + 1;
//	}
//	for (int i = num1; i <= num2; i++)
//	{
//		//判断是否是素数
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n共计%d个素数\n", count);
//	return 0;
//}

//判断是否是闰年
int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	else {
		return 0;
	}
}

//int main()
//{
//	int start = 0, end = 0, count = 0;
//	printf("输入两个年份:\n");
//	scanf("%d %d", &start, &end);
//	for (int i = start; i <= end; i++)
//	{
//		//判断是否是闰年
//		if (1 == is_leap_year(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n共计%d个闰年\n", count);
//	return 0;
//}

//二分查找有序数组中的值
                  //本质arr是一个指针
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	// int sz = sizeof(arr)/sizeof(arr[0]);
	int right = sz ;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
//int main()
//{
//	//二分查找
//	//在一个有序的数组中查找具体的莫个数
//	//如果找到了返回,这个数的下表;找不到返回-1
//
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = binary_search(arr, k, sz); // arr 传递过去的是数组arr首元素的地址
//	if (ret == -1)
//	{
//		printf("找不到指定的数值!\n");
//	}
//	else
//	{
//		printf("找到了,下标为:%d\n",ret);
//	}
//	return 0;
//}

void count_time(int* p)
{
	(*p)++;
}
//int main()
//{
//	int num = 0;
//	count_time(&num);
//	printf("调用的次数:%d\n",num);
//	count_time(&num);
//	printf("调用的次数:%d\n", num);
//	count_time(&num);
//	printf("调用的次数:%d\n", num);
//	count_time(&num);
//	printf("调用的次数:%d\n", num);
//	return 0;
//}


//int main()
//{
//	printf("%d ", printf("%d ", printf("%d ", 43))); //4321 printf()函数的返回值是打印字符的个数
//	return 0;
//}



#include "add.h"  // 引用自己的头文件使用“”(双引号)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数调用
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//函数递归 12345
void print(int n)
{
	if (n > 9)
	{
		print(n/10);
	}
	printf("%d ", n % 10);
}

//int main()
//{
//	unsigned int num = 0;
//	printf("请输入一个数\n");
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

int my_strlen(char* str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}


//求字符串的长度
//递归的方法
int my_strlen_plus(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen_plus(str+1);
	}
	else
	{
		return 0;
	}
}
//int main()
//{
//	char arr[] = "bit";
//	//模式实现了一个strlen函数
//	//int len = my_strlen(arr); //arr是数组,数组传参,传过去的不是整个数组,而是第一个元素的地址
//	int len = my_strlen_plus(arr);
//	printf("len = %d\n", len);
//	return 0;
//}


//求阶乘
//非递归
int fac(int n)
{
	int ret = 1;
	for (int i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	return ret;
}
//递归
int factorial(int n)
{
	if (n > 1)
	{
		return n * factorial(n - 1);
	}
	else
	{
		return 1;
	}
}
//int main()
//{
//	int num = 0;
//	printf("请输入一个数\n");
//	scanf("%d", &num);
//	int var = factorial(num);
//	printf("%d的阶乘为%d\n", num, var);
//}


//求第n个斐波那契数
//递归

int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int fib_plus(int n)
{
	int a = 1, b = 1, c = 0;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		for (int i = 1; i <= n - 2; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}

	//int a = 1, b = 1, c = 1;
	//while (n > 2)
	//{
	//	c = a + b;
	//	a = b;
	//	b = c;
	//	n--;
	//}
	//return c;
}

//int main()
//{
//	int n = 0, ret = 0;
//	printf("请输入第几个数:\n");
//	scanf("%d", &n);
//	ret = fib_plus(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

