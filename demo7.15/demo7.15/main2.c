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

//���������
//int main()
//{
//	int n = 0;
//	int data[10][10] = { 0 };
//	printf("��������������εĲ���:>");
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


//�ҳ�����
//A˵: ������
//B˵: ��C
//C˵: ��D
//D˵: C�ں�˵
//��֪������˵���滰,һ����˵�˼ٻ�
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
//								printf("AΪ%d��BΪ%d��CΪ%d��DΪ%d��EΪ%d\n", a, b, c, d, e);
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
//	//����ռ�
//	int* p = (int*)malloc(10 & sizeof(int));
//	//ʹ�ÿռ�
//	//.........
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	//����һ������ָ��,ָ��ĺ���������int�ββ��ҷ���һ������ָ��,
//	//���ص�ָ��ָ��һ����һ��int�β��ҷ���int�ĺ���
//	//int(*   (*F)(int, int))(int)
//	return 0;
//}


//ģ��qsortʵ��ͨ�õ�ð������
//��ӡ
void my_print_int(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//����
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
//�ȽϺ���
int cmp_int(const void* e1, const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}
//����
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
//	int* ptr2 = (int*)(*(aa + 1)); //aa��λ������Ԫ�ص�ַ,aa + 1��ά����ڶ��е�ַ(*(aa + 1) == aa[1])
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


