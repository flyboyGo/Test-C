#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* pc = "abcdefg";
//	printf("%c\n", *p);  //w
//	printf("%c\n", *pc); //a
//	printf("%s\n", pc);  //abcdefg
//	//ָ������ -- ���� --���ָ�������
//	int* arr[10];
//	char* ch[5];
//
//	//����ָ��
//	//int* p2;//����ָ�� -- ָ�����ε�ָ��
//	//char* p3;//�ַ�ָ�� -- ָ���ַ���
//	int arr[5];
//	int (*pa) [5] = &arr;  //ȡ�������ָ��,pa������ָ��
//
//	return 0;
//}

//int main()
//{
//	int arr[5];
//	int* parr1[10];
//	int(*parr2)[10];
//	int(*parr3[10])[5];
//}


//���������ָ�����
//һά���鴫��
//����
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}

////ָ��
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}



//��ά���鴫��
//����
//void test(int arr[3][5])//ok��
//{}
////void test(int arr[][])//ok��err
////{}
//void test(int arr[][5])//ok��
//{}
//�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
//��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
//�����ŷ������㡣

//ָ��
//void test(int* arr)//ok��waring?
//{}
//void test(int* arr[5])//ok��err
//{}
//void test(int(*arr)[5])//ok��
//{}
//void test(int** arr)//ok�� err
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test4(arr);
//}



//һ��ָ�봫��
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *(p + i));
	}
}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}


//void test1(int* p)
//{}
//test1�����ܽ���ʲô������
// 
//void test2(char* p)
//{}
//test2�����ܽ���ʲô������

//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a); //ok
//	test1(p1);//ok
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);
//	return 0;
//}



//����ָ�봫��
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}


//�������Ĳ���Ϊ����ָ���ʱ�򣬿��Խ���ʲô����?
//void test(char** p)
//{
//}

//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	test(&pc);
//	test(ppc);

//	char* arr[10];
//	test(arr);//Ok?
//	return 0;
//}


//����ָ�� -- ��ָ�������ָ��
//����ָ�� -- ��ָ������ָ��
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10, b = 20;
//	printf("%d\n", Add(a, b));
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	printf("%p\n", &Add); //Add()�����ĵ�ַ
//	printf("%p\n", Add);
//
//	//����ָ�� -- ���溯���ĵ�ַ
//	int (*pa)(int, int) = Add;
//	printf("%d\n",(*pa)(2,3)); //5
//	return 0;
//}


void Print(char* str)
{
	printf("%s\n", str);
}
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello,world");
//	return 0;
//}