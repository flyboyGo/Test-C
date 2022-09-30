#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

//初始化函数实现
void SeqLisInit(SL* ps)
{
	ps->data = NULL;
	ps->size = ps->capacity = 0;
}

//打印函数实现
void SeqListPrintf(const SL* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n");
}

//销毁函数声明
void SeqListDestory(SL* ps)
{
	free(ps->data);
	ps->data = NULL;
	ps->size = ps->capacity = 0;
}

//尾插函数实现
void SeqListPushBack(SL* ps, SLDataType x)
{
	//没有空间、空间不足,扩容
	if (ps->capacity == ps->size)
	{
		int newcapacity = ps->capacity == 0 ? DEFAULT_MALLOC : ps->capacity * 2;
		SLDataType* pN = (SLDataType*)realloc(ps->data, newcapacity * sizeof(SLDataType));
		if (pN == NULL)
		{
			perror("realloc fail");
			exit(-1); //exit直接中止整个程序,return是中止当前函数
		}
		ps->data = pN;
		ps->capacity = newcapacity;
	}

	ps->data[ps->size] = x;
	ps->size++;
}

void SeqListPushFront(SL* ps, SLDataType x)
{

}

//尾删函数声明
void SeqListPopBack(SL* ps)
{

	//if (ps->size > 0)
	//{
	//	ps->size--;
	//	ps->capacity++;
	//}

	assert(ps->size > 0);
	ps->size--;
	ps->capacity++;
}

void SeqListPopFront(SL* ps)
{

}