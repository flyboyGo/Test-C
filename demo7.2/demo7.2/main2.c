#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//int main()
//{
//	//����2�����ͱ���
//	int a = 3, b = 5;
//	/*
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d,b = %d\n", a, b);
//	*/
//	//�������������
//	//int -- 4���ֽ� -- 32bit --���ֵ(INT_MAX=2147483647)
//
//    //^������(�����ư�λ����)
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d,b = %d\n", a, b);
//	return 0;   
//}

//int main()
//{
//	//��������������ֻ����һ�ε�Ԫ��
//	//�������
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
//			printf("%dֻ����һ��!\n", arr[i]);
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

//�����������㽻���ɵ�
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
//	printf("������ = %d\n", ret);
//	return 0;
//}

