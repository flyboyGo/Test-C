#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test(int arr[])
{
	int sz = sizeof(arr) / sizeof(arr[0]); // 1
	//sizeof(arr)�޷�������������ռ�Ĵ�С,��Ϊ���ݹ�ȥ����������׵�ַ
	printf("%d\n", sz);
}

void test2(int* arr)
{
	int sz = sizeof(arr) / sizeof(arr[1]); // 1
	printf("%d\n", arr[3]);
}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	test2(arr);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%c\n",*pc);
//
//	char arr[] = "abcdefg";
//	char* pa = arr;//arrΪ�ַ�����Ԫ�ص�ַ(a�ĵ�ַ),��ֵ��ָ��pa
//	printf("%s\n", arr); //abcdefg,%s��Ҫ���ǲ�����ָ������,���Զ������õ�'\0'
//	printf("%s\n", pa);  //abcdefg,%s��Ҫ���ǲ�����ָ������,���Զ������õ�'\0'
//	printf("%c\n", *pa); //a
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdefg"; //"abcdefg"��һ�������ַ���,���ַ������׵�ַ(a�ĵ�ַ)��ֵ��p
//	//*p = "w"; //(�����޷�����)Segmentation fault -- �δ���
//	printf("%s\n", p);
//
//	//printf("%c\n", *p); //a
//	//printf("%s\n", p);  //abcdefg,,%s��Ҫ���ǲ�����ָ������,���Զ������õ�'\0'
//
//	return 0;
//}


//������
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}


//ָ������ --����
//int main()
//{
//	int arr[10] = { 0 }; //��������
//	char ch[5] = { 0 }; //�ַ�����
//	int* parr[4]; //�������ָ������� --ָ������
//	char* pch[5]; //����ַ�ָ������� --ָ������
//	return 0;
//}


//int main()
//{
//	int a = 10, b = 20, c = 30, d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int arr3[] = { -1,-2,-3,-4,-5 };
//	int* par[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(par[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����ָ�� --ָ��
//int main()
//{
//	int* p = NULL; //p������ָ�� --ָ�����ε�ָ�� --���Դ�����εĵ�ַ
//	char* pc = NULL; //pc���ַ�ָ�� --ָ���ַ���ָ�� --���Դ���ַ��ĵ�ַ
//	//����ָ�� --ָ�������ָ�� --�������ĵ�ַ
//
//	
//	//arr������ --��Ԫ�ص�ַ
//	//&arr[0] --��Ԫ�صĵ�ַ
//	//&arr --����ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", sizeof(arr)); //40
//	printf("%d\n", sizeof(&arr[0])); //4
//	printf("%d\n", sizeof(&arr)); //4
//
//	int(*p)[10] = &arr;//����ĵ�ַ�洢����
//	//�����p��������ָ��
//
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//    char*   (*pa)   [5] = &arr;
////paָ��������е�Ԫ��������char*;  ˵��pa��ָ��;  paָ����������5��Ԫ��
//
//	int arr2[10] = { 0 };
//	int (*pa2)[10] = &arr2;
//	return 0;
//}


//int main()
//{
//	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int (*pa)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa+i));//*pa == arr
//	//}
//
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*pa)[i]); //*pa == arr(������)
//	//}
//	return 0;
//}


//��ά����(����ָ��ͨ�������ڶ�λ����)
//�������������ʽ
void print1(int arr[3][5], int x, int y)
{
	int i = 0, j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
//������ָ�����ʽ
//����ָ��
void print2(int(*pa)[5], int x, int y)//��ά���鴫�ݵ�����Ԫ�ص�ַ,��ά�������Ԫ��Ϊһά����
{
	int i = 0, j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			//printf("%d ", *(*(pa + i) + j));
			//printf("%d ", (*(pa+i))[j]);
			//printf("%d ",*(pa[i]+j));
			printf("%d ", pa[i][j]);
		}
		printf("\n");
	}
}

//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
//	//print1(arr, 3, 5); //arr -- ������ -- ��Ԫ�ص�ַ 
//	printf("\n");
//	print2(arr, 3, 5); //arr -- ������ -- ��Ԫ�ص�ַ --��Ԫ���ǵ�һ�е�һά����
//	
//	
//	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr2;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]); //��pΪ��ʼ��ַ,�����±�Ϊi�ĵ�ַ
//		//printf("%d ", *(p + i));
//		//printf("%d ", *(arr2 + i));
//		//printf("%d ", arr2[i]); //arr2[i] == *(arr2+i) == *(p+i) == p[i]
//                                //��arr2Ϊ��ʼ��ַ,�����±�Ϊi�ĵ�ַ
//	}
//	return 0;
//}