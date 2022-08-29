#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test(int arr[])
{
	int sz = sizeof(arr) / sizeof(arr[0]); // 1
	//sizeof(arr)无法计算整个数组空间的大小,因为传递过去的是数组的首地址
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
//	char* pa = arr;//arr为字符串首元素地址(a的地址),赋值给指针pa
//	printf("%s\n", arr); //abcdefg,%s需要的是参数是指针类型,会自动解引用到'\0'
//	printf("%s\n", pa);  //abcdefg,%s需要的是参数是指针类型,会自动解引用到'\0'
//	printf("%c\n", *pa); //a
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdefg"; //"abcdefg"是一个常量字符串,将字符串的首地址(a的地址)赋值给p
//	//*p = "w"; //(常量无法更改)Segmentation fault -- 段错误
//	printf("%s\n", p);
//
//	//printf("%c\n", *p); //a
//	//printf("%s\n", p);  //abcdefg,,%s需要的是参数是指针类型,会自动解引用到'\0'
//
//	return 0;
//}


//面试题
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


//指针数组 --数组
//int main()
//{
//	int arr[10] = { 0 }; //整形数组
//	char ch[5] = { 0 }; //字符数组
//	int* parr[4]; //存放整形指针的数组 --指针数组
//	char* pch[5]; //存放字符指针的数组 --指针数组
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


//数组指针 --指针
//int main()
//{
//	int* p = NULL; //p是整型指针 --指向整形的指针 --可以存放整形的地址
//	char* pc = NULL; //pc是字符指针 --指向字符的指针 --可以存放字符的地址
//	//数组指针 --指向数组的指针 --存放数组的地址
//
//	
//	//arr数组名 --首元素地址
//	//&arr[0] --首元素的地址
//	//&arr --数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", sizeof(arr)); //40
//	printf("%d\n", sizeof(&arr[0])); //4
//	printf("%d\n", sizeof(&arr)); //4
//
//	int(*p)[10] = &arr;//数组的地址存储起来
//	//上面的p就是数组指针
//
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//    char*   (*pa)   [5] = &arr;
////pa指向的数组中的元素类型是char*;  说明pa是指针;  pa指向的数组包含5个元素
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
//	//	printf("%d ", (*pa)[i]); //*pa == arr(数组名)
//	//}
//	return 0;
//}


//二维数组(数组指针通常引用于二位数组)
//参数是数组的形式
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
//参数是指针的形式
//数组指针
void print2(int(*pa)[5], int x, int y)//二维数组传递的是首元素地址,二维数组的首元素为一维数组
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
//	//print1(arr, 3, 5); //arr -- 数组名 -- 首元素地址 
//	printf("\n");
//	print2(arr, 3, 5); //arr -- 数组名 -- 首元素地址 --首元素是第一行的一维数组
//	
//	
//	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr2;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]); //以p为起始地址,访问下标为i的地址
//		//printf("%d ", *(p + i));
//		//printf("%d ", *(arr2 + i));
//		//printf("%d ", arr2[i]); //arr2[i] == *(arr2+i) == *(p+i) == p[i]
//                                //以arr2为起始地址,访问下标为i的地址
//	}
//	return 0;
//}