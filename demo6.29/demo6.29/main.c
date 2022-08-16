#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int key;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid;
//	printf("请输入需要搜索的数字:");
//	scanf("%d", &key);
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	if (left <= right)
//	{
//		printf("已找到,位置为:%d\n", mid);
//	}
//	else
//	{
//		printf("未找到!");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//	while (left <= right) 
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休息一秒 <windows.h>
//		system("cls");//执行系统命令--cls-->清空屏幕 <stdlib.h>
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20];
//	for (i=0; i<3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s",password);
//		if (strcmp(password ,"123456") == 0) // == 不能比较两个字符串是否相等，因该使用库函数-strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else {
//			printf("密码错误!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次机会使用完!\n");
//	}
//	return 0;
//}

//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++) {
//		printf("%d,",sum(a));
//	}
//}

//从大到小排列
//int main()
//{
//	int a, b, c, swap;
//	printf("请输入三个数:");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		swap = b;
//		b = a;
//		a = swap;
//		if (b < c)
//		{
//			swap = c;
//			c = b;
//			b = swap;
//		}
//	}
//	else if (a < c)
//	{
//		swap = c;
//		c = a;
//		a = swap;
//		if (b < c)
//		{
//			swap = c;
//			c = b;
//			b = swap;
//		}
//	}
//	else // a > b && a > c
//	{
//		if (b < c)
//		{
//			swap = c;
//			c = b;
//			b = swap;
//		}
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}



//从大到小排列
//int main()
//{
//    int a, b, c, tmp;
//	printf("请输入三个数:");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//打印1~100中3的倍数的数
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i%3 == 0)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}



//给定两个数,求这两个数的最大公约数
//int main()
//{
//	int m, n, r;
//	printf("请输入两个数:");
//	scanf("%d %d", &m, &n);
//	//辗转相除法
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n",n);
//	return 0;
//}



//打印闰年
//int main()
//{
//	int start, end, year, count = 0;
//	printf("请输入两个年份:");
//	scanf("%d %d", &start, &end);
//	for (year = start; year <= end; year++) 
//	{
//		if ((year % 400 == 0) || (year % 100 !=0 && year %4 == 0))
//		{
//			printf("%d ",year);
//			count++;
//		}
//	}
//	printf("\n闰年的个数:%d\n",count);
//	return 0;
//}



//求素数
//int main()
//{
//	int i, j, start, end, count = 0;
//	printf("请输入两个数:");
//	scanf("%d %d", &start, &end);
//	for (i=start; i<= end; i++)
//	{
//		for (j=2; j<i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\n素数的个数为:%d\n",count);
//	return 0;
//}

//int main()
//{
//	int i, j, start, end, count = 0;
//	printf("请输入两个数:");
//	scanf("%d %d", &start, &end);
//	for (i = start; i <= end; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\n素数的个数为:%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i, j, start, end, count = 0;
//	printf("请输入两个数:");
//	scanf("%d %d", &start, &end);
//	if (start % 2 == 0) //判断是否为偶数
//	{
//		for (i = start; i <= end; i++)
//		{
//			for (j = 2; j <= sqrt(i); j++)
//			{
//				if (i % j == 0)
//				{
//					break;
//				}
//			}
//			if (j > sqrt(i))
//			{
//				count++;
//				printf("%d ", i);
//			}
//		}
//	}
//	else
//	{
//		for (i = start; i <= end; i+=2)
//		{
//			for (j = 2; j <= sqrt(i); j++)
//			{
//				if (i % j == 0)
//				{
//					break;
//				}
//			}
//			if (j > sqrt(i))
//			{
//				count++;
//				printf("%d ", i);
//			}
//		}
//	}
//	printf("\n素数的个数为:%d\n", count);
//	return 0;
//}

//数9的个数
//求一个数的位数
int getNumberCount(int n)
{
	int count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return count;
}

//int main()
//{
//	int count = 0;
//	int start, end, numberCount;
//	int temp, number;
//	printf("请输入两个数:");
//	scanf("%d %d", &start, &end);
//	for ( int i = start; i <= end; i++)
//	{
//		numberCount = getNumberCount(i);
//		number = i;
//		for ( int j = 1; j <= numberCount; j++)
//		{
//			temp = number % 10;
//			number = number / 10;
//			if (temp == 9)
//			{
//				count++;
//			}
//		}
//	}
//	printf("共计出现了%d个9数字", count);
//	return 0;
//}

//919 % 10 = 9    919 / 10 = 91
//91 % 10 = 1     91 / 10 = 9
//9 % 10 = 9      9 / 10 = 0



//分数求和
//int main()
//{
//	int min, max;
//	int flag = 1;
//	double sum = 0, number = 0;
//	printf("请输入两个分母数:");
//	scanf("%d %d", &min, &max);
//	for (int i = min; i <= max; i++)
//	{
//		number = (1.0 / i) * flag;
//		printf("%f",number);
//		sum = sum + number;
//		flag = flag * (-1);
//	}
//	printf("结果为:%lf\n",sum);
//	return 0;
//}


//求最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int max = arr[0];
//	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大值为:%d", max);
//	return 0;
//}

//乘法口诀表
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d  ", i, j, i * j); //2d表示输出的十进制数占两位,不够空格补齐,-表示左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}