#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble_sort(int arr[])
{
	int tmp;
	for (int i = 0; i < 9; i++)
	{
		int flag = 1;//������һ��Ҫ����������Ѿ�������
		for (int j = 0; j < 10 - i; j++)
		{

			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0; //���������������ʵ����ȫ����
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
//	//��arr��������,�ų�����
//	//arrʮ����,���Ƕ�����arr���д���,ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ &arr[0]
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
	printf("%p\n",arr);//��ַһ��
	printf("%p\n", arr[0]);//��ַһ��
	printf("%d\n", *arr); //1
}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%p\n", arr); //��ַһ��(������Ԫ�صĵ�ַ)
//	printf("%p\n", arr + 1); //��ַָ����һ��Ԫ��
//	printf("%p\n", &arr[0]); //��ַһ��(������Ԫ�صĵ�ַ)
//	printf("%p\n", &arr[0] + 1); ///��ַָ����һ��Ԫ��
//	printf("%p\n", &arr); //����ĵ�ַ
//	printf("%p\n", &arr + 1); //��ַָ����һ����ͬ��С������׵�ַ 
//
//
//	printf("%d\n",*arr); // 1
//	printf("%d\n", *(arr + 1));//2
//	arr_address(arr);
//
//	//���鲻��ʾ�������Ԫ�ص�ַ���������
//	//1��sizeof(������) -->��������ʾ��������,sizeof(������)��������������Ĵ�С,��λ���ֽ�
//	//2��������,��������ʾ��������,&������,ȡ��������������ĵ�ַ
//	return 0;
//}