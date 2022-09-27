#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>

struct S
{
	int n;
	int arr[0];
};

struct S2
{
	int n;
	int arr[0];//未知大小的 - 柔性数组成员 - 数组的大小是可以调整的
};

//int main()
//{
//	/*char* str = "abcd";
//	printf(str);*/
//
//	struct S2 s;
//	printf("%d\n", sizeof(s)); // 4个字节
//	struct S2* ps = (struct S2*)malloc(sizeof(struct S2) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	struct S2* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//		ps = ptr;
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

struct S3
{
	int n;
	int* arr;
};

//int main()
//{
//	struct S3* ps = (struct S3*)malloc(sizeof(struct S3));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//
//	//调整大小
//	int* ptr = (int*)realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps->arr);
//	free(ps);
//	ps->arr = NULL;
//	ps = NULL;
//
//	return 0;
//}