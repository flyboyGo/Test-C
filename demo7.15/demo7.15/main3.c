#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//����ת�ַ���
//������ⷨ
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

//�Ľ���
//������ת��
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
	reverse_str2(arr, arr + n - 1);//�������
	reverse_str2(arr + n, arr + strlen(arr) - 1);//�����ұ�
	reverse_str2(arr, arr + strlen(arr) - 1);//��������
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


//�ж��Ƿ�����ת�ó�
int is_left_move(char* str1, char* str2)
{
	if (strlen(str1) != strlen(str2))
		return 0;
	//1����str1�ַ�����׷��һ��str1�ַ���
	//strcat��strncat
	//strcat(str1, str1);
	strncat(str1, str1, strlen(str1));
	//2���ж�str2ָ����ַ����Ƿ���str1ָ����ַ������ִ�
	//strstr-���ִ�
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


//����������
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
	//�Ҳ���
	return 0;
}

//�Ľ���
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
	//�Ҳ���
	*px = -1;
	*py = -1;
	return 0;
}


//int main()
//{
//	//��һ�����־��󡢾����ÿ�д������ǵ�����,������ϵ����ǵ�����
//	//���д�����������ľ����в���ĳ�������Ƿ��Ǵ��ڵ�
//	//Ҫ��:ʱ�临�Ӷ�С��0(n)
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3, y = 3;
//	//int ret = FindNum(arr, k, 3, 3);
//	
//	//�����Ͳ���(x, y),�ȴ�����Ҫ�Ĳ���ֵ,�ַ������Ľ��
//	int ret = FindNum_Plus(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵ���!\n");
//		printf("����Ϊ:%d %d\n", x+1, y+1);
//	}
//	else
//	{
//		printf("�Ҳ���!\n");
//	}
//	return 0;
//}