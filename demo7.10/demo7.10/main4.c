#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void prints(char* str)
//{
//	printf("hehe:%s",str);
//}

//void tests(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}

//int main()
//{
//	tests(prints);
//	return 0;
//}

//int pAdd(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	//ָ������
//	int* arr[10];
//	//����ָ��
//	int* (*pa)[10] = &arr;
//	//����ָ��
//	int (*pAdd)(int, int) = pAdd; //&pAdd
//	/*int sum = (*pAdd)(1, 3);*/
//	int sum = pAdd(1, 3);
//	//����ָ������
//	int (*pArr[5])(int, int);
//	//ָ����ָ�������ָ��
//	int (*(*pArr)[5])(int, int) = &pArr;
//
//	return 0;
//}


void out_data(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void bubble_sort(int arr[], int sz) //��������������������
{
	int tmp = 0, flag = 1;
	int i = 0, j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

struct Stu
{
	char name[20];
	int age;
};
//int main()
//{
//	//ð��������
//	//ð��������ֻ��������������
//	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	out_data(arr, sz);
//	struct Stu s[3] = { {"����",20},{"����",50},{"����",67} };
//	float f[8] = { 1.0,2.0,3.0,4.0,5.0 };
//	return 0;
//}

//qsort -�⺯��-- ����-- �������������������͵�����
//void qsort(void* base, size_t nitems, size_t size,
//	       int (*compar)(const void*, const void*));
/*
* 
    base -- ָ��Ҫ���������ĵ�һ��Ԫ�ص�ָ�롣
    nitems -- �� base ָ���������Ԫ�صĸ�����
    size -- ������ÿ��Ԫ�صĴ�С�����ֽ�Ϊ��λ��
    compar -- �����Ƚ�����Ԫ�صĺ�����
*/
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	/*char* pc = &a;*/
//
//	char ch = 'w';
//	void* p = &a;
//	//*p = 0;//err
//	p = &ch;
//
//	//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//	//void* ���͵�ָ�� �޷����н����ò���,��Ϊ�޾�������,�޷�ȷ�����������ֽ�
//	//void* ���͵�ָ�� �޷����мӼ������Ĳ���,��Ϊ�޾�������,�޷�ȷ�����������ֽ�,��˲����޷�ȷ��
//	return 0;
//}


int cmp_int(const void* e1, const void* e2)
{
	//�Ƚ���������ֵ��
	return *(int*)e1 - *(int*)e2;
}

int cmp_float(const void* e1, const void* e2)
{
	//�Ƚ�������������
	//if (*(float*)e1 == *(float*)e2)
	//{
	//	return 0;
	//}
	//else if (*(float*)e1 > *(float*)e2)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return -1;
	//}

	return (int)(*(float*)e1 - *(float*)e2);
}

void out_float_data(float arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%.2f ", arr[i]);
	}
}

#include <stdlib.h>
#include <string.h>
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	out_data(arr, sz);
//	printf("\n");
//
//	float arr2[] = { 1.0,3.0,5.0,7.0,9.0,2.0,4.0,6.0,8.0,10.0 };
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	qsort(arr2, sz2, sizeof(arr2[0]), cmp_float);
//	out_float_data(arr2, sz2);
//	return 0;
//}

int cmp_structStu_byAge(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_structStu_byName(const void* e1, const void* e2)
{
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ���ֱ���� ><=���Ƚ�,���ʹ��strcmp����
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

//int main()
//{
//	struct Stu s[3] = { {"����",20},{"����",10},{"����",67} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_structStu_byAge);
//	qsort(s, sz, sizeof(s[0]), cmp_structStu_byName);
//	return 0;
//}

//qsort�⺯���Ĳ����Ľ���
//��һ������:�������������Ԫ�صĵ�ַ
//�ڶ�������:������������Ԫ�صĸ���
//����������:������������ÿ��Ԫ�����ڿռ�Ĵ�С--��λ���ֽ�
//���ĸ�����:����ָ��,�Ƚϴ�����������Ԫ�ش�С�����ݡ������ĺ����ĵ�ַ--���������ʹ�����Լ�ʵ��
//             ����ָ�������������:���Ƚϵ�����Ԫ�صĵ�ַ

//ʵ��bubble_sort�����ĳ���Ա,��֪��δ���������������
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort_plus(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�صıȽ�
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void test1()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ��bubble_sort_plus�ĳ���Աһ��֪���Լ��������ʲô����
	bubble_sort_plus(arr, sz, sizeof(arr[0]), cmp_int);
	out_data(arr, sz);
}
void test3()
{
	struct Stu s[3] = { {"����",20},{"����",10},{"����",67} };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort_plus(s, sz, sizeof(s[0]), cmp_structStu_byAge);
	bubble_sort_plus(s, sz, sizeof(s[0]), cmp_structStu_byName);
}
int main()
{
	test1();
	test3();
	return 0;
}