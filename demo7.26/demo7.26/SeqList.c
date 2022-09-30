#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

//��ʼ������ʵ��
void SeqLisInit(SL* ps)
{
	ps->data = NULL;
	ps->size = ps->capacity = 0;
}

//��ӡ����ʵ��
void SeqListPrintf(const SL* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n");
}

//���ٺ�������
void SeqListDestory(SL* ps)
{
	free(ps->data);
	ps->data = NULL;
	ps->size = ps->capacity = 0;
}

//β�庯��ʵ��
void SeqListPushBack(SL* ps, SLDataType x)
{
	//û�пռ䡢�ռ䲻��,����
	if (ps->capacity == ps->size)
	{
		int newcapacity = ps->capacity == 0 ? DEFAULT_MALLOC : ps->capacity * 2;
		SLDataType* pN = (SLDataType*)realloc(ps->data, newcapacity * sizeof(SLDataType));
		if (pN == NULL)
		{
			perror("realloc fail");
			exit(-1); //exitֱ����ֹ��������,return����ֹ��ǰ����
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

//βɾ��������
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