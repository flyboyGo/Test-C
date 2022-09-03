#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//左旋转字符串
//暴力求解法
char* left_move(char* arr, int n)
{
	assert(arr);
	assert(n <= strlen(arr));
	assert(arr);
	char tmp = '\0';

	int i = 0, j = 0;
	for (i = 0; i < n; i++)
	{
		j = 0;
		tmp = *arr;
		while (*(arr + j + 1) != '\0')
		{
			*(arr + j) = *(arr + j + 1);
			j++;
		}
		*(arr + j) = tmp;
	}
	return arr;
}

//改进版
//三步翻转法
#include <string.h>
char* reverse_str2(char* left, char* right)
{
	assert(left);
	assert(right);
	char tmp = 0;
	while (left < right)
	{
		tmp = *right;
		*right = *left;
		*left = tmp;
		right--;
		left++;
	}
}
char* left_move_plus(char* arr, int n)
{
	assert(arr);
	assert(n <= strlen(arr));
	reverse_str2(arr, arr + n - 1);//逆序左边
	reverse_str2(arr + n, arr + strlen(arr) - 1);//逆序右边
	reverse_str2(arr, arr + strlen(arr) - 1);//逆序整体
}
//int main()
//{
//	char arr[] = "ABCDEF";
//	left_move(arr, 4);
//	printf("%s\n", arr);
//
//	char arr2[] = "123456";
//	left_move_plus(arr2, 4);
//	printf("%s\n", arr2);
//	return 0;
//}


//判断是否由左翻转得出
int is_left_move(char* str1, char* str2)
{
	if (strlen(str1) != strlen(str2))
		return 0;
	//1、在str1字符串中追加一个str1字符串
	//strcat、strncat
	//strcat(str1, str1);
	strncat(str1, str1, strlen(str1));
	//2、判断str2指向的字符串是否是str1指向的字符串的字串
	//strstr-找字串
	char* ret = strstr(str1, str2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

//int main()
//{
//	char arr[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr, arr2);
//
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}	
//	return 0;
//}


//杨氏三角形
int FindNum(int arr[3][3], int k, int row, int col)
{
	int x = 0;
	int y = col - 1;
	while ((x <= row - 1) && (y >= 0))
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			return 1;
		}
	}
	//找不到
	return 0;
}

//改进版
int FindNum_Plus(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while ((x <= *px - 1) && (y >= 0))
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	//找不到
	*px = -1;
	*py = -1;
	return 0;
}


//int main()
//{
//	//有一个数字矩阵、矩阵的每行从左到右是递增的,矩阵从上到下是递增的
//	//请编写程序在这样的矩阵中查找某个数字是否是存在的
//	//要求:时间复杂度小于0(n)
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3, y = 3;
//	//int ret = FindNum(arr, k, 3, 3);
//	
//	//返回型参数(x, y),既传递需要的参数值,又返回最后的结果
//	int ret = FindNum_Plus(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了!\n");
//		printf("坐标为:%d %d\n", x+1, y+1);
//	}
//	else
//	{
//		printf("找不到!\n");
//	}
//	return 0;
//}