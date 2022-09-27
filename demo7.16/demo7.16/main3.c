#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <memory.h>


//�ڴ��������
//�ڴ濽������
//void * memcpy ( void * destination, const void * source, size_t num );
/*
* ����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ�á�
  ������������� '\0' ��ʱ�򲢲���ͣ������
  ���source��destination���κε��ص������ƵĽ������δ����ġ�
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


//C���Ա�׼
//memcpy  ֻҪ���� ���ص����ڴ濽���Ϳ���
//memmove ���Դ����ص��ڴ�Ŀ���


//�ڴ濽������(�������ڴ�����ص�)
//void * memmove ( void * destination, const void * source, size_t num );
/*
*  ��memcpy�Ĳ�����memmove����������Դ�ڴ���Ŀ���ڴ���ǿ����ص��ġ�
*  ���Դ�ռ��Ŀ��ռ�����ص����͵�ʹ��memmove����������
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