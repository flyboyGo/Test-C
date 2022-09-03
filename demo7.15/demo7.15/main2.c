#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d\n", a + b, c);
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}

//杨辉三角形
//int main()
//{
//	int n = 0;
//	int data[10][10] = { 0 };
//	printf("请输入杨辉三角形的层数:>");
//	scanf("%d", &n);
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i + 1; j++)
//		{
//			if (j == 0 || j == i)
//			{
//				data[i][j] = 1;
//				printf("%d ", 1);
//			}
//			else
//			{
//				data[i][j] = data[i - 1][j] + data[i - 1][j - 1];
//				printf("%d ", data[i - 1][j] + data[i - 1][j - 1]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}


//找出凶手
//A说: 不是我
//B说: 是C
//C说: 是D
//D说: C在胡说
//已知三个人说了真话,一个人说了假话
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((((b == 2) ^ (a == 3)) + ((b == 2) ^ (e == 4)) + 
//							 ((c == 1) ^ (d == 2)) + ((c == 5) ^ (d == 3)) + 
//							 ((e == 4) ^ (a == 1))) == 5)
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("A为%d、B为%d、C为%d、D为%d、E为%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


#include <stdlib.h>
//int main()
//{
//	//申请空间
//	int* p = (int*)malloc(10 & sizeof(int));
//	//使用空间
//	//.........
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	//定义一个函数指针,指向的函数有两个int形参并且返回一个函数指针,
//	//返回的指针指向一个有一个int形参且返回int的函数
//	//int(*   (*F)(int, int))(int)
//	return 0;
//}


//模仿qsort实现通用的冒泡排序
//打印
void my_print_int(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//交换
void my_swap(char* e1, char* e2,int width)
{
	int i = 0;
	char tmp = 0;
	for (i = 0; i < width; i++)
	{
		tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}
//比较函数
int cmp_int(const void* e1, const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}
//排序
void my_bubble_qsort(const void* base, int num, int width, int cmp(void* e1, void* e2))
{
	int i = 0, j = 0;
	for (i = 0; i < num - 1; i++)
	{
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				my_swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_bubble_qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	my_print_int(arr, 10);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1)); //aa二位数组首元素地址,aa + 1二维数组第二行地址(*(aa + 1) == aa[1])
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


