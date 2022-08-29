#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* pc = "abcdefg";
//	printf("%c\n", *p);  //w
//	printf("%c\n", *pc); //a
//	printf("%s\n", pc);  //abcdefg
//	//指针数组 -- 数组 --存放指针的数组
//	int* arr[10];
//	char* ch[5];
//
//	//数组指针
//	//int* p2;//整形指针 -- 指向整形的指针
//	//char* p3;//字符指针 -- 指向字符的
//	int arr[5];
//	int (*pa) [5] = &arr;  //取出数组的指针,pa是数组指针
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


//数组参数、指针参数
//一维数组传参
//数组
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}

////指针
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



//二维数组传参
//数组
//void test(int arr[3][5])//ok？
//{}
////void test(int arr[][])//ok？err
////{}
//void test(int arr[][5])//ok？
//{}
//总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
//因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
//这样才方便运算。

//指针
//void test(int* arr)//ok？waring?
//{}
//void test(int* arr[5])//ok？err
//{}
//void test(int(*arr)[5])//ok？
//{}
//void test(int** arr)//ok？ err
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test4(arr);
//}



//一级指针传参
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
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}


//void test1(int* p)
//{}
//test1函数能接收什么参数？
// 
//void test2(char* p)
//{}
//test2函数能接收什么参数？

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



//二级指针传参
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


//当函数的参数为二级指针的时候，可以接收什么参数?
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


//数组指针 -- 是指向数组的指针
//函数指针 -- 是指向函数的指针
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
//	//&函数名 和 函数名 都是函数的地址
//	printf("%p\n", &Add); //Add()函数的地址
//	printf("%p\n", Add);
//
//	//函数指针 -- 保存函数的地址
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