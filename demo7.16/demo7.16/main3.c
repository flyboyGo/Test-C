#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <memory.h>


//内存操作函数
//内存拷贝函数
//void * memcpy ( void * destination, const void * source, size_t num );
/*
* 函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置。
  这个函数在遇到 '\0' 的时候并不会停下来。
  如果source和destination有任何的重叠，复制的结果都是未定义的。
*/

struct Stu
{
	char name[20];
	int age;
};
void* my_memcpy(void* dest, const void* res, size_t num)
{
	assert(dest && res);
	void* tmp = dest;
	while (num)
	{
		*((char*)dest) = *((char*)res);
		++(char*)dest;
		++(char*)res;
		num--;
	}
	return tmp;
}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//
//	struct Stu arr3[] = { {"jack",20},{"lucy",18} };
//	struct Stu arr4[3] = { 0 };
//	//memcpy(arr4, arr3, sizeof(arr3));
//
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}


//C语言标准
//memcpy  只要处理 不重叠的内存拷贝就可以
//memmove 可以处理重叠内存的拷贝


//内存拷贝函数(拷贝是内存可以重叠)
//void * memmove ( void * destination, const void * source, size_t num );
/*
*  和memcpy的差别就是memmove函数处理的源内存块和目标内存块是可以重叠的。
*  如果源空间和目标空间出现重叠，就得使用memmove函数处理。
*/

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memcpy(arr + 2, arr, 20);
//	memmove(arr + 2, arr, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}