#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void my_print_int(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void my_print_float(float arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%.2f ",arr[i]);
	}
}
void my_swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	char tmp = 0;
	for (i = 0; i < width; i++)
	{
		tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void my_qsort(void* base, int num, int width, int(*cmp)(void* e1, void* e2))
{
	int i = 0;
	for (i = 0; i < num; i++)
	{
		int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)(base)+j * width, (char*)(base)+(j + 1) * width) > 0)
			{
				my_swap((char*)(base)+j * width, (char*)(base)+(j + 1) * width, width);
			}
		}
	}
}
int my_cmp_int(void* e1, void* e2)
{
	return *((int*)e1) - *((int*)e2);
}
int my_cmp_float(void* e1, void* e2)
{
	return (int)(*((float*)e1) - *((float*)e2));
}
//int main()
//{
//	int arr[] = {1,0,2,9,3,8,4,7,5,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr,sz,sizeof(arr[0]),my_cmp_int);
//	my_print_int(arr, sz);
//
//	float frr[] = { 3,6,7,0,5,1,6,7,2,4 };
//	int sz2 = sizeof(frr) / sizeof(frr[0]);
//	my_qsort(frr, sz2, sizeof(frr[0]), my_cmp_float);
//	my_print_float(frr, sz2);
//	return 0;
//}