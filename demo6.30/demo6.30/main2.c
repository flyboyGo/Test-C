#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main()
//{
//	// ����һ������--�������--10��
//	int arr[10] = {1,2,3}; //����ȫ��ʼ��,ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ��
//	char arr2[5] = {'a','b',98};
//	char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	char arr5[3] = "abc";
//	char arr6[] = { 'a','b','c' };
//	printf("%s\n",arr5);//���ʱ������
//	printf("%d\n", sizeof(arr4)); //sizeof() �������ڿռ�Ĵ�С
//	printf("%d\n", strlen(arr4)); //strlen() �����ַ����ĳ���(������'\0')
//	int n = 5;
//	//char arr3[n]; //error �����ǳ������ʽ
//	return 0;
//}

//1��strlen �� sizeofû����ʲô����
//2��strlen�����ַ������ȵ�--ֻ������ַ����󳤶�--�⺯��--ʹ����Ҫ����ͷ�ļ�
//3��sizeof������������顢���͵Ĵ�С--��λ���ֽ�--������


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1)); //4
//	printf("%d\n", sizeof(arr2)); //3
//	printf("%d\n", strlen(arr1)); //3
//	printf("%d\n", strlen(arr2)); //�����
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

//һά����Ĵ�����ʹ�á����ڴ��д洢�ķ�ʽ
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


//��ά����Ĵ�����ʹ�á����ڴ��д洢�ķ�ʽ
//int main()
//{
//	int arr[3][4] = { {1,2,3} , {4,5} ,{6} };
//	int arr2[3][4] = { 1,2,3,4,5 };
//	int arr3[][3] = {1,2,3,4}; //����ʡ����,������ʡ����
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